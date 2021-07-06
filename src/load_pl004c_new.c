#include "bayonetta_native_types.h"
#include "helper_funcs.h"

#define pl004c_pl004c_wtb ((char *)0x00E74468)
#define pl004c_pl004c_wmb ((char *)0x00E74450)
#define pl004c_pl004ctexA_wtb ((char *)0x00E74434)
#define pl004c_pl004ctexB_wtb ((char *)0x00E74418)
#define pl004c_pl004ctexC_wtb ((char *)0x00E743FC)
#define pl004c_pl004ctexD_wtb ((char *)0x00E743E0)

extern
__thiscall
int32_t
bayo_load_pl004c_pl004c_new(struct bayoActorGarment_t *garment) {
    bayoActor_t *actor = (bayoActor_t*)garment;
    void *wtbHandle;
    void *wmbHandle;
    void *attHandle;
    void *flgHandle;
    struct bayoMesh_t *mesh;
    int32_t result;
    int32_t i;

    wtbHandle = bayo_getAssetHandle(pl004c_pl004c_wtb);
    wmbHandle = bayo_getAssetHandle(pl004c_pl004c_wmb);

    result = bayoActor_loadWMBAndWTB(actor, wmbHandle, wtbHandle);
    if (!result)
        return 0;

    wtbHandle = bayo_getAssetHandle(pl004c_pl004ctexA_wtb);
    bayoSamplers_loadWTBStatic(garment->samplers, wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl004c_pl004ctexB_wtb);
    bayoSamplers_loadWTBStatic(garment->samplers + 1, wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl004c_pl004ctexC_wtb);
    bayoSamplers_loadWTBStatic(garment->samplers + 2, wtbHandle);
    wtbHandle = bayo_getAssetHandle(pl004c_pl004ctexD_wtb);
    bayoSamplers_loadWTBStatic(garment->samplers + 3, wtbHandle);

    attHandle = bayo_getAssetHandle("pl004c.dat\\pl004c.att");
    if( !bayoActor_loadATT(actor, attHandle) ) {
        bayoActor_allocInitAttachPoints(actor, 3, heap_SCN);
        bayoActor_attachBone(actor,  0,  9, 0);
        bayoActor_attachBone(actor, 41, 15, 0);
        bayoActor_attachBone(actor, 82,  6, 0);
    }

    bayoActor_setMeshesUnknownFlags(actor, 0x13);

    flgHandle = bayo_getAssetHandle("pl004c.dat\\pl004c.flg");
    if (!bayoActor_loadFLG(actor, flgHandle)) {
        set_mesh_substruct_flags(actor, mesh,  0, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  1, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  2, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  3, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  8, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh,  9, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh, 10, 0xFFFFFFBF, 0x00002000);
        set_mesh_substruct_flags(actor, mesh, 11, 0xFFFFFFBF, 0x00002000);
    }

    actor->funcs->func3(actor, 0);
    garment->field_0x6920 = 0;

    return 1;
}
