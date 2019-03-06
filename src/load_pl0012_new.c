#include "bayonetta_native_types.h"

extern int dummy;

#define pl0012_pl0012_wtb ((char *)0x00E700F8)
#define pl0012_pl0012_wmb ((char *)0x00E700E0)
#define pl0012_pl0012texA_wtb ((char *)0x00E70244)
#define pl0012_pl0012texB_wtb ((char *)0x00E70228)
#define pl0012_pl0012texC_wtb ((char *)0x00E7020C)
#define pl0012_pl0012texD_wtb ((char *)0x00E701F0)
#define pBayoGlobalInstance2 ((struct bayoInstance_s **)0x05A57A78)

#define MEMBER_ADDR_AT_OFFSET(ptr, offset) ((uintptr_t)(ptr) + offset)

extern
__attribute((thiscall))
int32_t
bayoLoad_pl0012_new(struct bayoActor_s *actor) {
    void *wtbHandle;
    void *wmbHandle;
    void *attHandle;
    struct bayoMesh_s *mesh;
    int32_t result;
    int32_t i;
    int32_t numAttachPoints;
    struct bayoAttachPoint_s *pAttachPoints;
    __attribute((thiscall))
        void
        (* fptr)(struct bayoActor_s *, int32_t);

    wtbHandle = bayoGetAssetHandle(pl0012_pl0012_wtb);
    wmbHandle = bayoGetAssetHandle(pl0012_pl0012_wmb);

    result = bayoLoad_WMB_WTB(actor, wmbHandle, wtbHandle);
    if (result) {
        attHandle = bayoGetAssetHandle("pl0012.dat\\pl0012.att");
        if(attHandle && *(int32_t *)attHandle > 0) {
            numAttachPoints = *(int32_t *)attHandle;
            pAttachPoints = (struct bayoAttachPoint_s *)
                ((int32_t *)attHandle + 1);

            bayoAllocaAttachPoints(actor, numAttachPoints, pBayoGlobalInstance2);
            for(i = 0; i < numAttachPoints; i++) {
                bayoAttachBone(actor,
                               pAttachPoints[i].sourceBoneIndex,
                               pAttachPoints[i].targetBoneIndex,
                               pAttachPoints[i].option);
            }
        } else {
            bayoAllocaAttachPoints(actor, 3, pBayoGlobalInstance2);
            bayoAttachBone(actor, 0, 9, 0);
            bayoAttachBone(actor, 41, 15, 0);
            bayoAttachBone(actor, 82, 6, 0);
        }
        wtbHandle = bayoGetAssetHandle(pl0012_pl0012texA_wtb);
        bayoLoadWTBStatic(
               (struct bayoTextureCacheItem_s *)MEMBER_ADDR_AT_OFFSET(
                   actor,
                   0x0BF0),
               wtbHandle);
        wtbHandle = bayoGetAssetHandle(pl0012_pl0012texB_wtb);
        bayoLoadWTBStatic(
               (struct bayoTextureCacheItem_s *)MEMBER_ADDR_AT_OFFSET(
                   actor,
                   0x0C00),
               wtbHandle);
        wtbHandle = bayoGetAssetHandle(pl0012_pl0012texC_wtb);
        bayoLoadWTBStatic(
               (struct bayoTextureCacheItem_s *)MEMBER_ADDR_AT_OFFSET(
                   actor,
                   0x0C10),
               wtbHandle);
        wtbHandle = bayoGetAssetHandle(pl0012_pl0012texD_wtb);
        bayoLoadWTBStatic(
               (struct bayoTextureCacheItem_s *)MEMBER_ADDR_AT_OFFSET(
                   actor,
                   0x0C20),
               wtbHandle);

        bayoSetMeshesUnknownFlags(actor, 0x13);

        for (i = 0; i < 4; i++) {
            mesh = bayoGetActorMesh(actor, i);
            if (mesh) {
                *(uint32_t *)MEMBER_ADDR_AT_OFFSET(
                    *(uint32_t *)MEMBER_ADDR_AT_OFFSET(mesh, 0x70),
                    0x10) &= 0xFFFFFFBF;
                *(uint32_t *)MEMBER_ADDR_AT_OFFSET(
                    *(uint32_t *)MEMBER_ADDR_AT_OFFSET(mesh, 0x70),
                    0x10) |= 0x00002000;
            }
        }

        for (i = 8; i < 12; i++) {
            mesh = bayoGetActorMesh(actor, i);
            if (mesh) {
                *(uint32_t *)MEMBER_ADDR_AT_OFFSET(
                    *(uint32_t *)MEMBER_ADDR_AT_OFFSET(mesh, 0x70),
                    0x10) &= 0xFFFFFFBF;
                *(uint32_t *)MEMBER_ADDR_AT_OFFSET(
                    *(uint32_t *)MEMBER_ADDR_AT_OFFSET(mesh, 0x70),
                    0x10) |= 0x00002000;
            }
        }
        fptr = (__attribute((thiscall)) void (*)(struct bayoActor_s *, int32_t))
                *(uintptr_t *)MEMBER_ADDR_AT_OFFSET(
                    *(uint32_t *)MEMBER_ADDR_AT_OFFSET(actor, 0x0),
                    0x8);
        fptr(actor, 0);
        *(uint32_t *)MEMBER_ADDR_AT_OFFSET(actor, 0x6920) = 0;
        result = 1;
    }

    return result;
}
