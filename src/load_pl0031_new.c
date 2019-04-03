#include "bayonetta_native_types.h"
#include "helper_funcs.h"

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

