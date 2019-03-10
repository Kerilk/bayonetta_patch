__stdcall
uint
(*D3DXCreateCubeTextureFromFileInMemoryEx)(
	void * pDevice,
	void * pSrcData,
	uint SrcDataSize,
	uint Size,
	uint MipLevels,
	uint Usage,
	uint Format,
	uint Pool,
	uint Filter,
	uint MipFilter,
	uint ColorKey,
	void * pSrcInfo,
	void * pPalette,
	void * * ppCubeTexture
) = (void *)0x00C85658;

__stdcall
int
(*D3DXCreateTextureFromFileInMemoryEx)(
	void * pDevice,
	void * pSrcData,
	uint SrcDataSize,
	uint Width,
	uint Height,
	uint MipLevels,
	uint Usage,
	uint Format,
	int Pool,
	int Filter,
	int MipFilter,
	int ColorKey,
	void * pSrcInfo,
	void * pPalette,
	void * * ppTexture
) = (void *)0x00C85652;

__stdcall
matrix4x4_t *
(*D3DXMatrixMultiply)(
	matrix4x4_t * a1,
	matrix4x4_t * a2,
	matrix4x4_t * a3
) = (void *)0x00C855D4;

__stdcall
matrix4x4_t *
(*D3DXMatrixRotationX)(
	matrix4x4_t * param_1,
	float param_2
) = (void *)0x00C855F8;

__stdcall
matrix4x4_t *
(*D3DXMatrixRotationY)(
	matrix4x4_t * a1,
	float a2
) = (void *)0x00C855FE;

__stdcall
matrix4x4_t *
(*D3DXMatrixRotationZ)(
	matrix4x4_t * a1,
	float a2
) = (void *)0x00C85616;

__stdcall
vector4_t *
(*D3DXQuaternionSlerp)(
	vector4_t * a1,
	vector4_t * a2,
	vector4_t * a3,
	float a4
) = (void *)0x00C8560A;

__thiscall
int
(*bayoActor_allocInitAttachPoints)(
	bayoActor_t * actor,
	int numAttachPoints,
	bayoInstance_t * * bayoInstance
) = (void *)0x00451B20;

__thiscall
undefined
(*bayoActor_attachBone)(
	bayoActor_t * actor,
	int sourceBone,
	int targetBone,
	int option
) = (void *)0x00454C20;

__thiscall
void
(*bayoActor_computeGlobalBoundingBox)(
	bayoActor_t * bayoActor,
	vector4_t * scale
) = (void *)0x004A5010;

__thiscall
void
(*bayoActor_computeGlobalPosition)(
	bayoActor_t * bayoActor,
	vector4_t * pLocalBonePosition,
	int globalBoneNumber
) = (void *)0x004A4E10;

__thiscall
short *
(*bayoActor_getBoneSymmetriesPtr)(
	bayoActor_t * actor
) = (void *)0x004A38F0;

__thiscall
bayoBone_t *
(*bayoActor_getLocalBone)(
	bayoActor_t * actor,
	int globalBoneIndex
) = (void *)0x004A4DC0;

__thiscall
int
(*bayoActor_getLocalNumBones)(
	bayoActor_t * actor
) = (void *)0x004A37E0;

__thiscall
bayoMesh_t *
(*bayoActor_getMesh)(
	bayoActor_t * actor,
	int meshIndex
) = (void *)0x004A32E0;

__thiscall
int
(*bayoActor_loadAnimatedTextures)(
	bayoActor_t * actor,
	void * wtbHandle
) = (void *)0x004A4850;

__thiscall
int
(*bayoActor_loadMeshesAndBatches)(
	bayoActor_t * actor,
	bayoContext_t * context
) = (void *)0x004A3D70;

__thiscall
int
(*bayoActor_loadSkeleton)(
	bayoActor_t * actor,
	bayoContext_t * context
) = (void *)0x004A6120;

__thiscall
int
(*bayoActor_loadWMBAndWTB)(
	bayoActor_t * actor,
	void * wmbHandle,
	void * wtbHandle
) = (void *)0x004DEA00;

__thiscall
int
(*bayoActor_loadWMBAndWTBHelper)(
	bayoActor_t * actor,
	void * wmbHandle,
	void * wtbHandle
) = (void *)0x004BCF90;

__thiscall
int
(*bayoActor_loadWMBAndWTBHelperWithParam)(
	bayoActor_t * actor,
	void * wmbHandle,
	void * wtbHandle,
	bayoContext_t * bayoContext
) = (void *)0x004A67D0;

__thiscall
int
(*bayoActor_mapGlobalBoneIndexToLocalBoneAndUpdateLocalPosition)(
	bayoActor_t * actor,
	int globalBoneIndex
) = (void *)0x004A4EF0;

__thiscall
void
(*bayoActor_recenterOnBone)(
	bayoActor_t * actor,
	int boneIndex
) = (void *)0x004A5D60;

__thiscall
void
(*bayoActor_removeBoneFlags0x1800)(
	bayoActor_t * actor
) = (void *)0x004A43E0;

__thiscall
int
(*bayoActor_setMeshesUnknownFlags)(
	bayoActor_t * actor,
	uint flags
) = (void *)0x004A4750;

__thiscall
void
(*bayoActor_transformSkeleton)(
	bayoActor_t * actor
) = (void *)0x004A4320;

__thiscall
uint
(*bayoBatch_createIndexBuffer)(
	bayoBatch_t * batch,
	ushort * pIndices,
	uint indexSize,
	uint numIndices
) = (void *)0x00C6F320;

__thiscall
bayoBone_t *
(*bayoBone_init)(
	bayoBone_t * bone
) = (void *)0x004E57A0;

__thiscall
void
(*bayoBone_transformByParentIfNeeded)(
	bayoBone_t * bone
) = (void *)0x004E5C30;

__thiscall
void
(*bayoBone_transformIfNeeded)(
	bayoBone_t * bone
) = (void *)0x004E5C20;

__thiscall
bayoBuffers_t *
(*bayoBuffers_init)(
	bayoBuffers_t * buffers
) = (void *)0x004A1B80;

__thiscall
int
(*bayoCacheItem_checkIfLoaded)(
	bayoCacheItem_t * cacheItem
) = (void *)0x00C5B990;

__thiscall
float
(*bayoCamera_getRotateX)(
	bayoCamera_t * camera
) = (void *)0x00AAB8B0;

__thiscall
bayoActor_t *
(*bayoCamera_setCameraTransform)(
	bayoCamera_t * camera,
	vector4_t * translate,
	vector4_t * translate2,
	vector4_t * vec,
	float rotate_y,
	float rotate_x,
	bayoActor_t * actor,
	dword unknownFieldDueToFlag4
) = (void *)0x00AAB270;

__thiscall
bayoHitItem_t *
(*bayoCloth_allocCLHItems)(
	bayoCloth_t * cloth,
	int clhItemCount,
	bayoInstance_t * * bayoInstance
) = (void *)0x00421720;

__thiscall
int
(*bayoCloth_allocCLPItems)(
	bayoCloth_t * cloth,
	int clpItemCount,
	bayoInstance_t * * bayoInstance
) = (void *)0x004216B0;

__thiscall
void *
(*bayoCloth_bindCLH)(
	bayoCloth_t * cloth,
	void * clhHandle,
	bayoActor_t * actor
) = (void *)0x00423F40;

__thiscall
void *
(*bayoCloth_bindCLHItems)(
	bayoCloth_t * cloth,
	bayoActor_t * actor,
	clhItem_t * pClhItems,
	uint clhItemCount
) = (void *)0x00423CC0;

__thiscall
void
(*bayoCloth_bindCLP)(
	bayoCloth_t * cloth,
	clpHeader_t * clpHandle,
	bayoActor_t * actor,
	bayoActor_t * actor2,
	float floatCoeff
) = (void *)0x00423E00;

__thiscall
int
(*bayoCloth_bindCLPItems)(
	bayoCloth_t * cloth,
	bayoActor_t * actor,
	bayoActor_t * actor2,
	clpItem_t * pClpItems,
	uint clpItemCount,
	float floatCoeff
) = (void *)0x004236A0;

__thiscall
void
(*bayoCloth_bindCLW)(
	bayoCloth_t * cloth,
	int * clwHandle,
	bayoActor_t * actor
) = (void *)0x004210E0;

__thiscall
int
(*bayoCloth_bindCLWItems)(
	bayoCloth_t * cloth,
	bayoActor_t * actor,
	clwItem_t * pClwItems,
	int clwItemCount
) = (void *)0x004202E0;

__thiscall
bayoBone_t *
(*bayoContext_allocBone)(
	bayoContext_t * context
) = (void *)0x004A7BC0;

__thiscall
bayoBone_t * *
(*bayoContext_allocBoneArray)(
	bayoContext_t * context,
	uint numBones
) = (void *)0x004A7C20;

__thiscall
bayoMesh_t *
(*bayoContext_allocInitMesh)(
	bayoContext_t * bayoContext
) = (void *)0x004A7B90;

__thiscall
bayoMesh_t * *
(*bayoContext_allocMeshesArray)(
	bayoContext_t * bayoContext,
	uint numMeshes
) = (void *)0x004A7BE0;

__thiscall
int
(*bayoContext_checkBoneLimit)(
	bayoContext_t * context,
	uint boneNumber
) = (void *)0x004A7BB0;

__thiscall
int
(*bayoContext_checkMeshLimits)(
	bayoContext_t * context,
	uint numMeshes
) = (void *)0x004A7B80;

__thiscall
void
(*bayoExp_applyEffectToSkeleton)(
	bayoExp_t * bayoExp
) = (void *)0x004367D0;

__thiscall
void *
(*bayoExp_bindEXP)(
	bayoExp_t * exp,
	bayoActor_t * actor,
	void * expHandle
) = (void *)0x00435A50;

__thiscall
float
(*bayoExp_computeResult)(
	bayoExp_t * bayoExp,
	expRecord_t * expRecord
) = (void *)0x004365B0;

__thiscall
float
(*bayoExp_getEntryValue)(
	bayoExp_t * bayoExp,
	expEntry_t * expEntry
) = (void *)0x00436890;

__thiscall
int
(*bayoExp_getSpecialExp)(
	bayoExp_t * exp,
	float * value,
	expEntry_t * pEntry
) = (void *)0x00436460;

__thiscall
void
(*bayoExp_modifyEntry)(
	bayoExp_t * exp,
	float * value
) = (void *)0x00436350;

__thiscall
bayoGeometryDescriptor_t *
(*bayoGeometryDescriptor_init)(
	bayoGeometryDescriptor_t * geometryDescriptor
) = (void *)0x004A1CC0;

__thiscall
void *
(*bayoInstance_allocWithAlignement)(
	bayoInstance_t * * ppBayoInstance,
	uint size,
	uint alignment,
	int unknown
) = (void *)0x00C58070;

__thiscall
void *
(*bayoLimits_allocStruct)(
	bayoLimits_t * bayoLimits
) = (void *)0x00C62720;

__thiscall
bayoMeshGeometryTable_t *
(*bayoMeshGeometryTable_init)(
	bayoMeshGeometryTable_t * table
) = (void *)0x0042D060;

__thiscall
void
(*bayoMesh_associateAnimatedTextureCacheItem)(
	bayoMesh_t * mesh,
	bayoTextureCacheItem_t * textureCacheItem
) = (void *)0x0049FCF0;

__thiscall
void
(*bayoMesh_chain)(
	bayoMesh_t * mesh,
	bayoMesh_t * nextMesh
) = (void *)0x0049FBA0;

__thiscall
vector3_t *
(*bayoMesh_getCorner1)(
	bayoMesh_t * mesh
) = (void *)0x004A0350;

__thiscall
vector3_t *
(*bayoMesh_getCorner2)(
	bayoMesh_t * mesh
) = (void *)0x004A0340;

__thiscall
int
(*bayoMesh_init)(
	bayoMesh_t * pMesh,
	bayoWmb_t * wmb,
	int meshIndex
) = (void *)0x004A1200;

__thiscall
void
(*bayoMesh_setFlagIfHasBatchWithSamplerField_60)(
	bayoMesh_t * mesh,
	int param_2
) = (void *)0x004A0FC0;

__thiscall
void
(*bayoMesh_setMeshSubstruct2Field)(
	bayoMesh_t * mesh,
	int actorField_2B4
) = (void *)0x0049FF30;

__thiscall
int
(*bayoMesh_setupBatchMaterials)(
	bayoMesh_t * mesh,
	bayoSamplers_t * meshSamplers
) = (void *)0x004A08C0;

__thiscall
void
(*bayoMotionInfos_computeBaseToRootBoneTransform)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AAC10;

__thiscall
int
(*bayoMotionInfos_computeFrameRelatedMotionData)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x00416980;

__thiscall
void
(*bayoMotionInfos_decodeBlendedMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B22C0;

__thiscall
void
(*bayoMotionInfos_decodeBlendedMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B2410;

__thiscall
void
(*bayoMotionInfos_decodeMaybeBlendedWithOneMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AEC20;

__thiscall
void
(*bayoMotionInfos_decodeMaybeBlendedWithOneMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AF890;

__thiscall
void
(*bayoMotionInfos_decodeMirrorBlendedMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B26F0;

__thiscall
void
(*bayoMotionInfos_decodeMirrorBlendedMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B28A0;

__thiscall
void
(*bayoMotionInfos_decodeMirrorMaybeBlendedWithOneMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B06F0;

__thiscall
void
(*bayoMotionInfos_decodeMirrorMaybeBlendedWithOneMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B13E0;

__thiscall
void
(*bayoMotionInfos_decodeMirrorMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AC560;

__thiscall
void
(*bayoMotionInfos_decodeMirrorMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004ACC50;

__thiscall
void
(*bayoMotionInfos_decodeMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AB680;

__thiscall
int
(*bayoMotionInfos_decodeMotionSpeedAndFlags)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AD510;

__thiscall
void
(*bayoMotionInfos_decodeMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004ABD10;

__thiscall
void
(*bayoMotionInfos_decodeRootParentBoneTransformation)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004A9410;

__thiscall
void
(*bayoMotionInfos_getBlendedParentBoneMotion)(
	bayoMotionInfos_t * motionInfos,
	bayoBlendAnimDescriptor_t * blendDescriptor,
	uint a3,
	int bMirror
) = (void *)0x004B5D70;

__thiscall
void *
(*bayoMotionInfos_getBoneSymmetries)(
	bayoMotionInfos_t * motionInfos,
	bayoActor_t * actor,
	bayoInstance_t * * instance
) = (void *)0x004AD690;

__thiscall
int
(*bayoMotionInfos_getNextBlendedMotTrackGroup)(
	bayoMotionInfos_t * motionInfos,
	vector4_t * vector,
	bayoBlendAnimDescriptor_t * pBlendDescriptors,
	uint blendCount,
	int globalBoneIndex,
	int trackIndex
) = (void *)0x004B2DC0;

__thiscall
int
(*bayoMotionInfos_getNextBlendedRotateTrackGroup)(
	bayoMotionInfos_t * motionInfos,
	vector4_t * vec,
	bayoBlendAnimDescriptor_t * pBlendDescriptos,
	uint blendCount,
	int globalBoneIndex,
	int rotationOrder,
	int bMirror
) = (void *)0x004B3000;

__thiscall
int
(*bayoMotionInfos_getNextBlendedRotateTrackGroupWithFraction)(
	bayoMotionInfos_t * motionInfos,
	vector4_t * pEulerAngles,
	bayoBlendAnimDescriptor_t * pBlendDescripptors,
	int blendCount,
	int globalBoneIndex,
	int rotationOrder,
	float fraction,
	int bMirror
) = (void *)0x004B4310;

__thiscall
int
(*bayoMotionInfos_getNextMaybeBlendedWithOneMotTrackGroup)(
	bayoMotionInfos_t * motionInfos,
	vector4_t * vec,
	bayoBlendAnimDescriptor_t * blendDescriptors,
	int globalBoneIndex,
	int trackIndex
) = (void *)0x004B2BF0;

__thiscall
int
(*bayoMotionInfos_getParentBoneMotion)(
	bayoMotionInfos_t * motionInfos,
	vector4_t * translate,
	vector4_t * rotate,
	vector4_t * scale,
	motHeader_t * pMotHeader,
	motRecord_t * * ppMotRecords,
	void * ppCachedKeys,
	int rotationOrder,
	int bMirror
) = (void *)0x004ADBB0;

__thiscall
void
(*bayoMotionInfos_getParentBoneMotionInterpolFrac)(
	bayoMotionInfos_t * motionInfos,
	vector4_t * translate,
	vector4_t * rotate,
	vector4_t * scale,
	motHeader_t * motHeader,
	motRecord_t * * pMotRecords,
	bayoRecordKeyCacheItem_t * * pCachedKeys,
	int rotationOrder,
	float fraction,
	int bReverseX
) = (void *)0x004AE1B0;

__thiscall
int
(*bayoMotionInfos_increaseMotionProgress)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AB4C0;

__thiscall
void
(*bayoMotionInfos_initTransforms)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004A9B40;

__thiscall
void *
(*bayoMotionInfos_load)(
	bayoMotionInfos_t * motionInfos,
	motHeader_t * pMotHeader,
	float fParam1,
	float date,
	float fParam2,
	int flags,
	char a7
) = (void *)0x004AA4D0;

__thiscall
void
(*bayoMotionInfos_loadWithSEQ)(
	bayoMotionInfos_t * motionInfos,
	motHeader_t * motHeader,
	void * seqHandle,
	float fParam1,
	float frameIndex,
	float fParam2,
	int flags,
	char a7
) = (void *)0x004AA680;

__thiscall
int
(*bayoMotionInfos_readCameraMotions)(
	bayoMotionInfos_t * pMotionInfos,
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecords,
	int mirror_x
) = (void *)0x004A9F40;

__thiscall
int
(*bayoMotionInfos_setBlendAnimDescriptor)(
	bayoMotionInfos_t * motionInfos,
	bayoBlendAnimDescriptor_t * blendDescriptor,
	int noCachedKeyOffset
) = (void *)0x004AEAE0;

__thiscall
int
(*bayoMotionInfos_setBoneAnimatedFlag)(
	bayoMotionInfos_t * motionInfos,
	bayoBone_t * bone,
	motRecord_t * pMotRecord,
	int globalBoneIndex
) = (void *)0x004AA2F0;

__thiscall
void
(*bayoMotionInfos_setMotDefaultValues)(
	bayoMotionInfos_t * pMotInfos,
	int flags
) = (void *)0x004A9850;

__thiscall
void *
(*bayoObject_cleanup)(
	bayoObject_t * object
) = (void *)0x00C5BCA0;

__thiscall
int
(*bayoSamplerCache_findSpecialSampler)(
	bayoSamplerCache_t * samplerCache,
	bayoSamplers_t * * nativeSampler,
	uint * pSamplerID
) = (void *)0x00D52390;

__thiscall
int
(*bayoSamplers_getSamplerField_60)(
	bayoSamplers_t * samplers,
	uint samplerIndex
) = (void *)0x00C5B9F0;

__thiscall
int
(*bayoSamplers_getSamplerField_64)(
	bayoSamplers_t * samplers,
	uint samplerIndex
) = (void *)0x00C5BA10;

__thiscall
void
(*bayoSamplers_init)(
	bayoSamplers_t * samplers
) = (void *)0x00C5B960;

__thiscall
bayoCamera_t *
(*bayoScene_getCamera)(
	bayoScene_t * scene
) = (void *)0x00AAA2C0;

__thiscall
void
(*bayoSeq_init)(
	bayoSeq_t * seq,
	seqHeader_t * seqHeader
) = (void *)0x004BBC70;

__thiscall
void
(*bayoSeq_setFlagsTracksAndDates)(
	bayoSeq_t * seq,
	float previousDate,
	float date,
	float lastFrame
) = (void *)0x004BC3C0;

__thiscall
int
(*bayoTex_getD3DCubeTexture)(
	bayoTex_t * tex,
	char * pSrcData,
	uint srcDataSize,
	D3DXIMAGE_INFO * srcInfo
) = (void *)0x00C687D0;

__thiscall
int
(*bayoTex_getD3DTexture)(
	bayoTex_t * tex,
	void * pSrcData,
	uint srcDataSize,
	uint mipLevels,
	int dynamic,
	D3DXIMAGE_INFO * pSrcInfo
) = (void *)0x00C68760;

__thiscall
void
(*bayoTex_init)(
	bayoTex_t * bayoTexture
) = (void *)0x00C5BBC0;

__thiscall
void
(*bayoTex_init2)(
	bayoTex_t * bayoTexture
) = (void *)0x00C68950;

__thiscall
bool
(*bayoTex_loadCubeTexture)(
	bayoTex_t * bayoTexture,
	uint flags,
	char * pSrcData,
	uint srcDataSize
) = (void *)0x00C5BB60;

__thiscall
bool
(*bayoTex_loadTexture)(
	bayoTex_t * bayoTex,
	uint flags,
	void * pSrcData,
	uint SrcDataSize,
	uint MipLevels,
	int dynamic
) = (void *)0x00C5BAA0;

__thiscall
int
(*bayoTextureCacheItem_loadWTBDynamic)(
	bayoTextureCacheItem_t * textureCacheItem,
	void * wtbHandle
) = (void *)0x00C5BC20;

__thiscall
undefined
(*bayoTextureCacheItem_loadWTBStatic)(
	bayoTextureCacheItem_t * textureCacheItem,
	void * wtbHandle
) = (void *)0x00C5BBE0;

__thiscall
bayoInstance_t * *
(*bayoUndef_getBayoInstance)(
	void * undefObj
) = (void *)0x004BE800;

__thiscall
void
(*bayoUndef_initMaterials)(
	void * iParm1
) = (void *)0x0042CBF0;

__thiscall
void
(*bayoUndef_initUnknownFloatList)(
	bayoUnknownFloatList_t * unknownFloatList
) = (void *)0x004BBBE0;

__thiscall
void
(*bayoUnknownMeshSubstruct_init)(
	bayoUnknownMeshSubstruct_t * unknownMeshSubstruct
) = (void *)0x004A1BD0;

__thiscall
void
(*bayoUnknownMotionSubstruct_init)(
	bayoMotionInfosSubstruct_t * unknownMotionSubstruct,
	int a2
) = (void *)0x00594190;

__thiscall
int
(*bayoVector3_zero)(
	vector3_t * vec
) = (void *)0x004BBC60;

__thiscall
int
(*bayoVertexBufferCacheItem_load)(
	bayoVertexBufferCacheItem_t * vertexBuffer,
	float * pPositions,
	uint structSize,
	uint numVertices
) = (void *)0x00C5F8F0;

__thiscall
void
(*bayoVertexBuffer_Init2)(
	bayoVertexBuffer_t * vertexBuffer
) = (void *)0x00C6F1A0;

__thiscall
uint
(*bayoVertexBuffer_allocNormals)(
	bayoVertexBufferCacheItem_t * vertexBuffer,
	void * pSource,
	uint structSize,
	uint numVertices,
	void * allocator
) = (void *)0x00C5F920;

__thiscall
void
(*bayoVertexBuffer_init)(
	bayoVertexBuffer_t * vertexBuffer
) = (void *)0x00C5F770;

__thiscall
int
(*bayoWmb_allocNormalsWithCritical)(
	bayoWmb_t * wmb,
	bayoVertexBufferCacheItem_t * vertexBuffer,
	uint meshIndex
) = (void *)0x004A6FC0;

__thiscall
int
(*bayoWmb_gatherMeshInfos)(
	bayoWmb_t * wmb,
	bayoMeshInfos_t * meshInfos,
	int meshIndex
) = (void *)0x004A7210;

__thiscall
ushort *
(*bayoWmb_getBatchIndicesPtr)(
	bayoWmb_t * wmb,
	int meshIndex,
	int batchIndex
) = (void *)0x004A74B0;

__thiscall
char *
(*bayoWmb_getBoneFlags)(
	bayoWmb_t * wmb
) = (void *)0x004A7670;

__thiscall
int
(*bayoWmb_getBoneRefs)(
	bayoWmb_t * pWmb,
	int * numBoneRefs,
	uchar * * ppBoneRefs,
	int meshIndex,
	int batchIndex
) = (void *)0x004A7430;

__thiscall
void
(*bayoWmb_getGlobalBonePosition)(
	bayoWmb_t * pWmb,
	vector4_t * position,
	int localBoneIndex
) = (void *)0x004A7600;

__thiscall
int
(*bayoWmb_getLocalBoneIndex)(
	bayoWmb_t * pWmb,
	short globalBoneIndex
) = (void *)0x004A7510;

__thiscall
int
(*bayoWmb_getLocalBonePosition)(
	bayoWmb_t * pWmb,
	vector4_t * position,
	short globalBoneIndex
) = (void *)0x004A7780;

__thiscall
int
(*bayoWmb_getNumBones)(
	bayoWmb_t * wmb
) = (void *)0x004A7500;

__thiscall
uint
(*bayoWmb_getNumMeshes)(
	bayoWmb_t * wmb
) = (void *)0x004A71F0;

__thiscall
uint
(*bayoWmb_getNumVertices)(
	bayoWmb_t * ppWmb
) = (void *)0x004A70B0;

__thiscall
int
(*bayoWmb_getParentBone)(
	bayoWmb_t * pWmb,
	int boneIndex
) = (void *)0x004A7580;

__thiscall
float *
(*bayoWmb_getPositionsPtr)(
	bayoWmb_t * wmb
) = (void *)0x004A7150;

__thiscall
uint
(*bayoWmb_getTotalVertexSize)(
	bayoWmb_t * wmb
) = (void *)0x004A70E0;

__thiscall
int
(*bayoWmb_getVertexExDataSize)(
	bayoWmb_t * wmb
) = (void *)0x004A71B0;

__thiscall
int
(*bayoWmb_getVertexSize)(
	bayoWmb_t * wmb
) = (void *)0x004A7700;

__thiscall
void *
(*bayoWmb_getVerticesExDataPtr)(
	bayoWmb_t * pWmb
) = (void *)0x004A7190;

__thiscall
void *
(*bayoWmb_getVerticesPtr)(
	wmbHeader_t * * pWmb
) = (void *)0x004A7170;

__thiscall
int
(*bayoWmb_init)(
	bayoWmb_t * wmb,
	wmbHeader_t * wmbHandle
) = (void *)0x004A6F90;

__thiscall
int
(*bayoWmb_isNotSetUnknowVertexFormatFlagB)(
	bayoWmb_t * wmb
) = (void *)0x004A76C0;

__thiscall
int
(*bayoWmb_isSetUnknownVertexFormatFlag)(
	bayoWmb_t * pWmb
) = (void *)0x004A7680;

__thiscall
int
(*bayoWmb_isVertexFormatCompressed)(
	bayoWmb_t * wmb
) = (void *)0x004A76A0;

__thiscall
int
(*bayoWmb_loadBatchInfos)(
	bayoWmb_t * wmb,
	void * * ppMaterial,
	bayoBatchInfos_t * bayoBatchInfos,
	int meshIndex,
	int batchIndex
) = (void *)0x004A7370;

__thiscall
int
(*bayoWtb_getNumTextures)(
	bayoWtb_t * wtb
) = (void *)0x00C7C790;

__thiscall
void *
(*bayoWtb_getTextureAddress)(
	bayoWtb_t * ppWtb,
	uint textureIndex
) = (void *)0x00C7C7A0;

__thiscall
uint
(*bayoWtb_getTextureFlag)(
	bayoWtb_t * wtb,
	uint textureIndex
) = (void *)0x00C7C7E0;

__thiscall
uint
(*bayoWtb_getTextureSize)(
	bayoWtb_t * ppWtb,
	uint textureIndex
) = (void *)0x00C7C7C0;

__thiscall
void
(*bayoWtb_init)(
	bayoWtb_t * wtb,
	void * wtbHandle
) = (void *)0x00C7C820;

__cdecl
uint
(*bayo_addToTotalCubeTextureSize)(
	uint size
) = (void *)0x00C5DE60;

__cdecl
void *
(*bayo_allocAligned)(
	uint size,
	bayoInstance_t * * ppBayoInstance
) = (void *)0x00C53BF0;

__cdecl
void *
(*bayo_allocAligned2)(
	uint size,
	bayoInstance_t * * ppBayoInstance
) = (void *)0x00C53BB0;

__cdecl
bayoTex_t *
(*bayo_allocInitBayoTextures)(
	int numTextures
) = (void *)0x00C6DED0;

__cdecl
void
(*bayo_applyExpMathFunction)(
	float * pOutValue,
	float inValue,
	short flags
) = (void *)0x00436240;

__cdecl
void
(*bayo_applyExpValueToBoneTransform)(
	bayoBone_t * bone,
	float expValue,
	expRecord_t * expRecord
) = (void *)0x00435A70;

__cdecl
int
(*bayo_checkSamplerID0x9000FF00)(
	int samplerID
) = (void *)0x00D521E0;

__cdecl
float
(*bayo_clampPIminusPI)(
	float angle
) = (void *)0x00C57E50;

__cdecl
void
(*bayo_createRotationMatrix)(
	matrix4x4_t * transformMatrix,
	vector4_t * eulerAngles,
	int order
) = (void *)0x00C5A630;

__cdecl
void
(*bayo_createScalingMatrix)(
	matrix4x4_t * matrix,
	vector3_t * scale
) = (void *)0x00C659B0;

__cdecl
float
(*bayo_decodeExpInterpol2)(
	expHeader_t * expHeader,
	expRecord_t * expRecord,
	float value
) = (void *)0x004358C0;

__cdecl
float
(*bayo_decodeExpInterpol4)(
	expHeader_t * expHeader,
	expRecord_t * expRecord,
	float value
) = (void *)0x00435BA0;

__cdecl
float
(*bayo_decodeExpInterpol6)(
	expHeader_t * expHeader,
	expRecord_t * expRecord,
	float value
) = (void *)0x00435DE0;

__cdecl
int
(*bayo_dichotomicSearchMotKey4)(
	uint lowerKeyNumberBound,
	uint upperKeyNumberBound,
	motKey4_t * pMotKeys,
	int nextFrameIndex
) = (void *)0x004B78B0;

__cdecl
void
(*bayo_eulerToQuaternion)(
	vector4_t * quaternion,
	vector4_t * eulerAngles,
	int rotationOrder
) = (void *)0x00C6F9C0;

__cdecl
int
(*bayo_findTrackForBone)(
	motRecord_t * * a1,
	int boneIndex,
	int trackIndex
) = (void *)0x004B8090;

__cdecl
int
(*bayo_findTrackForBoneWithKeys)(
	motRecord_t * * pMotRecords,
	bayoRecordKeyCacheItem_t * * pCachedKeys,
	int globalBoneIndex,
	int trackIndex
) = (void *)0x004B80E0;

__cdecl
void *
(*bayo_freeObject)(
	void * pBayoObject
) = (void *)0x00C58200;

__cdecl
void *
(*bayo_getAssetHandle)(
	char * path
) = (void *)0x00C5F5E0;

__cdecl
bayoIndexStream_t *
(*bayo_getIndexBuffer)(
	ushort * pIndices,
	uint indexSize,
	uint numIndices
) = (void *)0x00C79550;

__cdecl
int
(*bayo_getIndexBufferCritical)(
	bayoBatch_t * batch,
	ushort * pIndices,
	uint indexSize,
	uint numIndices
) = (void *)0x00C79750;

__cdecl
bayoMaterialVectorTableItem_t *
(*bayo_getMaterialFuncs)(
	wmbMaterial_t * material
) = (void *)0x00D4E140;

__cdecl
int
(*bayo_getMaterialProperty7)(
	bayoMaterialVectorTableItem_t * a1
) = (void *)0x00D4E540;

__cdecl
motRecord_t *
(*bayo_getMotRecordsPtr)(
	motHeader_t * a1
) = (void *)0x004B7A00;

__cdecl
int
(*bayo_getNextMotTrackGroup)(
	vector4_t * vector,
	motHeader_t * motHeader,
	motRecord_t * * ppMotRecords,
	bayoRecordKeyCacheItem_t * * pCachedKeys,
	float frameIndex,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B7EF0;

__cdecl
float *
(*bayo_getUnitVector)(
	vector4_t * unitVector,
	vector4_t * vector
) = (void *)0x00C58610;

__cdecl
bayoVertexBufferCacheItem_t *
(*bayo_getVertexBuffer)(
	void * pSource,
	uint structSize,
	uint numVertices,
	void * allocator
) = (void *)0x00C79180;

__cdecl
int
(*bayo_getVertexBufferWithCritical)(
	bayoVertexBufferCacheItem_t * vertexBuffer,
	void * pSource,
	uint structSize,
	uint numVertices,
	void * allocator
) = (void *)0x00C79390;

__cdecl
void
(*bayo_initBatches)(
	bayoBatch_t * pBatches,
	uint structSize,
	uint numBatches,
	__thiscall void * (*)(void * unknownFields)
) = (void *)0x00401030;

__cdecl
int
(*bayo_isMatPls05_BXNXB)(
	bayoMaterialVectorTableItem_t * param_1
) = (void *)0x00D4E2D0;

__cdecl
int
(*bayo_isMaterialPls05_BXNXXorPls05_BXNXB)(
	bayoMaterialVectorTableItem_t * param_1
) = (void *)0x00D4E2A0;

__cdecl
int
(*bayo_isTrack)(
	motRecord_t * pMotRecord,
	int boneIndex,
	int trackIndex
) = (void *)0x004B8070;

__cdecl
int
(*bayo_loadCubeTextureFromWTB)(
	bayoTex_t * bayoTexture,
	wtbHeader_t * * wtb,
	uint textureIndex
) = (void *)0x00C6DD90;

__cdecl
float
(*bayo_loadMotRecord1)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	void * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B7E10;

__cdecl
float
(*bayo_loadMotRecord2)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	void * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B7E50;

__cdecl
float
(*bayo_loadMotRecordType0)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	void * * ppKeys,
	float frameIndex,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B7630;

__cdecl
float
(*bayo_loadMotRecordType1)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	void * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B7640;

__cdecl
float
(*bayo_loadMotRecordType2)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	void * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B7690;

__cdecl
float
(*bayo_loadMotRecordType3)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	void * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B7800;

__cdecl
float
(*bayo_loadMotRecordType4)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	ushort * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B8260;

__cdecl
float
(*bayo_loadMotRecordType4_2)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	motKey4_t * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B8540;

__cdecl
float
(*bayo_loadMotRecordType5)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	int * * ppKeys,
	float frameIndex,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B7900;

__cdecl
float
(*bayo_loadMotRecordType6)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	motKey6_t * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B8800;

__cdecl
float
(*bayo_loadMotRecordType6_2)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	motKey6_t * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B8C90;

__cdecl
float
(*bayo_loadMotRecordType7)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	motKey7_t * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B90E0;

__cdecl
float
(*bayo_loadMotRecordType7_2)(
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecord,
	motKey7_t * * ppKeys,
	float date,
	int previousFrameIndex,
	int nextFrameIndex,
	int bInterpolate
) = (void *)0x004B9580;

__cdecl
int
(*bayo_loadMotRotateAtDateForBone)(
	vector4_t * vec,
	void * motHandle,
	float date,
	int globalBoneIndex
) = (void *)0x004BA2A0;

__cdecl
int
(*bayo_loadMotTranslateAtDateForBone)(
	vector4_t * vec,
	void * motHeader,
	float date,
	int globalBoneIndex
) = (void *)0x004BA0A0;

__cdecl
int
(*bayo_loadTextureFromWTB)(
	bayoTex_t * bayoTexture,
	bayoWtb_t * wtb,
	int textureIndex,
	int bMipMap,
	int bDynamic
) = (void *)0x00C6DD10;

__cdecl
bayoTextureCacheItem_t *
(*bayo_loadTexturesFromWTB)(
	void * wtbHandle,
	int bDynamic
) = (void *)0x00C6E160;

__cdecl
int
(*bayo_loadWTB)(
	bayoTextureCacheItem_t * textureCacheItem,
	void * wtbHandle,
	int bDynamic
) = (void *)0x00C6E470;

__thiscall
int
(*bayo_load_accessory)(
	bayoActor_t * actor
) = (void *)0x008B47D0;

__thiscall
int
(*bayo_load_pl0000_pl0010)(
	bayoActor_t * actor
) = (void *)0x008C6680;

__cdecl
void
(*bayo_quaternionToEuler)(
	vector4_t * eulerAngles,
	vector4_t * quaternion,
	int rotationOrder
) = (void *)0x00C6FD80;

__cdecl
void
(*bayo_quaternionToEulerWOne)(
	vector4_t * eulerAngles,
	vector4_t * quaternion,
	int rotationOrder
) = (void *)0x00C70330;

__cdecl
void
(*bayo_slerpEulerAngles)(
	vector4_t * eulerAngles,
	vector4_t * previousEulerAngles,
	vector4_t * nextEulerAngles,
	float slerpRatio,
	int rotationOrder
) = (void *)0x00C6B070;

__cdecl
bool
(*bayo_testMaterialProperty3equals1)(
	bayoMaterialVectorTableItem_t * a1
) = (void *)0x00D4E550;

