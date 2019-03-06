#ifndef __BAYONETTA_NATIVE_TYPES_H
#define __BAYONETTA_NATIVE_TYPES_H
#include <inttypes.h>

// thanks: http://ghettohaxxx-blog.azurewebsites.net/sparse-offset-based-cc-structs/
#define CAT_(x, y) x ## y
#define CAT(x, y) CAT_(x, y)

#define OPAD(size) uint8_t CAT(_pad_, __COUNTER__)[size]
#define OSTRUCT(name, size) struct name { union { OPAD(size);
#define OSTRUCT_END };};
#define OFIELD(off, field) struct { OPAD(off); field; }

#define ASSERT_STRSIZE(struc, size) \
        _Static_assert(sizeof( struc ) == (size), "size of " #struc " != " #size )
#define ASSERT_STROFF(struc, member, offset) \
        _Static_assert(offsetof( struc , member ) == (offset), "offset of " #struc "." #member " != " #offset )

struct bayoAttachPoint_s {
    int32_t sourceBoneIndex;
    int32_t targetBoneIndex;
    int32_t option;
};

struct matLine4_s {
    float v1;
    float v2;
    float v3;
    float v4;
};

struct vector4_s {
    float x;
    float y;
    float z;
    float w;
};

struct vector3_s {
    float x;
    float y;
    float z;
};

struct matrix4x4_s {
    struct matLine4_s a;
    struct matLine4_s b;
    struct matLine4_s c;
    struct matLine4_s d;
};

struct bayoContext_s;

struct bayoBone_s;

struct bayoActor_s;

struct bayoInstance_s;

struct bayoTextureCacheItem_s;

struct bayoMesh_s;

struct bayoFuncs_s;

OSTRUCT(bayoFuncs_s, 0xc)
OFIELD(0x8, __attribute((thiscall)) void (*func3)(struct bayoActor_s *, int32_t));
OSTRUCT_END

OSTRUCT(bayoSamplerData_s, 0x6c)
OSTRUCT_END

OSTRUCT(bayoActorMotionInfos_s, 0x244)
OSTRUCT_END

struct bayoSamplersInfos_s {
    void *wtbHandle;
    struct bayoSamplerData_s *pSamplers;
    int32_t samplerCount;
    int32_t unknown;
};
ASSERT_STRSIZE(struct bayoSamplersInfos_s, 0x10);

struct bayoBone_s {
    struct      matrix4x4_s transform;
    struct      matrix4x4_s localTransformMatrix;
    struct      matrix4x4_s transform3;
    struct      vector4_s localPosition;
    struct      vector4_s eulerAngles;
    struct      vector4_s localScale;
    struct      vector4_s cumulativeScale;
    float       orientation;
    struct      matrix4x4_s *pAdditionalTransform;
    int32_t     globalBoneIndex;
    int32_t     rotationOrder;
    struct      bayoBone_s *pParent;
    struct      bayoBone_s *pNextBone;
    uint32_t    flags;
    uint32_t    unknown;
};
ASSERT_STRSIZE(struct bayoBone_s, 0x120);


struct bayoExp_s {
    void *expHandle;
    struct bayoActor_s *pActor;
    uint32_t flags;
    float fArray[4];
    uint32_t iArray[4];
    int8_t fArrayCount;
    int8_t iArrayCount;
    int16_t unknown;
};
ASSERT_STRSIZE(struct bayoExp_s, 0x30);

struct vertexStream_s {
    void *pStream;
    void *pSourceStream;
    uint32_t structSize;
    uint32_t numVertices;
};
ASSERT_STRSIZE(struct vertexStream_s, 0x10);


struct bayoBatch_s;

OSTRUCT(bayoBuffersStream_s, 0x20)
OFIELD(0x0, struct vertexStream_s vertexStream);
OSTRUCT_END

struct bayoBuffers_s {
    int32_t maxBoneRef;
    struct bayoBuffersStream_s positions;
    struct bayoBuffersStream_s vertices;
    struct bayoBuffersStream_s verticesExData;
    struct bayoBuffersStream_s normals;
    struct bayoSamplersInfos_s samplers;
    int32_t vertexSize;
    int32_t numBatch;
    struct bayoBatch_s *pBatches;
    int32_t samplerField0x60BatchCount;
    int32_t samplerField0x64BatchCount;
    int32_t normalBatchCount;
    struct bayoBatch_s *pLastSamplerField0x60Batch;
    struct bayoBatch_s *pLastSamplerField0x64Batch;
    struct bayoBatch_s *pLastormalBatch;
    int32_t unknown;
};
ASSERT_STRSIZE(struct bayoBuffers_s, 0xBC);


OSTRUCT(bayoUnknownMeshSubstruct_s, 0xA8)
OFIELD(0x8, struct bayoSamplersInfos_s *pAnimatedSamplers);
OFIELD(0x10, uint32_t flags);
OFIELD(0x14, void *boneRefsInfosArray);
OFIELD(0x20, int32_t two);
OFIELD(0x5C, int32_t actorField_2B4);
OSTRUCT_END
ASSERT_STRSIZE(struct bayoUnknownMeshSubstruct_s, 0xA8);


struct bayoMeshGeometryTable_s;
struct bayoGeometryDescriptor_s;

OSTRUCT(bayoMesh_s, 0xB0)
OFIELD(0x0, struct vector3_s hitBox);
OFIELD(0x10, int32_t totalBoneRefs);
OFIELD(0x18, struct bayoMesh_s *nextMesh);
OFIELD(0x1C, struct vector3_s corner1);
OFIELD(0x28, struct vector3_s corner2);
OFIELD(0x34, struct vector3_s center);
OFIELD(0x40, float height);
OFIELD(0x44, float radius);
OFIELD(0x48, char * pName);
OFIELD(0x54, uint32_t unknownFlags);
OFIELD(0x6C, struct bayoBuffers_s *pBuffersStruct);
OFIELD(0x70, struct bayoUnknownMeshSubstruct_s *pUnknownSubstruct);
OFIELD(0x74, struct bayoMeshGeometryTable_s *pGeometryTable);
OFIELD(0x78, struct bayoGeometryDescriptor_s **ppGeometryDescriptor);
OSTRUCT_END
ASSERT_STRSIZE(struct bayoMesh_s, 0xB0);

OSTRUCT(bayoActor_s, 0x690)
OFIELD(0x0, struct bayoFuncs_s *funcs);

OFIELD(0x10, struct bayoBone_s baseBone);
OFIELD(0x130, struct matrix4x4_s transform);
OFIELD(0x170, struct matrix4x4_s inverseTransform);
OFIELD(0x1B0, void *wmbHandle);
OFIELD(0x1B4, struct matrix4x4_s *pTransformMatricesBis);
OFIELD(0x1B8, struct matrix4x4_s *pInverseTransformMatrices);
OFIELD(0x1BC, struct matrix4x4_s *pTransformMatrices);
OFIELD(0x1C0, struct bayoSamplersInfos_s samplers);
OFIELD(0x1D0, struct bayoSamplersInfos_s animatedSamplers);
OFIELD(0x1E0, struct bayoMesh_s *firstMesh);
OFIELD(0x1E4, struct bayoMesh_s *meshes);
OFIELD(0x1E8, int32_t numMeshes);

OFIELD(0x230, int32_t numLocalBones);
OFIELD(0x234, int32_t lastLocalBoneIndex);
OFIELD(0x238, struct bayoBone_s **ppBones);

OFIELD(0x244, struct vector3_s globalCorner1);
OFIELD(0x250, struct vector3_s globalCorner2);
OFIELD(0x25C, struct vector3_s globalCenter);
OFIELD(0x268, float globalHeight);
OFIELD(0x26C, float globalRadius);
OFIELD(0x270, struct bayoBone_s *pCenterBone);

OFIELD(0x358, int32_t bAnimatedMaterial);

OFIELD(0x390, struct bayoContext_s *bayoContext);

OFIELD(0x3D0, struct bayoActorMotionInfos_s motionInfos);

OFIELD(0x660, struct bayoExp_s exp);

OSTRUCT_END
ASSERT_STRSIZE(struct bayoActor_s, 0x690);

static
void * (*const bayoGetAssetHandle)(const char *path)
    = (void *)0x00C5F5E0;

static
__attribute((thiscall))
    int32_t
    (*const bayoLoad_WMB_WTB)(struct bayoActor_s *actor,
                        void * wmbHandle,
                        void * wtbHandle)
    = (void *)0x004DEA00;

static
__attribute((thiscall))
    struct bayoAttachPoint_s *
    (*const bayoAttachBone)(struct bayoActor_s *actor,
                      int32_t sourceBoneIndex,
                      int32_t targetBoneIndex,
                      int32_t option)
    = (void *)0x00454C20;

static
__attribute((thiscall))
    int32_t
    (*const bayoAllocaAttachPoints)(struct bayoActor_s *actor,
                              int32_t numAttachPoints,
                              struct bayoInstance_s **pInstance)
    = (void *)0x00451B20;

static
__attribute((thiscall))
    int32_t
    (*const bayoLoadWTBStatic)(struct bayoTextureCacheItem_s *cacheItem,
                         void *wtbHandle)
    = (void *)0x00C5BBE0;

static
__attribute((thiscall))
    int32_t
    (*const bayoSetMeshesUnknownFlags)(struct bayoActor_s *actor,
                                 uint32_t flags)
    = (void *)0x004A4750;

static
__attribute((thiscall))
    struct bayoMesh_s *
    (*const bayoGetActorMesh)(struct bayoActor_s *actor,
                        int32_t meshIndex)
    = (void *)0x004A32E0;

#endif
