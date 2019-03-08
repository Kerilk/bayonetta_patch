#include "bayonetta_native_types.h"

extern int dummy;

#define pl0012_pl0012_wtb ((char *)0x00E700F8)
#define pl0012_pl0012_wmb ((char *)0x00E700E0)
#define pl0012_pl0012texA_wtb ((char *)0x00E70244)
#define pl0012_pl0012texB_wtb ((char *)0x00E70228)
#define pl0012_pl0012texC_wtb ((char *)0x00E7020C)
#define pl0012_pl0012texD_wtb ((char *)0x00E701F0)
#define pBayoGlobalInstance2 ((struct bayoInstance_t **)0x05A57A78)

#define MEMBER_ADDR_AT_OFFSET(ptr, offset) ((uintptr_t)(ptr) + offset)

static
__attribute((thiscall))
__attribute__ ((noinline))
int32_t
bayoLoadATT(struct bayoActor_t *actor, void *attHandle) {
    int32_t numAttachPoints;
    struct bayoAttachPoint_t *pAttachPoints;
    int32_t res;
    int32_t i;

    res = 0;
    if(attHandle && *(int32_t *)attHandle > 0) {
        numAttachPoints = *(int32_t *)attHandle;
        pAttachPoints = (struct bayoAttachPoint_t *)
                ((int32_t *)attHandle + 1);

        bayoAllocaAttachPoints(actor, numAttachPoints, pBayoGlobalInstance2);
        for(i = 0; i < numAttachPoints; i++) {
            bayoAttachBone(actor,
                           pAttachPoints[i].sourceBoneIndex,
                           pAttachPoints[i].targetBoneIndex,
                           pAttachPoints[i].option);
        }
        res = 1;
    }
    return res;
}

extern
__attribute((thiscall))
int32_t
bayoLoad_pl0012_new(struct bayoActor_t *actor) {
    void *wtbHandle;
    void *wmbHandle;
    void *attHandle;
    struct bayoMesh_t *mesh;
    int32_t result;
    int32_t i;

    wtbHandle = bayoGetAssetHandle(pl0012_pl0012_wtb);
    wmbHandle = bayoGetAssetHandle(pl0012_pl0012_wmb);

    result = bayoLoad_WMB_WTB(actor, wmbHandle, wtbHandle);
    if (result) {
        attHandle = bayoGetAssetHandle("pl0012.dat\\pl0012.att");
        if( !bayoLoadATT(actor, attHandle) ) {
            bayoAllocaAttachPoints(actor, 3, pBayoGlobalInstance2);
            bayoAttachBone(actor, 0, 9, 0);
            bayoAttachBone(actor, 41, 15, 0);
            bayoAttachBone(actor, 82, 6, 0);
        }
        wtbHandle = bayoGetAssetHandle(pl0012_pl0012texA_wtb);
        bayoLoadWTBStatic(
               (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
                   actor,
                   0x0BF0),
               wtbHandle);
        wtbHandle = bayoGetAssetHandle(pl0012_pl0012texB_wtb);
        bayoLoadWTBStatic(
               (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
                   actor,
                   0x0C00),
               wtbHandle);
        wtbHandle = bayoGetAssetHandle(pl0012_pl0012texC_wtb);
        bayoLoadWTBStatic(
               (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
                   actor,
                   0x0C10),
               wtbHandle);
        wtbHandle = bayoGetAssetHandle(pl0012_pl0012texD_wtb);
        bayoLoadWTBStatic(
               (struct bayoTextureCacheItem_t *)MEMBER_ADDR_AT_OFFSET(
                   actor,
                   0x0C20),
               wtbHandle);

        bayoSetMeshesUnknownFlags(actor, 0x13);

        for (i = 0; i < 4; i++) {
            mesh = bayoGetActorMesh(actor, i);
            if (mesh) {
                mesh->pUnknownSubstruct->flags &= 0xFFFFFFBF;
                mesh->pUnknownSubstruct->flags |= 0x00002000;
            }
        }

        for (i = 8; i < 12; i++) {
            mesh = bayoGetActorMesh(actor, i);
            if (mesh) {
                mesh->pUnknownSubstruct->flags &= 0xFFFFFFBF;
                mesh->pUnknownSubstruct->flags |= 0x00002000;
            }
        }
        actor->funcs->func3(actor, 0);
        *(uint32_t *)MEMBER_ADDR_AT_OFFSET(actor, 0x6920) = 0;
        result = 1;
    }

    return result;
}
