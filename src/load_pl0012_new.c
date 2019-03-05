#include "bayonetta_native_types.h"

extern int toto;

int toto = 3;

extern
__attribute((thiscall))
int32_t
bayoLoad_pl0012_new(struct bayoActor_s *actor) {
    void * wtbHandle;
    void * wmbHandle;
    toto = 1;
    //wtbHandle = bayoGetAssetHandle((char *)0x00E700F8);
    wtbHandle = bayoGetAssetHandle("pl0012.dat\\pl0012.wtb");
    wmbHandle = bayoGetAssetHandle((char *)0x00E700E0);

    return bayoLoad_WMB_WTB(actor, wmbHandle, wtbHandle);
}
