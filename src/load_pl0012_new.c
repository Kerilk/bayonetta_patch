#include "bayonetta_native_types.h"

extern int dummy;

#define pBayoHeap3 ((struct bayoHeapBase_t *)0x05A57A78)

#define MEMBER_ADDR_AT_OFFSET(ptr, offset) ((uintptr_t)(ptr) + offset)

#define pl0012_pl0012_wtb ((char *)0x00E700F8)
#define pl0012_pl0012_wmb ((char *)0x00E700E0)
#define pl0012_pl0012texA_wtb ((char *)0x00E70244)
#define pl0012_pl0012texB_wtb ((char *)0x00E70228)
#define pl0012_pl0012texC_wtb ((char *)0x00E7020C)
#define pl0012_pl0012texD_wtb ((char *)0x00E701F0)

#define set_mesh_substruct_flags(actor, mesh, index, mask, flag) {\
    mesh = bayoActor_getMesh(actor, index);\
    if (mesh) {\
        mesh->pUnknownSubstruct->flags &= mask;\
        mesh->pUnknownSubstruct->flags |= flag;\
    }\
}

static
__thiscall
__attribute__((noinline))
int32_t
bayoActor_loadATT(struct bayoActor_t *actor, void *attHandle) {
    int32_t numAttachPoints;
    struct bayoAttachPoint_t *pAttachPoints;
    int32_t res;
    int32_t i;

    res = 0;
    if(attHandle && *(int32_t *)attHandle > 0) {
        numAttachPoints = *(int32_t *)attHandle;
        pAttachPoints = (struct bayoAttachPoint_t *)
                ((int32_t *)attHandle + 1);

        bayoActor_allocInitAttachPoints(actor,
                                     numAttachPoints,
                                     pBayoHeap3);
        for(i = 0; i < numAttachPoints; i++) {
            bayoActor_attachBone(actor,
                                 pAttachPoints[i].sourceBoneIndex,
                                 pAttachPoints[i].targetBoneIndex,
                                 pAttachPoints[i].option);
        }
        res = 1;
    }
    return res;
}

static
__thiscall
__attribute__((noinline))
int32_t
bayoActor_loadFLG(struct bayoActor_t *actor, void *flgHandle) {
    int32_t i;
    struct flgHeader_t *header;
    struct bayoMesh_t *mesh;
    struct flgMeshUnknownSubstructFlags_t *ussflgs;
    struct flgMeshUnknownFlags_t *uflgs;
    int *data;

    if (!flgHandle)
        return 0;

    header = (struct flgHeader_t *)flgHandle;
    if (header->meshUnknownSubstructFlagsCount != 0 &&
        header->meshUnknownSubstructFlagsOffset != 0) {
        ussflgs = (struct flgMeshUnknownSubstructFlags_t *)
                    ((unsigned char*)flgHandle +
                     header->meshUnknownSubstructFlagsOffset);
        for (i = 0; i < header->meshUnknownSubstructFlagsCount; i++) {
            set_mesh_substruct_flags(actor, mesh,
                                     ussflgs[i].meshIndex,
                                     ussflgs[i].mask,
                                     ussflgs[i].flags);
        }
    }

    if (header->meshUnknownFlagsCount != 0 &&
        header->meshUnknownFlagsOffset != 0) {
        uflgs = (struct flgMeshUnknownFlags_t *)
                    ((unsigned char*)flgHandle +
                     header->meshUnknownFlagsOffset);
        for (i = 0; i < header->meshUnknownFlagsCount; i++) {
            mesh = bayoActor_getMesh(actor, uflgs[i].meshIndex);
            if (mesh) {
                mesh->unknownFlags = uflgs[i].value;
            }
        }
    }

    if (header->meshUnknownSubstructFieldCCount != 0 &&
        header->meshUnknownSubstructFieldCOffset !=0) {
        uflgs = (struct flgMeshUnknownFlags_t *)
                    ((unsigned char*)flgHandle +
                     header->meshUnknownSubstructFieldCOffset);
        for (i = 0; i <header->meshUnknownSubstructFieldCCount; i++) {
            mesh = bayoActor_getMesh(actor, uflgs[i].meshIndex);
            if (mesh) {
                bayoMesh_setUnknownSubstructFieldC(mesh, uflgs[i].value);
            }
        }
    }
    return 1;
}

extern
__thiscall
int32_t
bayo_load_pl0012_pl0012_new(struct bayoActor_t *actor) {
    void *wtbHandle;
    void *wmbHandle;
    void *attHandle;
    void *flgHandle;
    struct bayoMesh_t *mesh;
    int32_t result;
    int32_t i;

    wtbHandle = bayo_getAssetHandle(pl0012_pl0012_wtb);
    wmbHandle = bayo_getAssetHandle(pl0012_pl0012_wmb);

    result = bayoActor_loadWMBAndWTB(actor, wmbHandle, wtbHandle);
    if (!result)
        return 0;

    attHandle = bayo_getAssetHandle("pl0012.dat\\pl0012.att");
    if (!bayoActor_loadATT(actor, attHandle)) {
        bayoActor_allocInitAttachPoints(actor, 3, pBayoHeap3);
        bayoActor_attachBone(actor, 0, 9, 0);
        bayoActor_attachBone(actor, 41, 15, 0);
        bayoActor_attachBone(actor, 82, 6, 0);
    }
    wtbHandle = bayo_getAssetHandle(pl0012_pl0012texA_wtb);
    bayoTextureCacheItem_loadWTBStatic(
           (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
               actor,
               0x0BF0),
           wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl0012_pl0012texB_wtb);
    bayoTextureCacheItem_loadWTBStatic(
           (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
               actor,
               0x0C00),
           wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl0012_pl0012texC_wtb);
    bayoTextureCacheItem_loadWTBStatic(
           (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
               actor,
               0x0C10),
           wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl0012_pl0012texD_wtb);
    bayoTextureCacheItem_loadWTBStatic(
           (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
               actor,
               0x0C20),
           wtbHandle);

    bayoActor_setMeshesUnknownFlags(actor, 0x13);

    flgHandle = bayo_getAssetHandle("pl0012.dat\\pl0012.flg");
    if (!bayoActor_loadFLG(actor, flgHandle)) {
        for (i = 0; i < 4; i++) {
            set_mesh_substruct_flags(actor, mesh, i, 0xFFFFFFBF, 0x00002000);
        }
        for (i = 8; i < 12; i++) {
            set_mesh_substruct_flags(actor, mesh, i, 0xFFFFFFBF, 0x00002000);
        }
    }

    actor->funcs->func3(actor, 0);
    *(uint32_t *)MEMBER_ADDR_AT_OFFSET(actor, 0x6920) = 0;

    return 1;
}

#define pl0031_pl0031_wtb ((char *)0x00E722D8)
#define pl0031_pl0031_wmb ((char *)0x00E722C0)
#define pl0031_pl0031texA_wtb ((char *)0x00E722A4)
#define pl0031_pl0031texB_wtb ((char *)0x00E72288)
#define pl0031_pl0031texC_wtb ((char *)0x00E7226C)

extern
__thiscall
int32_t
bayo_load_pl0031_pl0031_new(struct bayoActor_t *actor) {
    void *wtbHandle;
    void *wmbHandle;
    void *attHandle;
    void *flgHandle;
    struct bayoMesh_t *mesh;
    int32_t result;
    int32_t i;

    wtbHandle = bayo_getAssetHandle(pl0031_pl0031_wtb);
    wmbHandle = bayo_getAssetHandle(pl0031_pl0031_wmb);

    result = bayoActor_loadWMBAndWTB(actor, wmbHandle, wtbHandle);
    if (!result)
        return 0;

    wtbHandle = bayo_getAssetHandle(pl0031_pl0031texA_wtb);
    bayoTextureCacheItem_loadWTBStatic(
           (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
               actor,
               0x0C10),
           wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl0031_pl0031texB_wtb);
    bayoTextureCacheItem_loadWTBStatic(
           (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
               actor,
               0x0C00),
           wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl0031_pl0031texC_wtb);
    bayoTextureCacheItem_loadWTBStatic(
           (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
               actor,
               0x0BF0),
           wtbHandle);

    attHandle = bayo_getAssetHandle("pl0031.dat\\pl0031.att");
    if( !bayoActor_loadATT(actor, attHandle) ) {
        bayoActor_allocInitAttachPoints(actor, 10, pBayoHeap3);
        bayoActor_attachBone(actor,  91,  3, 0);
        bayoActor_attachBone(actor,  92,  4, 0);
        bayoActor_attachBone(actor,  93,  5, 0);
        bayoActor_attachBone(actor,  94,  6, 0);
        bayoActor_attachBone(actor,  95,  7, 0);
        bayoActor_attachBone(actor,  96,  8, 0);
        bayoActor_attachBone(actor,  97,  9, 0);
        bayoActor_attachBone(actor,  98, 13, 0);
        bayoActor_attachBone(actor,  99, 14, 0);
        bayoActor_attachBone(actor, 100, 15, 0);
    }

    bayoActor_setMeshesUnknownFlags(actor, 0x13);

    flgHandle = bayo_getAssetHandle("pl0031.dat\\pl0031.flg");
    if (!bayoActor_loadFLG(actor, flgHandle)) {
        set_mesh_substruct_flags(actor, mesh,  0, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  1, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  2, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  3, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  4, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  5, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  6, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh, 15, 0xFFFFFFFE, 0x00000000);
        set_mesh_substruct_flags(actor, mesh, 16, 0xFFFFFFFE, 0x00000000);


        mesh = bayoActor_getMesh(actor, 17);
        if (mesh) {
            mesh->pUnknownSubstruct->flags &= 0xFFFFFFBB;
            mesh->pUnknownSubstruct->flags |= 0x00002000;
            mesh->unknownFlags = 0x12;
            bayoMesh_setUnknownSubstructFieldC(mesh, 1);
        }
    }

    actor->funcs->func3(actor, 0);
    *(uint32_t *)MEMBER_ADDR_AT_OFFSET(actor, 0x6920) = 0;
    return 1;
}

