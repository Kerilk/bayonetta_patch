#ifndef __BAYONETTA_NATIVE_TYPES_H
#define __BAYONETTA_NATIVE_TYPES_H
#include <inttypes.h>
#include "bayonetta_generated.h"

static
void * (*const bayoGetAssetHandle)(const char *path)
    = (void *)0x00C5F5E0;

static
__attribute((thiscall))
    int32_t
    (*const bayoLoad_WMB_WTB)(struct bayoActor_t *actor,
                        void * wmbHandle,
                        void * wtbHandle)
    = (void *)0x004DEA00;

static
__attribute((thiscall))
    struct bayoAttachPoint_t *
    (*const bayoAttachBone)(struct bayoActor_t *actor,
                      int32_t sourceBoneIndex,
                      int32_t targetBoneIndex,
                      int32_t option)
    = (void *)0x00454C20;

static
__attribute((thiscall))
    int32_t
    (*const bayoAllocaAttachPoints)(struct bayoActor_t *actor,
                              int32_t numAttachPoints,
                              struct bayoInstance_t **pInstance)
    = (void *)0x00451B20;

static
__attribute((thiscall))
    int32_t
    (*const bayoLoadWTBStatic)(struct bayoTextureCacheItem_t *cacheItem,
                         void *wtbHandle)
    = (void *)0x00C5BBE0;

static
__attribute((thiscall))
    int32_t
    (*const bayoSetMeshesUnknownFlags)(struct bayoActor_t *actor,
                                 uint32_t flags)
    = (void *)0x004A4750;

static
__attribute((thiscall))
    struct bayoMesh_t *
    (*const bayoGetActorMesh)(struct bayoActor_t *actor,
                        int32_t meshIndex)
    = (void *)0x004A32E0;

#endif
