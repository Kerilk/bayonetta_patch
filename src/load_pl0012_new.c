#include "bayonetta_native_types.h"
#include "helper_funcs.h"

#define pl0012_pl0012_wtb ((char *)0x00E700F8)
#define pl0012_pl0012_wmb ((char *)0x00E700E0)
#define pl0012_pl0012texA_wtb ((char *)0x00E70244)
#define pl0012_pl0012texB_wtb ((char *)0x00E70228)
#define pl0012_pl0012texC_wtb ((char *)0x00E7020C)
#define pl0012_pl0012texD_wtb ((char *)0x00E701F0)

extern
__thiscall
int32_t
bayo_load_pl0012_pl0012_new(struct bayoActorGarment_t *garment) {
    bayoActor_t *actor = (bayoActor_t*)garment;
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
        bayoActor_allocInitAttachPoints(actor, 3, heap_SCN);
        bayoActor_attachBone(actor, 0, 9, 0);
        bayoActor_attachBone(actor, 41, 15, 0);
        bayoActor_attachBone(actor, 82, 6, 0);
    }
    wtbHandle = bayo_getAssetHandle(pl0012_pl0012texA_wtb);
    bayoSamplers_loadWTBStatic(garment->samplers, wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl0012_pl0012texB_wtb);
    bayoSamplers_loadWTBStatic(garment->samplers + 1, wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl0012_pl0012texC_wtb);
    bayoSamplers_loadWTBStatic(garment->samplers + 2, wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl0012_pl0012texD_wtb);
    bayoSamplers_loadWTBStatic(garment->samplers + 3, wtbHandle);

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
    garment->field_0x6920 = 0;

    return 1;
}


