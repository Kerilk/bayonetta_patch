static
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

static
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

static
__stdcall
matrix4x4_t *
(*D3DXMatrixMultiply)(
	matrix4x4_t * a1,
	matrix4x4_t * a2,
	matrix4x4_t * a3
) = (void *)0x00C855D4;

static
__stdcall
matrix4x4_t *
(*D3DXMatrixRotationX)(
	matrix4x4_t * param_1,
	float param_2
) = (void *)0x00C855F8;

static
__stdcall
matrix4x4_t *
(*D3DXMatrixRotationY)(
	matrix4x4_t * a1,
	float a2
) = (void *)0x00C855FE;

static
__stdcall
matrix4x4_t *
(*D3DXMatrixRotationZ)(
	matrix4x4_t * a1,
	float a2
) = (void *)0x00C85616;

static
__stdcall
vector4_t *
(*D3DXQuaternionSlerp)(
	vector4_t * a1,
	vector4_t * a2,
	vector4_t * a3,
	float a4
) = (void *)0x00C8560A;

static
__thiscall
int
(*bayoActor_allocInitAttachPoints)(
	bayoActor_t * actor,
	int numAttachPoints,
	bayoHeapBase_t * bayoInstance
) = (void *)0x00451B20;

static
__thiscall
undefined
(*bayoActor_attachBone)(
	bayoActor_t * actor,
	int sourceBone,
	int targetBone,
	int option
) = (void *)0x00454C20;

static
__thiscall
void
(*bayoActor_computeGlobalBoundingBox)(
	bayoActor_t * bayoActor,
	vector4_t * scale
) = (void *)0x004A5010;

static
__thiscall
void
(*bayoActor_computeGlobalPosition)(
	bayoActor_t * bayoActor,
	vector4_t * pLocalBonePosition,
	int globalBoneNumber
) = (void *)0x004A4E10;

static
__thiscall
short *
(*bayoActor_getBoneSymmetriesPtr)(
	bayoActor_t * actor
) = (void *)0x004A38F0;

static
__thiscall
bayoBone_t *
(*bayoActor_getLocalBone)(
	bayoActor_t * actor,
	int globalBoneIndex
) = (void *)0x004A4DC0;

static
__thiscall
int
(*bayoActor_getLocalNumBones)(
	bayoActor_t * actor
) = (void *)0x004A37E0;

static
__thiscall
bayoMesh_t *
(*bayoActor_getMesh)(
	bayoActor_t * actor,
	int meshIndex
) = (void *)0x004A32E0;

static
__thiscall
int
(*bayoActor_loadAnimatedTextures)(
	bayoActor_t * actor,
	void * wtbHandle
) = (void *)0x004A4850;

static
__thiscall
int
(*bayoActor_loadMeshesAndBatches)(
	bayoActor_t * actor,
	bayoContext_t * context
) = (void *)0x004A3D70;

static
__thiscall
int
(*bayoActor_loadSkeleton)(
	bayoActor_t * actor,
	bayoContext_t * context
) = (void *)0x004A6120;

static
__thiscall
int
(*bayoActor_loadWMBAndWTB)(
	bayoActor_t * actor,
	void * wmbHandle,
	void * wtbHandle
) = (void *)0x004DEA00;

static
__thiscall
int
(*bayoActor_loadWMBAndWTBHelper)(
	bayoActor_t * actor,
	void * wmbHandle,
	void * wtbHandle
) = (void *)0x004BCF90;

static
__thiscall
int
(*bayoActor_loadWMBAndWTBHelperWithParam)(
	bayoActor_t * actor,
	void * wmbHandle,
	void * wtbHandle,
	bayoContext_t * bayoContext
) = (void *)0x004A67D0;

static
__thiscall
int
(*bayoActor_mapGlobalBoneIndexToLocalBoneAndUpdateLocalPosition)(
	bayoActor_t * actor,
	int globalBoneIndex
) = (void *)0x004A4EF0;

static
__thiscall
void
(*bayoActor_recenterOnBone)(
	bayoActor_t * actor,
	int boneIndex
) = (void *)0x004A5D60;

static
__thiscall
void
(*bayoActor_removeBoneFlags0x1800)(
	bayoActor_t * actor
) = (void *)0x004A43E0;

static
__thiscall
int
(*bayoActor_setMeshesUnknownFlags)(
	bayoActor_t * actor,
	uint flags
) = (void *)0x004A4750;

static
__thiscall
void
(*bayoActor_transformSkeleton)(
	bayoActor_t * actor
) = (void *)0x004A4320;

static
__thiscall
uint
(*bayoBatch_createIndexBuffer)(
	bayoBatch_t * batch,
	ushort * pIndices,
	uint indexSize,
	uint numIndices
) = (void *)0x00C6F320;

static
__thiscall
bayoBone_t *
(*bayoBone_init)(
	bayoBone_t * bone
) = (void *)0x004E57A0;

static
__thiscall
void
(*bayoBone_transformByParentIfNeeded)(
	bayoBone_t * bone
) = (void *)0x004E5C30;

static
__thiscall
void
(*bayoBone_transformIfNeeded)(
	bayoBone_t * bone
) = (void *)0x004E5C20;

static
__thiscall
bayoBuffers_t *
(*bayoBuffers_init)(
	bayoBuffers_t * buffers
) = (void *)0x004A1B80;

static
__thiscall
int
(*bayoCacheItem_checkIfLoaded)(
	bayoCacheItem_t * cacheItem
) = (void *)0x00C5B990;

static
__thiscall
float
(*bayoCamera_getRotateX)(
	bayoCamera_t * camera
) = (void *)0x00AAB8B0;

static
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

static
__thiscall
bayoHitItem_t *
(*bayoCloth_allocCLHItems)(
	bayoCloth_t * cloth,
	int clhItemCount,
	bayoInstance_t * * bayoInstance
) = (void *)0x00421720;

static
__thiscall
int
(*bayoCloth_allocCLPItems)(
	bayoCloth_t * cloth,
	int clpItemCount,
	bayoInstance_t * * bayoInstance
) = (void *)0x004216B0;

static
__thiscall
void *
(*bayoCloth_bindCLH)(
	bayoCloth_t * cloth,
	void * clhHandle,
	bayoActor_t * actor
) = (void *)0x00423F40;

static
__thiscall
void *
(*bayoCloth_bindCLHItems)(
	bayoCloth_t * cloth,
	bayoActor_t * actor,
	clhItem_t * pClhItems,
	uint clhItemCount
) = (void *)0x00423CC0;

static
__thiscall
void
(*bayoCloth_bindCLP)(
	bayoCloth_t * cloth,
	clpHeader_t * clpHandle,
	bayoActor_t * actor,
	bayoActor_t * actor2,
	float floatCoeff
) = (void *)0x00423E00;

static
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

static
__thiscall
void
(*bayoCloth_bindCLW)(
	bayoCloth_t * cloth,
	int * clwHandle,
	bayoActor_t * actor
) = (void *)0x004210E0;

static
__thiscall
int
(*bayoCloth_bindCLWItems)(
	bayoCloth_t * cloth,
	bayoActor_t * actor,
	clwItem_t * pClwItems,
	int clwItemCount
) = (void *)0x004202E0;

static
__cdecl
void
(*bayoConcatenateExecutablePath)(
	char * targetBuffer,
	uint bufferSize,
	char * path
) = (void *)0x00C576E0;

static
__thiscall
void
(*bayoConfig_Reset)(
	bayoConfig_t * config
) = (void *)0x00520B20;

static
__thiscall
bayoOption_t *
(*bayoConfig_getOption)(
	bayoConfig_t * config,
	char * optionName
) = (void *)0x00520B80;

static
__thiscall
int
(*bayoConfig_getOptionBool)(
	bayoConfig_t * config,
	char * optionName,
	int defaultValue
) = (void *)0x00520F10;

static
__thiscall
float
(*bayoConfig_getOptionFloat)(
	bayoConfig_t * pbParm1,
	char * optionName,
	float defaultValue
) = (void *)0x00520E30;

static
__thiscall
int
(*bayoConfig_getOptionInt)(
	bayoConfig_t * config,
	char * optionName,
	int defaultValue
) = (void *)0x00520D70;

static
__thiscall
char *
(*bayoConfig_getOptionString)(
	bayoConfig_t * config,
	char * optionName
) = (void *)0x00520F40;

static
__thiscall
int
(*bayoConfig_getOptionUInt)(
	bayoConfig_t * config,
	char * optionName,
	int defaultValue
) = (void *)0x00520DF0;

static
__thiscall
bayoBone_t *
(*bayoContext_allocBone)(
	bayoContext_t * context
) = (void *)0x004A7BC0;

static
__thiscall
bayoBone_t * *
(*bayoContext_allocBoneArray)(
	bayoContext_t * context,
	uint numBones
) = (void *)0x004A7C20;

static
__thiscall
bayoMesh_t *
(*bayoContext_allocInitMesh)(
	bayoContext_t * bayoContext
) = (void *)0x004A7B90;

static
__thiscall
bayoMesh_t * *
(*bayoContext_allocMeshesArray)(
	bayoContext_t * bayoContext,
	uint numMeshes
) = (void *)0x004A7BE0;

static
__thiscall
int
(*bayoContext_checkBoneLimit)(
	bayoContext_t * context,
	uint boneNumber
) = (void *)0x004A7BB0;

static
__thiscall
int
(*bayoContext_checkMeshLimits)(
	bayoContext_t * context,
	uint numMeshes
) = (void *)0x004A7B80;

static
__thiscall
void
(*bayoCriticalSection_delete)(
	bayoCriticalSection_t * p_Parm1
) = (void *)0x00C58280;

static
__thiscall
int
(*bayoCriticalSection_init)(
	bayoCriticalSection_t * param_1
) = (void *)0x00C58250;

static
__thiscall
void
(*bayoExp_applyEffectToSkeleton)(
	bayoExp_t * bayoExp
) = (void *)0x004367D0;

static
__thiscall
void *
(*bayoExp_bindEXP)(
	bayoExp_t * exp,
	bayoActor_t * actor,
	void * expHandle
) = (void *)0x00435A50;

static
__thiscall
float
(*bayoExp_computeResult)(
	bayoExp_t * bayoExp,
	expRecord_t * expRecord
) = (void *)0x004365B0;

static
__thiscall
float
(*bayoExp_getEntryValue)(
	bayoExp_t * bayoExp,
	expEntry_t * expEntry
) = (void *)0x00436890;

static
__thiscall
int
(*bayoExp_getSpecialExp)(
	bayoExp_t * exp,
	float * value,
	expEntry_t * pEntry
) = (void *)0x00436460;

static
__thiscall
void
(*bayoExp_modifyEntry)(
	bayoExp_t * exp,
	float * value
) = (void *)0x00436350;

static
__thiscall
bayoGeometryDescriptor_t *
(*bayoGeometryDescriptor_init)(
	bayoGeometryDescriptor_t * geometryDescriptor
) = (void *)0x004A1CC0;

static
__thiscall
void
(*bayoHeaoFixed_free)(
	bayoHeapFixed_t * heap,
	void * buff
) = (void *)0x00C62980;

static
__thiscall
void
(*bayoHeapBase_delete_dynamic)(
	bayoHeapBase_t * heap,
	byte flag
) = (void *)0x00C58220;

static
__thiscall
void
(*bayoHeapBase_delete_static)(
	bayoHeapBase_t * heap
) = (void *)0x00C580F0;

static
__thiscall
void
(*bayoHeapBase_init)(
	bayoHeapBase_t * heap
) = (void *)0x00C580D0;

static
__thiscall
void *
(*bayoHeapFixed_alloc)(
	bayoHeapFixed_t * heap,
	uint size,
	uint alignment,
	int param_4
) = (void *)0x00C62890;

static
__thiscall
uint
(*bayoHeapFixed_bInited)(
	bayoHeapFixed_t * heap
) = (void *)0x00C62760;

static
__thiscall
int
(*bayoHeapFixed_create)(
	bayoHeapFixed_t * heap,
	uint itemSize,
	uint itemCount,
	uint alignment,
	bayoHeapBase_t * allocHeap
) = (void *)0x00C62660;

static
__thiscall
void *
(*bayoHeapFixed_createVirtualHeap)(
	bayoHeapFixed_t * heap,
	uint size
) = (void *)0x00C62730;

static
__thiscall
void
(*bayoHeapFixed_delete_dynamic)(
	bayoHeapFixed_t * heap
) = (void *)0x00C62850;

static
__thiscall
void
(*bayoHeapFixed_delete_static)(
	bayoHeapFixed_t * heap
) = (void *)0x00C62A50;

static
__thiscall
void
(*bayoHeapFixed_freeAndDelete)(
	bayoHeapFixed_t * heap,
	byte flags
) = (void *)0x00C62AA0;

static
__thiscall
int
(*bayoHeapFixed_getAllocatableSize)(
	bayoHeapFixed_t * heap
) = (void *)0x00C627A0;

static
__thiscall
uint
(*bayoHeapFixed_getAllocatedSize)(
	bayoHeapFixed_t * heap
) = (void *)0x00C62780;

static
__thiscall
void *
(*bayoHeapFixed_getNextBuffer)(
	bayoHeapFixed_t * heap,
	void * buff
) = (void *)0x00C62A30;

static
__thiscall
uint
(*bayoHeapFixed_getTotalSize)(
	bayoHeapFixed_t * heap
) = (void *)0x00C62770;

static
__thiscall
bayoHeapFixed_t *
(*bayoHeapFixed_init)(
	bayoHeapFixed_t * heap
) = (void *)0x00C62620;

static
__thiscall
void
(*bayoHeapFixed_releaseVirtualHeap)(
	bayoHeapFixed_t * heap,
	void * virtualHeap,
	int size
) = (void *)0x00C62750;

static
__thiscall
void
(*bayoHeapFixed_reset)(
	bayoHeapFixed_t * heap
) = (void *)0x00C627D0;

static
__thiscall
void *
(*bayoHeapOneTime_allocBuffer)(
	bayoHeapOneTime_t * heap,
	int size,
	uint alignment,
	int direction
) = (void *)0x00C6F4F0;

static
__thiscall
int
(*bayoHeapOneTime_create)(
	bayoHeapOneTime_t * heap,
	uint size,
	bayoHeapBase_t * sourceHeap
) = (void *)0x00C6F3B0;

static
__thiscall
void *
(*bayoHeapOneTime_createVirtualHeap)(
	bayoHeapOneTime_t * heap,
	uint size
) = (void *)0x00C6F440;

static
__thiscall
void
(*bayoHeapOneTime_delete_dynamic)(
	bayoHeapOneTime_t * pbParm1
) = (void *)0x00C6F4B0;

static
__thiscall
void
(*bayoHeapOneTime_delete_static)(
	bayoHeapOneTime_t * heap
) = (void *)0x00C6F6A0;

static
__thiscall
void
(*bayoHeapOneTime_free)(
	bayoHeapOneTime_t * heap,
	void * buff
) = (void *)0x00C6F5F0;

static
__thiscall
bayoHeapOneTime_t *
(*bayoHeapOneTime_freeAndDelete)(
	bayoHeapOneTime_t * heap,
	byte flags
) = (void *)0x00C6F6F0;

static
__thiscall
uint
(*bayoHeapOneTime_getAllocatableSize)(
	bayoHeapOneTime_t * heap
) = (void *)0x00C6F4A0;

static
__thiscall
uint
(*bayoHeapOneTime_getAllocatedSize)(
	bayoHeapOneTime_t * heap
) = (void *)0x00C6F490;

static
__thiscall
void *
(*bayoHeapOneTime_getNextBuffer)(
	bayoHeapOneTime_t * iParm1,
	void * buff
) = (void *)0x00C6F680;

static
__thiscall
uint
(*bayoHeapOneTime_getTotalSize)(
	bayoHeapOneTime_t * heap
) = (void *)0x00C6F480;

static
__thiscall
bayoHeapOneTime_t *
(*bayoHeapOneTime_init)(
	bayoHeapOneTime_t * pbParm1
) = (void *)0x00C6F380;

static
__thiscall
uint
(*bayoHeapOneTime_inited)(
	bayoHeapOneTime_t * heap
) = (void *)0x00C6F470;

static
__thiscall
void
(*bayoHeapOneTime_releaseVirtualHeap)(
	bayoHeapOneTime_t * heap,
	void * vitualHeap,
	uint size
) = (void *)0x00C6F460;

static
__thiscall
void
(*bayoHeapOneTime_reset)(
	bayoHeapOneTime_t * pbParm1
) = (void *)0x00C6F420;

static
__thiscall
void *
(*bayoHeapPageAligned_allocBuffer_func_t)(
	bayoHeapPageAligned_t * heap,
	uint size,
	uint alignment,
	int register
) = (void *)0x00C6EEC0;

static
__thiscall
uint
(*bayoHeapPageAligned_bInited)(
	bayoHeapPageAligned_t * heap
) = (void *)0x00C6EE20;

static
__thiscall
void *
(*bayoHeapPageAligned_createVirtualHeap)(
	bayoHeapPageAligned_t * heap,
	uint size
) = (void *)0x00C6F130;

static
__thiscall
void
(*bayoHeapPageAligned_deleteAndFree)(
	bayoHeapPageAligned_t * pbParm1,
	byte bParm2
) = (void *)0x00C6F160;

static
__thiscall
void
(*bayoHeapPageAligned_delete_static)(
	bayoHeapPageAligned_t * heap
) = (void *)0x00C6EE80;

static
__thiscall
void
(*bayoHeapPageAligned_free)(
	bayoHeapPageAligned_t * heap,
	void * memory
) = (void *)0x00C6F030;

static
__thiscall
uint
(*bayoHeapPageAligned_getAllocatableSize)(
	bayoHeapPageAligned_t * heap
) = (void *)0x00C6EE50;

static
__thiscall
uint
(*bayoHeapPageAligned_getAllocatedSize)(
	bayoHeapPageAligned_t * heap
) = (void *)0x00C6EE40;

static
__thiscall
void *
(*bayoHeapPageAligned_getNextBuffer)(
	bayoHeapPageAligned_t * heap,
	void * buff
) = (void *)0x00C6F110;

static
__thiscall
uint
(*bayoHeapPageAligned_getTotalSize)(
	bayoHeapPageAligned_t * heap
) = (void *)0x00C6EE30;

static
__thiscall
bayoHeapPageAligned_t *
(*bayoHeapPageAligned_init)(
	bayoHeapPageAligned_t * puParm1
) = (void *)0x00C6ECA0;

static
__thiscall
void
(*bayoHeapPageAligned_releaseVirtualHeap)(
	bayoHeapPageAligned_t * heap,
	void * systemHeap,
	uint size
) = (void *)0x00C6EE00;

static
__thiscall
void *
(*bayoHeapPhysical_allocBuffer)(
	bayoHeapPhysical_t * heap,
	int size,
	uint alignment,
	int direction
) = (void *)0x00C6E7F0;

static
__thiscall
uint
(*bayoHeapPhysical_bInited)(
	bayoHeapPhysical_t * heap
) = (void *)0x00C6E750;

static
__thiscall
void *
(*bayoHeapPhysical_createVirtualHeap)(
	bayoHeapPhysical_t * heap,
	uint size
) = (void *)0x00C6E720;

static
__thiscall
void
(*bayoHeapPhysical_deleteAndFree)(
	bayoHeapPhysical_t * pbParm1,
	byte bParm2
) = (void *)0x00C6EA70;

static
__thiscall
void
(*bayoHeapPhysical_delete_dynamic)(
	bayoHeapPhysical_t * heap
) = (void *)0x00C6E7B0;

static
__thiscall
bayoHeapPhysicalItem_t *
(*bayoHeapPhysical_findMatchingMemBufferFromFirst)(
	bayoHeapPhysical_t * heap,
	void * * pMemBuffer,
	int * newRemainingSize,
	uint size,
	uint alignment
) = (void *)0x00C6E5E0;

static
__thiscall
bayoHeapPhysicalItem_t *
(*bayoHeapPhysical_findMatchingMemBufferFromLast)(
	bayoHeapPhysical_t * heap,
	void * * pMemBuffer,
	int * newRmainaingSize,
	uint size,
	uint alignment
) = (void *)0x00C6E640;

static
__thiscall
void
(*bayoHeapPhysical_free)(
	bayoHeapPhysical_t * heap,
	void * buffer
) = (void *)0x00C6E8F0;

static
__thiscall
int
(*bayoHeapPhysical_getAllocatableSize)(
	bayoHeapPhysical_t * heap
) = (void *)0x00C6E9B0;

static
__thiscall
uint
(*bayoHeapPhysical_getAllocatedSize)(
	bayoHeapPhysical_t * heap
) = (void *)0x00C6E770;

static
__thiscall
void *
(*bayoHeapPhysical_getNextBuffer)(
	bayoHeapPhysical_t * heap,
	void * buffer
) = (void *)0x00C6E990;

static
__thiscall
uint
(*bayoHeapPhysical_getTotalSize)(
	bayoHeapPhysical_t * heap
) = (void *)0x00C6E760;

static
__thiscall
void
(*bayoHeapPhysical_releaseVirtualHeap)(
	bayoHeapPhysical_t * heap,
	void * virtualHeap,
	int flag
) = (void *)0x00C6E740;

static
__thiscall
int
(*bayoHeapPool_create)(
	bayoHeapPageAligned_t * this,
	uint heapSize
) = (void *)0x00C6EAF0;

static
__thiscall
int
(*bayoHeapPool_createWithAlignment)(
	bayoHeapPool_t * heap,
	uint size,
	uint alignment
) = (void *)0x00C6EB40;

static
__thiscall
void
(*bayoHeapPool_deleteAndFree)(
	bayoHeapPool_t * pbParm1,
	byte bParm2
) = (void *)0x00C6EC60;

static
__thiscall
void
(*bayoHeapPool_delete_static)(
	bayoHeapPool_t * pbParm1
) = (void *)0x00C6EC00;

static
__thiscall
void
(*bayoHeapPool_destroy)(
	bayoHeapPool_t * heap
) = (void *)0x00C6EC30;

static
__thiscall
bayoHeapPool_t *
(*bayoHeapPool_init)(
	bayoHeapPool_t * heap
) = (void *)0x00C6EAD0;

static
__thiscall
void
(*bayoHeapPool_initSize)(
	bayoHeapPageAligned_t * heap,
	int ignored,
	int totalSize
) = (void *)0x00C6ECC0;

static
__thiscall
void
(*bayoHeapPool_reset)(
	bayoHeapPool_t * pbParm1
) = (void *)0x00C6ECE0;

static
__thiscall
int
(*bayoHeapVariable_allocateMemory)(
	bayoHeapPhysical_t * heap,
	uint heapSize,
	bayoHeapPageAligned_t * allocHeap
) = (void *)0x00C6E540;

static
__thiscall
void
(*bayoHeapVariable_delete_static)(
	bayoHeapPhysical_t * heap
) = (void *)0x00C6EA20;

static
__thiscall
bayoHeapPhysical_t *
(*bayoHeapVariable_init)(
	bayoHeapPhysical_t * heap
) = (void *)0x00C6E520;

static
__thiscall
void *
(*bayoHeap_allocWithAlignement)(
	bayoHeapBase_t * bayoHeap,
	uint size,
	uint alignment,
	int direction
) = (void *)0x00C58070;

static
__thiscall
void
(*bayoHeap_initUnknownField)(
	bayoHeapPageAligned_t * heap
) = (void *)0x00C58030;

static
__thiscall
void
(*bayoHeap_link)(
	bayoHeapPageAligned_t * heap,
	bayoHeapPageAligned_t * nextHeap
) = (void *)0x00C57FE0;

static
__stdcall
int
(*bayoInit)(
void) = (void *)0x0049D700;

static
__thiscall
void *
(*bayoLimits_allocStruct)(
	bayoLimits_t * bayoLimits
) = (void *)0x00C62720;

static
__thiscall
bayoMeshGeometryTable_t *
(*bayoMeshGeometryTable_init)(
	bayoMeshGeometryTable_t * table
) = (void *)0x0042D060;

static
__thiscall
void
(*bayoMesh_associateAnimatedTextureCacheItem)(
	bayoMesh_t * mesh,
	bayoTextureCacheItem_t * textureCacheItem
) = (void *)0x0049FCF0;

static
__thiscall
void
(*bayoMesh_chain)(
	bayoMesh_t * mesh,
	bayoMesh_t * nextMesh
) = (void *)0x0049FBA0;

static
__thiscall
vector3_t *
(*bayoMesh_getCorner1)(
	bayoMesh_t * mesh
) = (void *)0x004A0350;

static
__thiscall
vector3_t *
(*bayoMesh_getCorner2)(
	bayoMesh_t * mesh
) = (void *)0x004A0340;

static
__thiscall
int
(*bayoMesh_init)(
	bayoMesh_t * pMesh,
	bayoWmb_t * wmb,
	int meshIndex
) = (void *)0x004A1200;

static
__thiscall
void
(*bayoMesh_setFlagIfHasBatchWithSamplerField_60)(
	bayoMesh_t * mesh,
	int param_2
) = (void *)0x004A0FC0;

static
__thiscall
void
(*bayoMesh_setMeshSubstruct2Field)(
	bayoMesh_t * mesh,
	int actorField_2B4
) = (void *)0x0049FF30;

static
__thiscall
void
(*bayoMesh_setUnknownSubstructFieldC)(
	bayoMesh_t * iParm1,
	int flag
) = (void *)0x0049FE40;

static
__thiscall
int
(*bayoMesh_setupBatchMaterials)(
	bayoMesh_t * mesh,
	bayoSamplers_t * meshSamplers
) = (void *)0x004A08C0;

static
__thiscall
void
(*bayoMotionInfos_computeBaseToRootBoneTransform)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AAC10;

static
__thiscall
int
(*bayoMotionInfos_computeFrameRelatedMotionData)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x00416980;

static
__thiscall
void
(*bayoMotionInfos_decodeBlendedMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B22C0;

static
__thiscall
void
(*bayoMotionInfos_decodeBlendedMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B2410;

static
__thiscall
void
(*bayoMotionInfos_decodeMaybeBlendedWithOneMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AEC20;

static
__thiscall
void
(*bayoMotionInfos_decodeMaybeBlendedWithOneMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AF890;

static
__thiscall
void
(*bayoMotionInfos_decodeMirrorBlendedMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B26F0;

static
__thiscall
void
(*bayoMotionInfos_decodeMirrorBlendedMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B28A0;

static
__thiscall
void
(*bayoMotionInfos_decodeMirrorMaybeBlendedWithOneMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B06F0;

static
__thiscall
void
(*bayoMotionInfos_decodeMirrorMaybeBlendedWithOneMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004B13E0;

static
__thiscall
void
(*bayoMotionInfos_decodeMirrorMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AC560;

static
__thiscall
void
(*bayoMotionInfos_decodeMirrorMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004ACC50;

static
__thiscall
void
(*bayoMotionInfos_decodeMotion)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AB680;

static
__thiscall
int
(*bayoMotionInfos_decodeMotionSpeedAndFlags)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AD510;

static
__thiscall
void
(*bayoMotionInfos_decodeMotionWithFraction)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004ABD10;

static
__thiscall
void
(*bayoMotionInfos_decodeRootParentBoneTransformation)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004A9410;

static
__thiscall
void
(*bayoMotionInfos_getBlendedParentBoneMotion)(
	bayoMotionInfos_t * motionInfos,
	bayoBlendAnimDescriptor_t * blendDescriptor,
	uint a3,
	int bMirror
) = (void *)0x004B5D70;

static
__thiscall
void *
(*bayoMotionInfos_getBoneSymmetries)(
	bayoMotionInfos_t * motionInfos,
	bayoActor_t * actor,
	bayoInstance_t * * instance
) = (void *)0x004AD690;

static
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

static
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

static
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

static
__thiscall
int
(*bayoMotionInfos_getNextMaybeBlendedWithOneMotTrackGroup)(
	bayoMotionInfos_t * motionInfos,
	vector4_t * vec,
	bayoBlendAnimDescriptor_t * blendDescriptors,
	int globalBoneIndex,
	int trackIndex
) = (void *)0x004B2BF0;

static
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

static
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

static
__thiscall
int
(*bayoMotionInfos_increaseMotionProgress)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004AB4C0;

static
__thiscall
void
(*bayoMotionInfos_initTransforms)(
	bayoMotionInfos_t * motionInfos
) = (void *)0x004A9B40;

static
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

static
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

static
__thiscall
int
(*bayoMotionInfos_readCameraMotions)(
	bayoMotionInfos_t * pMotionInfos,
	motHeader_t * pMotHeader,
	motRecord_t * pMotRecords,
	int mirror_x
) = (void *)0x004A9F40;

static
__thiscall
int
(*bayoMotionInfos_setBlendAnimDescriptor)(
	bayoMotionInfos_t * motionInfos,
	bayoBlendAnimDescriptor_t * blendDescriptor,
	int noCachedKeyOffset
) = (void *)0x004AEAE0;

static
__thiscall
int
(*bayoMotionInfos_setBoneAnimatedFlag)(
	bayoMotionInfos_t * motionInfos,
	bayoBone_t * bone,
	motRecord_t * pMotRecord,
	int globalBoneIndex
) = (void *)0x004AA2F0;

static
__thiscall
void
(*bayoMotionInfos_setMotDefaultValues)(
	bayoMotionInfos_t * pMotInfos,
	int flags
) = (void *)0x004A9850;

static
__thiscall
void *
(*bayoObject_cleanup)(
	bayoObject_t * object
) = (void *)0x00C5BCA0;

static
__thiscall
uint
(*bayoOption_getBool)(
	int iParm1,
	uint param_2
) = (void *)0x00520A50;

static
__thiscall
void
(*bayoPool_destroy)(
	bayoPool_t * pool
) = (void *)0x00C26450;

static
__cdecl
int
(*bayoRun)(
void) = (void *)0x0049E870;

static
__thiscall
int
(*bayoSamplerCache_findSpecialSampler)(
	bayoSamplerCache_t * samplerCache,
	bayoSamplers_t * * nativeSampler,
	uint * pSamplerID
) = (void *)0x00D52390;

static
__thiscall
void
(*bayoSamplers_delete)(
	bayoSamplers_t * this
) = (void *)0x00C5B970;

static
__thiscall
int
(*bayoSamplers_getSamplerField_60)(
	bayoSamplers_t * samplers,
	uint samplerIndex
) = (void *)0x00C5B9F0;

static
__thiscall
int
(*bayoSamplers_getSamplerField_64)(
	bayoSamplers_t * samplers,
	uint samplerIndex
) = (void *)0x00C5BA10;

static
__thiscall
void
(*bayoSamplers_init)(
	bayoSamplers_t * samplers
) = (void *)0x00C5B960;

static
__thiscall
bayoCamera_t *
(*bayoScene_getCamera)(
	bayoScene_t * scene
) = (void *)0x00AAA2C0;

static
__thiscall
void
(*bayoSeq_init)(
	bayoSeq_t * seq,
	seqHeader_t * seqHeader
) = (void *)0x004BBC70;

static
__thiscall
void
(*bayoSeq_setFlagsTracksAndDates)(
	bayoSeq_t * seq,
	float previousDate,
	float date,
	float lastFrame
) = (void *)0x004BC3C0;

static
__cdecl
void
(*bayoSetExecutablePath)(
	char * path
) = (void *)0x00C58880;

static
__thiscall
int
(*bayoSubHeap_init)(
	bayoSubHeap_t * newHeap,
	uint heapSize,
	bayoHeapPageAligned_t * oldHeap
) = (void *)0x00C6B9A0;

static
__thiscall
void
(*bayoTex_delete)(
	bayoTex_t * this
) = (void *)0x00C68980;

static
__thiscall
int
(*bayoTex_getD3DCubeTexture)(
	bayoTex_t * tex,
	char * pSrcData,
	uint srcDataSize,
	D3DXIMAGE_INFO * srcInfo
) = (void *)0x00C687D0;

static
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

static
__thiscall
void
(*bayoTex_init)(
	bayoTex_t * bayoTexture
) = (void *)0x00C5BBC0;

static
__thiscall
void
(*bayoTex_init2)(
	bayoTex_t * bayoTexture
) = (void *)0x00C68950;

static
__thiscall
bool
(*bayoTex_loadCubeTexture)(
	bayoTex_t * bayoTexture,
	uint flags,
	char * pSrcData,
	uint srcDataSize
) = (void *)0x00C5BB60;

static
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

static
__thiscall
int
(*bayoTextureCacheItem_loadWTBDynamic)(
	bayoTextureCacheItem_t * textureCacheItem,
	void * wtbHandle
) = (void *)0x00C5BC20;

static
__thiscall
undefined
(*bayoTextureCacheItem_loadWTBStatic)(
	bayoTextureCacheItem_t * textureCacheItem,
	void * wtbHandle
) = (void *)0x00C5BBE0;

static
__thiscall
void
(*bayoUndefConf_setCameraSpeed)(
	int iParm1,
	int param_2
) = (void *)0x00501900;

static
__thiscall
void
(*bayoUndefConf_setDifficulty)(
	int iParm1,
	int difficulty
) = (void *)0x005018C0;

static
__thiscall
void *
(*bayoUndef_allocateObject)(
	void * this,
	uint obectId
) = (void *)0x004BE7C0;

static
__thiscall
bayoInstance_t * *
(*bayoUndef_getBayoHeap)(
	void * undefObj
) = (void *)0x004BE800;

static
__thiscall
void
(*bayoUndef_initMaterials)(
	void * iParm1
) = (void *)0x0042CBF0;

static
__thiscall
void
(*bayoUndef_initUnknownFloatList)(
	bayoUnknownFloatList_t * unknownFloatList
) = (void *)0x004BBBE0;

static
__thiscall
void
(*bayoUnknownMeshSubstruct_init)(
	bayoUnknownMeshSubstruct_t * unknownMeshSubstruct
) = (void *)0x004A1BD0;

static
__thiscall
void
(*bayoUnknownMotionSubstruct_init)(
	bayoMotionInfosSubstruct_t * unknownMotionSubstruct,
	int a2
) = (void *)0x00594190;

static
__thiscall
int
(*bayoVector3_zero)(
	vector3_t * vec
) = (void *)0x004BBC60;

static
__thiscall
int
(*bayoVertexBufferCacheItem_load)(
	bayoVertexBufferCacheItem_t * vertexBuffer,
	float * pPositions,
	uint structSize,
	uint numVertices
) = (void *)0x00C5F8F0;

static
__thiscall
void
(*bayoVertexBuffer_Init2)(
	bayoVertexBuffer_t * vertexBuffer
) = (void *)0x00C6F1A0;

static
__thiscall
uint
(*bayoVertexBuffer_allocNormals)(
	bayoVertexBufferCacheItem_t * vertexBuffer,
	void * pSource,
	uint structSize,
	uint numVertices,
	void * allocator
) = (void *)0x00C5F920;

static
__thiscall
undefined
(*bayoVertexBuffer_delete)(
	bayoVertexBuffer_t * this
) = (void *)0x00C5F790;

static
__thiscall
void
(*bayoVertexBuffer_init)(
	bayoVertexBuffer_t * vertexBuffer
) = (void *)0x00C5F770;

static
__thiscall
int
(*bayoWmb_allocNormalsWithCritical)(
	bayoWmb_t * wmb,
	bayoVertexBufferCacheItem_t * vertexBuffer,
	uint meshIndex
) = (void *)0x004A6FC0;

static
__thiscall
int
(*bayoWmb_gatherMeshInfos)(
	bayoWmb_t * wmb,
	bayoMeshInfos_t * meshInfos,
	int meshIndex
) = (void *)0x004A7210;

static
__thiscall
ushort *
(*bayoWmb_getBatchIndicesPtr)(
	bayoWmb_t * wmb,
	int meshIndex,
	int batchIndex
) = (void *)0x004A74B0;

static
__thiscall
char *
(*bayoWmb_getBoneFlags)(
	bayoWmb_t * wmb
) = (void *)0x004A7670;

static
__thiscall
int
(*bayoWmb_getBoneRefs)(
	bayoWmb_t * pWmb,
	int * numBoneRefs,
	uchar * * ppBoneRefs,
	int meshIndex,
	int batchIndex
) = (void *)0x004A7430;

static
__thiscall
void
(*bayoWmb_getGlobalBonePosition)(
	bayoWmb_t * pWmb,
	vector4_t * position,
	int localBoneIndex
) = (void *)0x004A7600;

static
__thiscall
int
(*bayoWmb_getLocalBoneIndex)(
	bayoWmb_t * pWmb,
	short globalBoneIndex
) = (void *)0x004A7510;

static
__thiscall
int
(*bayoWmb_getLocalBonePosition)(
	bayoWmb_t * pWmb,
	vector4_t * position,
	short globalBoneIndex
) = (void *)0x004A7780;

static
__thiscall
int
(*bayoWmb_getNumBones)(
	bayoWmb_t * wmb
) = (void *)0x004A7500;

static
__thiscall
uint
(*bayoWmb_getNumMeshes)(
	bayoWmb_t * wmb
) = (void *)0x004A71F0;

static
__thiscall
uint
(*bayoWmb_getNumVertices)(
	bayoWmb_t * ppWmb
) = (void *)0x004A70B0;

static
__thiscall
int
(*bayoWmb_getParentBone)(
	bayoWmb_t * pWmb,
	int boneIndex
) = (void *)0x004A7580;

static
__thiscall
float *
(*bayoWmb_getPositionsPtr)(
	bayoWmb_t * wmb
) = (void *)0x004A7150;

static
__thiscall
uint
(*bayoWmb_getTotalVertexSize)(
	bayoWmb_t * wmb
) = (void *)0x004A70E0;

static
__thiscall
int
(*bayoWmb_getVertexExDataSize)(
	bayoWmb_t * wmb
) = (void *)0x004A71B0;

static
__thiscall
int
(*bayoWmb_getVertexSize)(
	bayoWmb_t * wmb
) = (void *)0x004A7700;

static
__thiscall
void *
(*bayoWmb_getVerticesExDataPtr)(
	bayoWmb_t * pWmb
) = (void *)0x004A7190;

static
__thiscall
void *
(*bayoWmb_getVerticesPtr)(
	wmbHeader_t * * pWmb
) = (void *)0x004A7170;

static
__thiscall
int
(*bayoWmb_init)(
	bayoWmb_t * wmb,
	wmbHeader_t * wmbHandle
) = (void *)0x004A6F90;

static
__thiscall
int
(*bayoWmb_isNotSetUnknowVertexFormatFlagB)(
	bayoWmb_t * wmb
) = (void *)0x004A76C0;

static
__thiscall
int
(*bayoWmb_isSetUnknownVertexFormatFlag)(
	bayoWmb_t * pWmb
) = (void *)0x004A7680;

static
__thiscall
int
(*bayoWmb_isVertexFormatCompressed)(
	bayoWmb_t * wmb
) = (void *)0x004A76A0;

static
__thiscall
int
(*bayoWmb_loadBatchInfos)(
	bayoWmb_t * wmb,
	void * * ppMaterial,
	bayoBatchInfos_t * bayoBatchInfos,
	int meshIndex,
	int batchIndex
) = (void *)0x004A7370;

static
__thiscall
int
(*bayoWtb_getNumTextures)(
	bayoWtb_t * wtb
) = (void *)0x00C7C790;

static
__thiscall
void *
(*bayoWtb_getTextureAddress)(
	bayoWtb_t * ppWtb,
	uint textureIndex
) = (void *)0x00C7C7A0;

static
__thiscall
uint
(*bayoWtb_getTextureFlag)(
	bayoWtb_t * wtb,
	uint textureIndex
) = (void *)0x00C7C7E0;

static
__thiscall
uint
(*bayoWtb_getTextureSize)(
	bayoWtb_t * ppWtb,
	uint textureIndex
) = (void *)0x00C7C7C0;

static
__thiscall
void
(*bayoWtb_init)(
	bayoWtb_t * wtb,
	void * wtbHandle
) = (void *)0x00C7C820;

static
__cdecl
uint
(*bayo_addToTotalCubeTextureSize)(
	uint size
) = (void *)0x00C5DE60;

static
__cdecl
void *
(*bayo_allocAligned)(
	uint size,
	bayoHeapPageAligned_t * pBayoHeap
) = (void *)0x00C53BF0;

static
__cdecl
void *
(*bayo_allocAligned2)(
	uint size,
	bayoInstance_t * * ppBayoInstance
) = (void *)0x00C53BB0;

static
__cdecl
bayoTex_t *
(*bayo_allocInitBayoTextures)(
	int numTextures
) = (void *)0x00C6DED0;

static
__cdecl
void
(*bayo_applyExpMathFunction)(
	float * pOutValue,
	float inValue,
	short flags
) = (void *)0x00436240;

static
__cdecl
void
(*bayo_applyExpValueToBoneTransform)(
	bayoBone_t * bone,
	float expValue,
	expRecord_t * expRecord
) = (void *)0x00435A70;

static
__cdecl
int
(*bayo_checkSamplerID0x9000FF00)(
	int samplerID
) = (void *)0x00D521E0;

static
__cdecl
float
(*bayo_clampPIminusPI)(
	float angle
) = (void *)0x00C57E50;

static
__stdcall
uint
(*bayo_createAssetPool)(
	uint itemCount
) = (void *)0x00C5F500;

static
__cdecl
void
(*bayo_createRotationMatrix)(
	matrix4x4_t * transformMatrix,
	vector4_t * eulerAngles,
	int order
) = (void *)0x00C5A630;

static
__cdecl
void
(*bayo_createScalingMatrix)(
	matrix4x4_t * matrix,
	vector3_t * scale
) = (void *)0x00C659B0;

static
__stdcall
int
(*bayo_createThread)(
	int param_1,
	int param_2,
	undefined4 param_3,
	undefined4 param_4,
	undefined4 param_5,
	undefined4 param_6
) = (void *)0x00C634E0;

static
__cdecl
float
(*bayo_decodeExpInterpol2)(
	expHeader_t * expHeader,
	expRecord_t * expRecord,
	float value
) = (void *)0x004358C0;

static
__cdecl
float
(*bayo_decodeExpInterpol4)(
	expHeader_t * expHeader,
	expRecord_t * expRecord,
	float value
) = (void *)0x00435BA0;

static
__cdecl
float
(*bayo_decodeExpInterpol6)(
	expHeader_t * expHeader,
	expRecord_t * expRecord,
	float value
) = (void *)0x00435DE0;

static
__cdecl
void
(*bayo_deleteMainFixedHeap)(
void) = (void *)0x00C5F5A0;

static
__cdecl
int
(*bayo_dichotomicSearchMotKey4)(
	uint lowerKeyNumberBound,
	uint upperKeyNumberBound,
	motKey4_t * pMotKeys,
	int nextFrameIndex
) = (void *)0x004B78B0;

static
__cdecl
void
(*bayo_eulerToQuaternion)(
	vector4_t * quaternion,
	vector4_t * eulerAngles,
	int rotationOrder
) = (void *)0x00C6F9C0;

static
__stdcall
void
(*bayo_events_rodin)(
void) = (void *)0x00622E00;

static
__cdecl
int
(*bayo_findTrackForBone)(
	motRecord_t * * a1,
	int boneIndex,
	int trackIndex
) = (void *)0x004B8090;

static
__cdecl
int
(*bayo_findTrackForBoneWithKeys)(
	motRecord_t * * pMotRecords,
	bayoRecordKeyCacheItem_t * * pCachedKeys,
	int globalBoneIndex,
	int trackIndex
) = (void *)0x004B80E0;

static
__cdecl
void *
(*bayo_freeObject)(
	void * pBayoObject
) = (void *)0x00C58200;

static
__cdecl
uint
(*bayo_getAllocSize)(
	uint itemSize,
	uint itemCount,
	uint itemAlign
) = (void *)0x00C62640;

static
__cdecl
void *
(*bayo_getAssetHandle)(
	char * path
) = (void *)0x00C5F5E0;

static
__cdecl
bayoIndexStream_t *
(*bayo_getIndexBuffer)(
	ushort * pIndices,
	uint indexSize,
	uint numIndices
) = (void *)0x00C79550;

static
__cdecl
int
(*bayo_getIndexBufferCritical)(
	bayoBatch_t * batch,
	ushort * pIndices,
	uint indexSize,
	uint numIndices
) = (void *)0x00C79750;

static
__cdecl
bayoMaterialVectorTableItem_t *
(*bayo_getMaterialFuncs)(
	wmbMaterial_t * material
) = (void *)0x00D4E140;

static
__cdecl
int
(*bayo_getMaterialProperty7)(
	bayoMaterialVectorTableItem_t * a1
) = (void *)0x00D4E540;

static
__cdecl
motRecord_t *
(*bayo_getMotRecordsPtr)(
	motHeader_t * a1
) = (void *)0x004B7A00;

static
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

static
__cdecl
float *
(*bayo_getUnitVector)(
	vector4_t * unitVector,
	vector4_t * vector
) = (void *)0x00C58610;

static
__cdecl
bayoVertexBufferCacheItem_t *
(*bayo_getVertexBuffer)(
	void * pSource,
	uint structSize,
	uint numVertices,
	void * allocator
) = (void *)0x00C79180;

static
__cdecl
int
(*bayo_getVertexBufferWithCritical)(
	bayoVertexBufferCacheItem_t * vertexBuffer,
	void * pSource,
	uint structSize,
	uint numVertices,
	void * allocator
) = (void *)0x00C79390;

static
__cdecl
void
(*bayo_initBatches)(
	bayoBatch_t * pBatches,
	uint structSize,
	uint numBatches,
	__thiscall void * (*)(void * unknownFields)
) = (void *)0x00401030;

static
__cdecl
int
(*bayo_isMatPls05_BXNXB)(
	bayoMaterialVectorTableItem_t * param_1
) = (void *)0x00D4E2D0;

static
__cdecl
int
(*bayo_isMaterialPls05_BXNXXorPls05_BXNXB)(
	bayoMaterialVectorTableItem_t * param_1
) = (void *)0x00D4E2A0;

static
__cdecl
int
(*bayo_isTrack)(
	motRecord_t * pMotRecord,
	int boneIndex,
	int trackIndex
) = (void *)0x004B8070;

static
__cdecl
int
(*bayo_loadCubeTextureFromWTB)(
	bayoTex_t * bayoTexture,
	wtbHeader_t * * wtb,
	uint textureIndex
) = (void *)0x00C6DD90;

static
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

static
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

static
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

static
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

static
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

static
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

static
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

static
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

static
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

static
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

static
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

static
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

static
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

static
__cdecl
int
(*bayo_loadMotRotateAtDateForBone)(
	vector4_t * vec,
	void * motHandle,
	float date,
	int globalBoneIndex
) = (void *)0x004BA2A0;

static
__cdecl
int
(*bayo_loadMotTranslateAtDateForBone)(
	vector4_t * vec,
	void * motHeader,
	float date,
	int globalBoneIndex
) = (void *)0x004BA0A0;

static
__cdecl
int
(*bayo_loadTextureFromWTB)(
	bayoTex_t * bayoTexture,
	bayoWtb_t * wtb,
	int textureIndex,
	int bMipMap,
	int bDynamic
) = (void *)0x00C6DD10;

static
__cdecl
bayoTextureCacheItem_t *
(*bayo_loadTexturesFromWTB)(
	void * wtbHandle,
	int bDynamic
) = (void *)0x00C6E160;

static
__cdecl
int
(*bayo_loadWTB)(
	bayoTextureCacheItem_t * textureCacheItem,
	void * wtbHandle,
	int bDynamic
) = (void *)0x00C6E470;

static
__thiscall
int
(*bayo_load_accessory)(
	bayoActor_t * actor
) = (void *)0x008B47D0;

static
__thiscall
int
(*bayo_load_pl0000_pl0010)(
	bayoActor_t * actor
) = (void *)0x008C6680;

static
__cdecl
void
(*bayo_quaternionToEuler)(
	vector4_t * eulerAngles,
	vector4_t * quaternion,
	int rotationOrder
) = (void *)0x00C6FD80;

static
__cdecl
void
(*bayo_quaternionToEulerWOne)(
	vector4_t * eulerAngles,
	vector4_t * quaternion,
	int rotationOrder
) = (void *)0x00C70330;

static
__stdcall
bayoAllocator_t *
(*bayo_selectAllocator)(
	uint obectId
) = (void *)0x004BE720;

static
__cdecl
void
(*bayo_slerpEulerAngles)(
	vector4_t * eulerAngles,
	vector4_t * previousEulerAngles,
	vector4_t * nextEulerAngles,
	float slerpRatio,
	int rotationOrder
) = (void *)0x00C6B070;

static
__cdecl
bool
(*bayo_testMaterialProperty3equals1)(
	bayoMaterialVectorTableItem_t * a1
) = (void *)0x00D4E550;

static
__thiscall
void
(*bayoeUndef_setLanguage)(
	void * iParm1,
	int languageNumber
) = (void *)0x004515C0;

static
__cdecl
int
(*entry)(
void) = (void *)0x00D78239;

static
__stdcall
void
(*gatherHWConfig)(
	char * appID,
	ulonglong steamID
) = (void *)0x00412CC0;

static
__cdecl
int
(*getLanguageInited)(
void) = (void *)0x00C575F0;

static
__cdecl
undefined4
(*getPerformance)(
void) = (void *)0x00C78090;

static
__thiscall
int
(*getSteamAppsLanguage)(
	bayoSteamAppsLanguage_t * steamAppsLanguage
) = (void *)0x00C77D70;

static
__cdecl
int
(*initCursor)(
void) = (void *)0x00C57130;

static
__cdecl
int
(*initDebugPage)(
void) = (void *)0x00521A30;

static
__cdecl
int
(*initMemorySystem)(
void) = (void *)0x0049E900;

static
__cdecl
int
(*initSteam)(
void) = (void *)0x00C77FD0;

static
__thiscall
void
(*initSteamAppsLanguage)(
	bayoSteamAppsLanguage_t * steamAppsLanguage
) = (void *)0x00C77F10;

static
__thiscall
uint
(*initSteamClient)(
	bayoSteamStruct_t * steamStruct
) = (void *)0x00C17B90;

static
__cdecl
undefined
(*initStruct_05bb9588)(
	struct_05bb9588_t * param_1
) = (void *)0x00C57C90;

static
__cdecl
uint
(*initWindow)(
	int width,
	int height
) = (void *)0x00C56600;

static
__cdecl
int
(*initWindowAgain)(
void) = (void *)0x00C55FB0;

static
__cdecl
void
(*memzeroWithSpecificRegister)(
	void * mem,
	uint size,
	int registerNumber
) = (void *)0x00C58180;

static
__cdecl
undefined
(*memzeroWithSpecificRegister2)(
	void * mem,
	uint size,
	int register
) = (void *)0x00C58100;

static
__cdecl
void
(*setDisplayModeFullWindow)(
	int bFullWindow
) = (void *)0x00C56750;

static
__cdecl
undefined
(*setDisplayModeWindowed)(
	int bWindowed
) = (void *)0x00C56730;

static
__stdcall
void
(*setLanguage)(
	int languageNumber
) = (void *)0x00C57530;

static
__cdecl
void
(*setLanguageInited)(
	int bInited
) = (void *)0x00C575E0;

static
__stdcall
void
(*setWeapon)(
	uint set,
	int bFeet,
	int param_3
) = (void *)0x00433140;

static
__cdecl
void
(*setWindowName)(
	char * windowName
) = (void *)0x00C56EF0;

static
__cdecl
undefined
(*setWindowed)(
	int bWindowed
) = (void *)0x00C569E0;

static
__cdecl
int
(*waitForWindowToClose)(
void) = (void *)0x00C55F40;

static
__stdcall
void *
(*windowProcCallback)(
	void * hwnd,
	uint uMsg,
	uint wParam,
	uint lParam
) = (void *)0x00C56B60;

