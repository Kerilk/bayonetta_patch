static
__stdcall
HRESULT
(*D3DXCompileShader)(
	LPCSTR pSrcData,
	UINT srcDataLen,
	D3DXMACRO * pDefines,
	LPD3DXINCLUDE pInclude,
	LPCSTR pFunctionName,
	LPCSTR pProfile,
	DWORD Flags,
	LPD3DXBUFFER * ppShaders,
	LPD3DXBUFFER * ppErrorMsgs,
	LPD3DXCONSTANTTABLE * ppConstantTable
) = (void *)0x00C85646;

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
undefined
(*D3DXGetShaderConstantTable)(
	DWORD * pFunction,
	LPD3DXCONSTANTTABLE * ppConstantTable
) = (void *)0x00C85640;

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
__stdcall
D3DXVECTOR3 *
(*D3DXVec3Normalize)(
	D3DXVECTOR3 * pOut,
	D3DXVECTOR3 * pV
) = (void *)0x00C85604;

static
__stdcall
D3DXVECTOR3 *
(*D3DXVec3TransformNormal)(
	D3DXVECTOR3 * pOut,
	D3DXVECTOR3 * pV,
	D3DXMATRIX * pM
) = (void *)0x00C855CE;

static
__stdcall
HRESULT
(*DirectInput8Create)(
	HINSTANCE hinst,
	DWORD dwVersion,
	IID * riidltf,
	LPVOID * ppvOut,
	LPUNKNOWN punkOuter
) = (void *)0x00C85682;

static
__thiscall
void
(*bayoActorBase_UnknownMeshSubstructFlag0x10)(
	bayoActorBase_t * iParm1,
	int bSet
) = (void *)0x004A5C00;

static
__thiscall
void
(*bayoActorBase_UnknownMeshSubstructFlag0x20)(
	bayoActorBase_t * iParm1,
	int bSet
) = (void *)0x004A5C40;

static
__thiscall
void
(*bayoActorBase_applyEulerAngles)(
	bayoActorBase_t * iParm1
) = (void *)0x004A4BA0;

static
__thiscall
void
(*bayoActorBase_delete)(
	bayoActorBase_t * puParm1
) = (void *)0x004A4B70;

static
__thiscall
bayoActorBase_t *
(*bayoActorBase_deleteAndFree)(
	bayoActorBase_t * pbParm1,
	byte param_2
) = (void *)0x004A6F20;

static
__thiscall
bayoBone_t *
(*bayoActorBase_getCenterBone)(
	bayoActorBase_t * iParm1
) = (void *)0x004A3AC0;

static
__thiscall
bayoActorBase_t *
(*bayoActorBase_init)(
	bayoActorBase_t * bayoBase
) = (void *)0x004A49C0;

static
__thiscall
void
(*bayoActorBase_setActorFlag0x4000000MeshesUnknownSubstructFlag0x40000)(
	bayoActorBase_t * actor,
	int bSet
) = (void *)0x004A5F40;

static
__thiscall
void
(*bayoActorBase_setField0x278)(
	bayoActorBase_t * iParm1,
	uint param_2
) = (void *)0x004A3B20;

static
__thiscall
void
(*bayoActorBase_setMeshesUnknownSubstructFields0x67And0x68)(
	bayoActorBase_t * iParm1,
	float param_2,
	float param_3
) = (void *)0x004A3AD0;

static
__thiscall
void
(*bayoActorBase_transformBonesIfNeeded)(
	bayoActorBase_t * actor
) = (void *)0x004A41C0;

static
__thiscall
void
(*bayoActorBase_unsetMeshesUnknownSubstructFlag0x1)(
	bayoActorBase_t * iParm1
) = (void *)0x004A4C10;

static
__thiscall
void
(*bayoActorGarment_deleteAndFree)(
	bayoActorGarment_t * pvParm1,
	byte bParm2
) = (void *)0x004CE7B0;

static
__thiscall
int
(*bayoActorGarment_load)(
	bayoActorGarment_t * actor
) = (void *)0x009F2330;

static
__thiscall
void
(*bayoActorLargeSubstruct2_init)(
	bayoActorLargeSubstruct2_t * puParm1
) = (void *)0x0045CCD0;

static
__thiscall
bayoActorLargeSubstruct_t *
(*bayoActorLargeSubstruct_init)(
	bayoActorLargeSubstruct_t * puParm1
) = (void *)0x004E19E0;

static
__thiscall
bayoActorLarge_t *
(*bayoActorLarge_deleteAndFree)(
	bayoActorLarge_t * pbParm1,
	byte bParm2
) = (void *)0x004CF4E0;

static
__thiscall
bayoActorLarge_t *
(*bayoActorLarge_init)(
	bayoActorLarge_t * puParm1
) = (void *)0x00459120;

static
__thiscall
bayoActorLastStructSubstructBaseSubstructSubstruct1_t *
(*bayoActorLastStructSubstructBaseSubstructSubstruct1_init)(
	bayoActorLastStructSubstructBaseSubstructSubstruct1_t * iParm1
) = (void *)0x00C11690;

static
__thiscall
bayoActorLastStructSubstructBaseSubstructSubstruct2_t *
(*bayoActorLastStructSubstructBaseSubstructSubstruct2_init)(
	bayoActorLastStructSubstructBaseSubstructSubstruct2_t * puParm1
) = (void *)0x00C12010;

static
__thiscall
vector4_t *
(*bayoActorLastStructSubstructBaseSubstructSubstruct3_getVector1)(
	bayoActorLastStructSubstructBaseSubstructSubstruct3_t * uParm1
) = (void *)0x00C13150;

static
__thiscall
bayoActorLastStructSubstructBaseSubstructSubstruct3_t *
(*bayoActorLastStructSubstructBaseSubstructSubstruct3_init)(
	bayoActorLastStructSubstructBaseSubstructSubstruct3_t * puParm1
) = (void *)0x00C13280;

static
__thiscall
bayoActorLastStructSubstructBaseSubstructSubstruct4_t *
(*bayoActorLastStructSubstructBaseSubstructSubstruct4_init)(
	bayoActorLastStructSubstructBaseSubstructSubstruct4_t * puParm1
) = (void *)0x00AB4430;

static
__thiscall
bayoActorLastStructSubstructBaseSubstruct_t *
(*bayoActorLastStructSubstructBaseSubstruct_init)(
	bayoActorLastStructSubstructBaseSubstruct_t * iParm1
) = (void *)0x00C0C420;

static
__thiscall
void
(*bayoActorLastStructSubstructBase_delete)(
	bayoActorLastStructSubstructBase_t * puParm1
) = (void *)0x00AB9B40;

static
__thiscall
void
(*bayoActorLastStructSubstructBase_deleteAndFree)(
	bayoActorLastStructSubstructBase_t * puParm1,
	byte param_2
) = (void *)0x00ABA4F0;

static
__thiscall
bayoActorLastStructSubstructBase_t *
(*bayoActorLastStructSubstructBase_init)(
	bayoActorLastStructSubstructBase_t * puParm1
) = (void *)0x00AB9C10;

static
__thiscall
bayoActorLastStructSubstructType0x1_t *
(*bayoActorLastStructSubstructType0x1_init)(
	bayoActorLastStructSubstructType0x1_t * puParm1
) = (void *)0x00ABA530;

static
__thiscall
bayoActorLastStructSubstructType0x2_t *
(*bayoActorLastStructSubstructType0x2_init)(
	bayoActorLastStructSubstructType0x2_t * puParm1
) = (void *)0x00ABB730;

static
__thiscall
bayoActorLastStructSubstructType0x4_t *
(*bayoActorLastStructSubstructType0x4_init)(
	bayoActorLastStructSubstructType0x4_t * puParm1
) = (void *)0x00ABB560;

static
__thiscall
void
(*bayoActorLastStructSubstructType0x8_deleteAndFree)(
	bayoActorLastStructSubstructType0x8_t * pbParm1,
	byte param_2
) = (void *)0x00ABCA30;

static
__thiscall
bayoActorLastStructSubstructType0x8_t *
(*bayoActorLastStructSubstructType0x8_init)(
	bayoActorLastStructSubstructType0x8_t * puParm1
) = (void *)0x00ABC110;

static
__thiscall
int
(*bayoActorLastStructSubstructType0x8_unknownFunc1)(
	bayoActorLastStructSubstructType0x8_t * iParm1,
	bayoActor_t * param_2,
	wmbLastUnknownStructItem_t * structItem,
	bayoHeapBase_t * heap
) = (void *)0x00ABC150;

static
__thiscall
int
(*bayoActorLastStruct_allocate)(
	bayoActorLastStruct_t * actorLastStruct,
	bayoActor_t * actor,
	bayoHeapBase_t * heap
) = (void *)0x0048F500;

static
__thiscall
void
(*bayoActorLastStruct_applyToMotion)(
	bayoActorLastStruct_t * lastStruct
) = (void *)0x0048F780;

static
__thiscall
void
(*bayoActorLastStruct_delete)(
	bayoActorLastStruct_t * ppvParm1
) = (void *)0x0048F460;

static
__thiscall
bayoActorLastStruct_t *
(*bayoActorLastStruct_init)(
	bayoActorLastStruct_t * puParm1
) = (void *)0x0048F450;

static
__thiscall
void
(*bayoActorMedium_computeCollisions)(
	bayoActorMedium_t * actor
) = (void *)0x004A53F0;

static
__thiscall
bayoActorMedium_t *
(*bayoActorMedium_deleteAndFree)(
	bayoActorMedium_t * this,
	byte param_2
) = (void *)0x004BEA90;

static
__thiscall
uint
(*bayoActorMedium_getMediumFlag0x1)(
	bayoActorMedium_t * iParm1
) = (void *)0x004330B0;

static
__thiscall
uint
(*bayoActorMedium_getNotMediumFlag0x200)(
	bayoActorMedium_t * iParm1
) = (void *)0x00433060;

static
__thiscall
bayoActor_t *
(*bayoActorMedium_init)(
	bayoActorMedium_t * puParm1
) = (void *)0x004BCE30;

static
__thiscall
uint
(*bayoActorMedium_load)(
	bayoActorMedium_t * pbParm1
) = (void *)0x004BDFF0;

static
__thiscall
void
(*bayoActorMedium_setActorFlag0x4000000MeshesUnknownSubstructFlag0x40000)(
	bayoActorMedium_t * pbParm1
) = (void *)0x004BD130;

static
__thiscall
void
(*bayoActorMedium_setMediumFlag0x1)(
	bayoActorMedium_t * iParm1
) = (void *)0x00433090;

static
__thiscall
void
(*bayoActorMedium_setMediumFlag0x200)(
	bayoActorMedium_t * iParm1
) = (void *)0x00433050;

static
__thiscall
void
(*bayoActorMedium_setMediumFlag0x400)(
	bayoActorMedium_t * iParm1
) = (void *)0x004330C0;

static
__thiscall
void
(*bayoActorMedium_setMediumFlag0x80)(
	bayoActorMedium_t * iParm1
) = (void *)0x00433070;

static
__thiscall
void
(*bayoActorMedium_unsetActorFlag0x4000000MeshesUnknownSubstructFlag0x40000)(
	bayoActorMedium_t * iParm1
) = (void *)0x004BD140;

static
__thiscall
void
(*bayoActorMedium_unsetMediumFlag0x1)(
	bayoActorMedium_t * iParm1
) = (void *)0x004330A0;

static
__thiscall
void
(*bayoActorMedium_unsetMediumFlag0x200)(
	bayoActorMedium_t * iParm1
) = (void *)0x00433040;

static
__thiscall
void
(*bayoActorMedium_unsetMediumFlag0x400)(
	bayoActorMedium_t * iParm1
) = (void *)0x004330D0;

static
__thiscall
void
(*bayoActorMedium_unsetMediumFlag0x80)(
	bayoActorMedium_t * iParm1
) = (void *)0x00433080;

static
__thiscall
void
(*bayoActorMedium_updateWithBaseboneLocalPosition)(
	bayoActorMedium_t * iParm1
) = (void *)0x004BDFB0;

static
__thiscall
void
(*bayoActorSync_delete)(
	bayoActorSync_t * puParm1
) = (void *)0x00C61C20;

static
__thiscall
bayoActorSync_t *
(*bayoActorSync_init)(
	bayoActorSync_t * puParm1
) = (void *)0x00C61C00;

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
void
(*bayoActor_decodeMotion)(
	bayoActor_t * this,
	bayoExp_t * param_2
) = (void *)0x004DEA40;

static
__thiscall
void
(*bayoActor_delete)(
	bayoActor_t * pActor
) = (void *)0x00432F50;

static
__thiscall
bayoActor_t *
(*bayoActor_deleteAndFree)(
	bayoActor_t * pbParm1,
	byte bParm2
) = (void *)0x004C0650;

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
	bayoActorBase_t * actor,
	int meshIndex
) = (void *)0x004A32E0;

static
__thiscall
wmbLastUnknownStruct_t *
(*bayoActor_getWMBLastUnknownStruct)(
	bayoActor_t * iParm1
) = (void *)0x004A38D0;

static
__thiscall
bayoActor_t *
(*bayoActor_init)(
	bayoActor_t * puParm1
) = (void *)0x004DEB50;

static
__thiscall
int
(*bayoActor_load)(
	bayoActor_t * pbParm1
) = (void *)0x004DE980;

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
	bayoActorBase_t * actor,
	bayoContext_t * context
) = (void *)0x004A3D70;

static
__thiscall
int
(*bayoActor_loadSkeleton)(
	bayoActorBase_t * actor,
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
	bayoActorBase_t * actor,
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
void *
(*bayoAssetBuffer_checkAssetAndGetHandle)(
	bayoAssetBuffer_t * buff,
	char * assetPath
) = (void *)0x00C798A0;

static
__thiscall
void
(*bayoAssetBuffer_init)(
	bayoAssetBuffer_t * assetBuffer,
	void * datHandle,
	uint datSize,
	char * datName
) = (void *)0x00C79870;

static
__thiscall
int
(*bayoAssetDescriptor_addToLoadQueue)(
	bayoAssetDescriptor_t * assetDesc,
	char * path,
	void * buffer,
	uint buffSize,
	int priority
) = (void *)0x00C7A5F0;

static
__thiscall
uint
(*bayoAssetDescriptor_bError)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A550;

static
__thiscall
int
(*bayoAssetDescriptor_bLoaded)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A560;

static
__thiscall
void
(*bayoAssetDescriptor_cleanup)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A3B0;

static
__thiscall
undefined
(*bayoAssetDescriptor_cleanup2)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A5B0;

static
__thiscall
int
(*bayoAssetDescriptor_continueLoading)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A3F0;

static
__thiscall
int
(*bayoAssetDescriptor_finishLoading)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A4C0;

static
__thiscall
undefined4
(*bayoAssetDescriptor_getPriority)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A5A0;

static
__thiscall
void
(*bayoAssetDescriptor_init)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A350;

static
__thiscall
void
(*bayoAssetDescriptor_monitorLoading)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A860;

static
__thiscall
undefined4
(*bayoAssetDescriptor_startLoading)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A720;

static
__thiscall
bayoAtomicCounter_t *
(*bayoAtomicCounter_deleteAndFree)(
	bayoAtomicCounter_t * puParm1,
	byte param_2
) = (void *)0x00514120;

static
__thiscall
bayoAtomicCounter_t *
(*bayoAtomicCounter_init)(
	bayoAtomicCounter_t * puParm1
) = (void *)0x00513110;

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
__thiscall
void
(*bayoCloth_delete)(
	bayoCloth_t * iParm1
) = (void *)0x00421790;

static
__thiscall
int
(*bayoCloth_init)(
	bayoCloth_t * cloth
) = (void *)0x0041F140;

static
__thiscall
void
(*bayoCollisionCache_hitActor)(
	bayoCollisionCache_t * iParm1,
	bayoActorBase_t * actor
) = (void *)0x004982C0;

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
uint
(*bayoCpkCriDirectoryEntry_bInited)(
	bayoCpkCriDirectoryEntry_t * piParm1
) = (void *)0x00C74320;

static
__thiscall
uint
(*bayoCpkCriDirectoryEntry_getFileSize)(
	bayoCpkCriDirectoryEntry_t * criDirectory,
	int * pSize,
	char * path
) = (void *)0x00C743B0;

static
__thiscall
undefined4
(*bayoCpkCriDirectoryEntry_getFilesHandle)(
	bayoCpkCriDirectoryEntry_t * cpkEntry
) = (void *)0x00C74330;

static
__thiscall
undefined4
(*bayoCpkCriDirectoryEntry_initFileVaultEntry)(
	bayoCpkCriDirectoryEntry_t * piParm1
) = (void *)0x00C742E0;

static
__cdecl
void *
(*bayoCriAllocator_00f49510_alloc)(
	bayoCriAllocator_t * allocator,
	uint size
) = (void *)0x00C6CE60;

static
__cdecl
void
(*bayoCriAllocator_00f49510_free)(
	bayoCriAllocator_t * allocator,
	void * param_2
) = (void *)0x00C6CE30;

static
__cdecl
void
(*bayoCriAllocator_updateAlloc)(
	bayoCriAllocator_t * allocator,
	__cdecl void * (*)(bayoCriAllocator_t * allocator, uint ),
	int flag
) = (void *)0x00CC5FDF;

static
__cdecl
undefined
(*bayoCriAllocator_updateFree)(
	bayoCriAllocator_t * allocator,
	__cdecl void (*)(bayoCriAllocator_t * allocator, void * memory),
	int flag
) = (void *)0x00CC6008;

static
__cdecl
int
(*bayoCriData_create)(
	uint size,
	bayoHeapBase_t * heap
) = (void *)0x00C79E70;

static
__cdecl
undefined
(*bayoCriFileSystem_create)(
	char * pathDataDirPlus,
	uint heapItemCount,
	undefined4 param_3,
	bayoHeapSub_t * heap
) = (void *)0x00C74B30;

static
__cdecl
int
(*bayoCriHeap_create)(
	uint itemCount,
	bayoHeapSub_t * allocHeap
) = (void *)0x00C79A60;

static
__thiscall
int
(*bayoCriLoader_findAsset)(
	void * criLoaderHandle,
	void * criFilesHandle,
	char * path,
	int param_4,
	undefined4 param_5
) = (void *)0x00CD154F;

static
__cdecl
undefined
(*bayoCriStruct_Init)(
	undefined4 param_1,
	uint size
) = (void *)0x00CC3AD7;

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
D3DCOLORVALUE *
(*bayoD3DCOLORVALUE_fromARGB)(
	D3DCOLORVALUE * pColorValue,
	D3DCOLOR color
) = (void *)0x00C5C780;

static
__thiscall
void *
(*bayoDat_findFile)(
	bayoDat_t * datFile,
	char * fileName
) = (void *)0x00C5B5A0;

static
__thiscall
int
(*bayoDat_findFileIndex)(
	bayoDat_t * dat,
	char * fileName
) = (void *)0x00C5B430;

static
__thiscall
int
(*bayoDat_findFileIndexByExtension)(
	bayoDat_t * datFile,
	char * extension,
	uint index
) = (void *)0x00C5B3B0;

static
__thiscall
uint
(*bayoDat_findFileSize)(
	bayoDat_t * dat,
	char * fileName
) = (void *)0x00C5B650;

static
__thiscall
void *
(*bayoDat_findFileWithExtension)(
	bayoDat_t * piParm1,
	char * extension,
	uint index
) = (void *)0x00C5B560;

static
__thiscall
ulonglong
(*bayoDierctoryDescriptor_getTotalSize)(
	bayoDirectoryDescriptor_t * direDesc
) = (void *)0x00C7ECA0;

static
__thiscall
int
(*bayoDirectoryDescriptor_getFileSize)(
	bayoDirectoryDescriptor_t * dir,
	char * fileName
) = (void *)0x00C7EC00;

static
__thiscall
int
(*bayoDirectoryDescriptor_recursivelyExplore)(
	bayoDirectoryDescriptor_t * directoryDesc,
	char * param_2,
	bayoFileVaultData_t * vaultData
) = (void *)0x00C7ED10;

static
__thiscall
uint
(*bayoDirectoryDescriptor_setPath)(
	bayoDirectoryDescriptor_t * directoryDescriptor,
	char * pathDataDirPlus,
	bayoFileVaultData_t * substruct
) = (void *)0x00C7EB30;

static
__thiscall
bayoDirectoryDescriptor_t *
(*bayoDirectoryDesxcriptor_init)(
	bayoDirectoryDescriptor_t * directoryDescriptor
) = (void *)0x00C7EB10;

static
__thiscall
void
(*bayoDisplayModes_add)(
	bayoDisplayModes_t * displayModes,
	D3DDISPLAYMODE * displayMode
) = (void *)0x00C55ED0;

static
__thiscall
void
(*bayoDisplayModes_copyModes)(
	bayoDisplayModes_t * displayModes,
	D3DDISPLAYMODE * oldDisplayModeArray,
	undefined4 param_3,
	D3DDISPLAYMODE * displayModeArray
) = (void *)0x00C55C80;

static
__thiscall
void
(*bayoDisplayModes_increaseArraySize)(
	bayoDisplayModes_t * displayModes,
	int param_2
) = (void *)0x00C55D80;

static
__thiscall
void
(*bayoDisplayModes_reallocateIfNeeded)(
	bayoDisplayModes_t * displayModes,
	uint displayModeCount
) = (void *)0x00C55CB0;

static
__thiscall
int
(*bayoDoubleBuffers_allocate)(
	bayoDoubleBuffers_t * pStru,
	uint heapSize,
	int vertexBufferSize,
	int indexCount,
	bayoHeapBase_t * sourceHeap
) = (void *)0x00C61F80;

static
__thiscall
void
(*bayoDoubleBuffers_swap)(
	bayoDoubleBuffers_t * pStru
) = (void *)0x00C61E10;

static
__thiscall
int
(*bayoEffectBase_apply)(
	bayoEffectBase_t * material
) = (void *)0x00C60A10;

static
__thiscall
int
(*bayoEffectBase_compileShader)(
	bayoEffectBase_t * iParm1,
	LPCSTR shaderSource,
	UINT sourceSize
) = (void *)0x00C5FF10;

static
__thiscall
void
(*bayoEffectBase_delete)(
	bayoEffectBase_t * puParm1
) = (void *)0x00C60AC0;

static
__thiscall
void
(*bayoEffectBase_delete_dynamic)(
	bayoEffectBase_t * this
) = (void *)0x00C60100;

static
__thiscall
bayoEffectBase_t *
(*bayoEffectBase_init)(
	bayoEffectBase_t * this
) = (void *)0x00C5F980;

static
__thiscall
int
(*bayoEffectBase_loadMatrix)(
	bayoEffectBase_t * effect,
	bayoEffectMatrix_t * effectMatrix,
	char * matrixName
) = (void *)0x00C60180;

static
__thiscall
int
(*bayoEffectBase_loadMatrixVertex)(
	bayoEffectBase_t * iParm1,
	bayoEffectMatrix_t * param_2,
	char * param_3
) = (void *)0x00C60230;

static
__thiscall
uint
(*bayoEffectBase_loadSampler)(
	bayoEffectBase_t * effect,
	bayoEffectSampler_t * sampler,
	char * samplerName
) = (void *)0x00C602B0;

static
__thiscall
int
(*bayoEffectBase_loadShaders)(
	bayoEffectBase_t * effect,
	LPVOID psoHandle,
	LPVOID vsoHandle
) = (void *)0x00C5FD70;

static
__thiscall
int
(*bayoEffectBase_loadShadersFromName)(
	bayoEffectBase_t * effect,
	char * vertexShaderName,
	char * pixelShaderName
) = (void *)0x00D52DD0;

static
__thiscall
int
(*bayoEffectBase_loadShadersFromPath)(
	bayoEffectBase_t * effect,
	char * vertexShaderPath,
	char * pixelShaderPath
) = (void *)0x00C5FE80;

static
__thiscall
int
(*bayoEffectBase_updateMatrix)(
	bayoEffectBase_t * effect,
	bayoEffectMatrix_t * matrix,
	matrix4x4_t * data
) = (void *)0x00C60330;

static
__thiscall
int
(*bayoEffectBase_updateMatrixWithSize)(
	bayoEffect_00eac430_t * effect,
	bayoEffectMatrix_t * UVPosMatrix,
	LPCVOID data,
	int floatCount
) = (void *)0x00C606E0;

static
__thiscall
void
(*bayoEffectCacheBase_delete)(
	bayoEffectCache_t * iParm1
) = (void *)0x0059FE10;

static
__thiscall
bayoEffectCache_t *
(*bayoEffectCacheBase_init)(
	bayoEffectCache_t * puParm1
) = (void *)0x0059FD20;

static
__thiscall
void
(*bayoEffectCacheSubstruct1_delete)(
	bayoEffectCacheSubstruct1_t * this
) = (void *)0x00C660A0;

static
__thiscall
bayoEffectCacheSubstruct1_t *
(*bayoEffectCacheSubstruct1_init)(
	bayoEffectCacheSubstruct1_t * puParm1
) = (void *)0x00C65F10;

static
__thiscall
bayoEffectCacheSubstruct2_t *
(*bayoEffectCacheSubstruct2_init)(
	bayoEffectCacheSubstruct2_t * pbParm1
) = (void *)0x0059FF20;

static
__thiscall
void
(*bayoEffectCache_bindLibrary)(
	bayoEffectCache_t * iParm1,
	uint param_2,
	char * effectLibName,
	void * effHandle
) = (void *)0x0059B370;

static
__thiscall
void
(*bayoEffectMatrix_delete)(
	bayoEffectMatrix_t * this
) = (void *)0x00C64810;

static
__thiscall
bayoEffectMatrix_t *
(*bayoEffectMatrix_init)(
	bayoEffectMatrix_t * this
) = (void *)0x00C647D0;

static
__cdecl
int
(*bayoEffectMatrix_setARGBColor)(
	bayoEffectMatrix_t * effectMatrix,
	D3DCOLOR color
) = (void *)0x00C60570;

static
__thiscall
void
(*bayoEffectSampler_computeFlags)(
	bayoEffectSampler_t * effectSampler
) = (void *)0x00C64560;

static
__thiscall
void
(*bayoEffectSampler_delete)(
	bayoEffectSampler_t * sampler
) = (void *)0x00C64530;

static
__thiscall
void
(*bayoEffectSampler_init)(
	bayoEffectSampler_t * sampler
) = (void *)0x00C64500;

static
__thiscall
void
(*bayoEffectSampler_setAddressU)(
	bayoEffectSampler_t * effect,
	D3DTEXTUREADDRESS * param_2
) = (void *)0x00C64750;

static
__thiscall
void
(*bayoEffectSampler_setAddressV)(
	bayoEffectSampler_t * effect,
	D3DTEXTUREADDRESS * param_2
) = (void *)0x00C64770;

static
__thiscall
void
(*bayoEffectSampler_setMagFilter)(
	bayoEffectSampler_t * pbParm1,
	D3DTEXTUREFILTERTYPE * param_2
) = (void *)0x00C64730;

static
__thiscall
void
(*bayoEffectSampler_setMaxAnisotropy)(
	bayoEffectSampler_t * effectSampler,
	DWORD * maxAnisotropy
) = (void *)0x00C647B0;

static
__thiscall
void
(*bayoEffectSampler_setMinFilter)(
	bayoEffectSampler_t * pbParm1,
	D3DTEXTUREFILTERTYPE * param_2
) = (void *)0x00C646F0;

static
__thiscall
void
(*bayoEffectSampler_setMipFilter)(
	bayoEffectSampler_t * sampler,
	D3DTEXTUREFILTERTYPE * param_2
) = (void *)0x00C64710;

static
__cdecl
int
(*bayoEffectSampler_update)(
	bayoEffectSampler_t * sampler,
	void * param_2,
	uint param_3,
	int flag
) = (void *)0x00C60CE0;

static
__thiscall
void
(*bayoEffect_00da50ac_delete)(
	bayoEffect_00da50ac_t * pbParm1
) = (void *)0x00445E90;

static
__thiscall
bayoEffect_00da50ac_t *
(*bayoEffect_00da50ac_deleteAndFree)(
	bayoEffect_00da50ac_t * pvParm1,
	byte bParm2
) = (void *)0x00446A10;

static
__thiscall
void
(*bayoEffect_00da50ac_delete_dynamic)(
	bayoEffect_00da50ac_t * pbParm1
) = (void *)0x00445EF0;

static
__thiscall
bayoEffect_00da50ac_t *
(*bayoEffect_00da50ac_init)(
	bayoEffect_00da50ac_t * pbParm1
) = (void *)0x00442E00;

static
__thiscall
void
(*bayoEffect_00da518c_delete)(
	bayoEffect_00da518c_t * pbParm1
) = (void *)0x00445F50;

static
__thiscall
bayoEffect_00da518c_t *
(*bayoEffect_00da518c_deleteAndFree)(
	bayoEffect_00da518c_t * pbParm1,
	byte param_2
) = (void *)0x00446A30;

static
__thiscall
void
(*bayoEffect_00da518c_delete_dynamic)(
	bayoEffect_00da518c_t * pbParm1
) = (void *)0x00445F90;

static
__thiscall
bayoEffect_00da518c_t *
(*bayoEffect_00da518c_init)(
	bayoEffect_00da518c_t * pbParm1
) = (void *)0x00443160;

static
__thiscall
int
(*bayoEffect_00da518c_load)(
	bayoEffect_00da518c_t * effect
) = (void *)0x004431A0;

static
__thiscall
void
(*bayoEffect_00da51f8_delete)(
	bayoEffect_00da51f8_t * pbParm1
) = (void *)0x00446130;

static
__thiscall
bayoEffect_00da51f8_t *
(*bayoEffect_00da51f8_deleteAndFree)(
	bayoEffect_00da51f8_t * pbParm1,
	byte param_2
) = (void *)0x00446AF0;

static
__thiscall
void
(*bayoEffect_00da51f8_delete_dynamic)(
	bayoEffect_00da51f8_t * pbParm1
) = (void *)0x00446180;

static
__thiscall
bayoEffect_00da51f8_t *
(*bayoEffect_00da51f8_init)(
	bayoEffect_00da51f8_t * pbParm1
) = (void *)0x004435D0;

static
__thiscall
int
(*bayoEffect_00da51f8_load)(
	bayoEffect_00da51f8_t * effect
) = (void *)0x00443630;

static
__thiscall
void
(*bayoEffect_00da5778_delete)(
	bayoEffect_00da5778_t * pbParm1
) = (void *)0x00446010;

static
__thiscall
bayoEffect_00da5778_t *
(*bayoEffect_00da5778_deleteAndFree)(
	bayoEffect_00da5778_t * pbParm1,
	byte bParm2
) = (void *)0x00446A80;

static
__thiscall
bayoEffect_00da5778_t *
(*bayoEffect_00da5778_init)(
	bayoEffect_00da5778_t * pbParm1
) = (void *)0x00445FD0;

static
__thiscall
int
(*bayoEffect_00da5778_load)(
	bayoEffect_00da5778_t * pbParm1
) = (void *)0x00443370;

static
__thiscall
void
(*bayoEffect_00da5784_delete)(
	bayoEffect_00da5784_t * pbParm1
) = (void *)0x004460C0;

static
__thiscall
bayoEffect_00da5784_t *
(*bayoEffect_00da5784_deleteAndFree)(
	bayoEffect_00da5784_t * pbParm1,
	byte bParm2
) = (void *)0x00446AA0;

static
__thiscall
void
(*bayoEffect_00da5784_delete_dynamic)(
	bayoEffect_00da5784_t * pbParm1
) = (void *)0x00446100;

static
__thiscall
bayoEffect_00da5784_t *
(*bayoEffect_00da5784_init)(
	bayoEffect_00da5784_t * pbParm1
) = (void *)0x00446080;

static
__thiscall
int
(*bayoEffect_00da5784_load)(
	bayoEffect_00da5784_t * effect
) = (void *)0x00443470;

static
__thiscall
bayoEffect_00eac430_t *
(*bayoEffect_00eac430_deleteAndFreen)(
	bayoEffect_00eac430_t * pbParm1,
	byte param_2
) = (void *)0x00C68170;

static
__thiscall
void
(*bayoEffect_00eac430_delete_dynamic)(
	bayoEffect_00eac430_t * pbParm1
) = (void *)0x00C68140;

static
__thiscall
bayoEffect_00eac430_t *
(*bayoEffect_00eac430_init)(
	bayoEffect_00eac430_t * effect
) = (void *)0x00C67F70;

static
__thiscall
int
(*bayoEffect_00eac430_load)(
	bayoEffect_00eac430_t * effect,
	LPCSTR shaderSource,
	UINT sourceSize
) = (void *)0x00C680E0;

static
__thiscall
int
(*bayoEffect_00eac430_loadSampler0AndUVPos)(
	bayoEffect_00eac430_t * iParm1
) = (void *)0x00C67FB0;

static
__thiscall
void
(*bayoEffect_00eac430_updateSampler0)(
	bayoEffect_00eac430_t * iParm1,
	void * param_2,
	int param_3
) = (void *)0x00C680A0;

static
__thiscall
int
(*bayoEffect_00eac430_updateUVPos)(
	bayoEffect_00eac430_t * effect,
	LPCVOID pData
) = (void *)0x00C680C0;

static
__thiscall
bayoEffect_00eac444_t *
(*bayoEffect_00eac444_init)(
	bayoEffect_00eac444_t * pbParm1
) = (void *)0x00C681A0;

static
__thiscall
int
(*bayoEffect_00eac444_load)(
	bayoEffect_00eac444_t * effect,
	LPCSTR shaderSource,
	UINT sourceSize
) = (void *)0x00C682B0;

static
__thiscall
int
(*bayoEffect_00eac444_loadSampler0)(
	bayoEffect_00eac444_t * effect
) = (void *)0x00C681D0;

static
__thiscall
void
(*bayoEffect_00eac444_updateSampler0)(
	bayoEffect_00eac444_t * iParm1,
	void * param_2,
	uint param_3
) = (void *)0x00C68290;

static
__thiscall
void
(*bayoEffect_00eac450_delete)(
	bayoEffect_00eac450_t * pbParm1
) = (void *)0x00C7B050;

static
__thiscall
bayoEffect_00eac450_t *
(*bayoEffect_00eac450_deleteAndFree)(
	bayoEffect_00eac450_t * puParm1,
	byte param_2
) = (void *)0x00C68410;

static
__thiscall
bayoEffect_00eac450_t *
(*bayoEffect_00eac450_init)(
	bayoEffect_00eac450_t * pbParm1
) = (void *)0x00C68360;

static
__thiscall
uint
(*bayoEffect_00eac450_load)(
	bayoEffect_00eac450_t * effect,
	LPCSTR shaderSource,
	UINT sourceSize
) = (void *)0x00C68390;

static
__thiscall
bayoEffect_00eac598_t *
(*bayoEffect_00eac598_deleteAndFree)(
	bayoEffect_00eac598_t * pbParm1,
	byte param_2
) = (void *)0x00C68FF0;

static
__thiscall
bayoEffect_00eac598_t *
(*bayoEffect_00eac598_init)(
	bayoEffect_00eac598_t * pbParm1
) = (void *)0x00C68EB0;

static
__thiscall
uint
(*bayoEffect_00eac598_load)(
	bayoEffect_00eac598_t * iParm1,
	LPCSTR param_2,
	UINT param_3
) = (void *)0x00C68EE0;

static
__thiscall
void
(*bayoEffect_00eac598_updateOutlineColor)(
	bayoEffect_00eac598_t * iParm1,
	D3DCOLOR color
) = (void *)0x00C68FB0;

static
__thiscall
void
(*bayoEffect_00eb0894_delete_dynamic)(
	bayoEffect_00eb0894_t * pbParm1
) = (void *)0x00C7B220;

static
__thiscall
bayoEffect_00eb0894_t *
(*bayoEffect_00eb0894_init)(
	bayoEffect_00eb0894_t * pbParm1
) = (void *)0x00C7B020;

static
__thiscall
int
(*bayoEffect_00eb0894_load)(
	bayoEffect_00eac450_t * effect,
	LPCSTR shaderSource,
	UINT sourceSize
) = (void *)0x00C7B150;

static
__thiscall
void
(*bayoEffect_00eb0894_setMaterialColorARGBColor)(
	bayoEffect_00eb0894_t * effect,
	D3DCOLOR color
) = (void *)0x00C7B110;

static
__thiscall
void
(*bayoEffect_00eb0894_updateViewProjMatrix)(
	bayoEffect_00eb0894_t * pbParm1,
	matrix4x4_t * param_2
) = (void *)0x00C7B0D0;

static
__thiscall
void
(*bayoEffect_00eb0894_updateWorldMatrix)(
	bayoEffect_00eb0894_t * effect,
	matrix4x4_t * matrix
) = (void *)0x00C7B0F0;

static
__thiscall
bayoEffect_00ed212c_t *
(*bayoEffect_00ed212c_deleteAndFree)(
	bayoEffect_00ed212c_t * pbParm1,
	byte param_2
) = (void *)0x00D52150;

static
__thiscall
void
(*bayoEffect_00ed212c_delete_dynamic)(
	bayoEffect_00ed212c_t * pbParm1
) = (void *)0x00D52120;

static
__thiscall
void
(*bayoEffect_00ed212c_updateSampler)(
	bayoEffect_00ed212c_t * effect,
	void * param_2,
	uint param_3
) = (void *)0x00D520D0;

static
__thiscall
bayoEm0000Substruct1Substruct_t *
(*bayoEm0000Substruct1Substruct_init)(
	bayoEm0000Substruct1Substruct_t * puParm1
) = (void *)0x0046DE00;

static
__thiscall
undefined4 *
(*bayoEm0000Substruct1_init)(
	bayoEm0000Substruct1_t * puParm1
) = (void *)0x00418460;

static
__thiscall
bayoEm0000Substruct2_t *
(*bayoEm0000Substruct2_init)(
	bayoEm0000Substruct2_t * puParm1
) = (void *)0x004C0470;

static
__thiscall
undefined4 *
(*bayoEm0000Substruct3_init)(
	bayoEm0000Substruct3_t * puParm1
) = (void *)0x0042E400;

static
__thiscall
bayoEm0000Substruct4_t *
(*bayoEm0000Substruct4_init)(
	bayoEm0000Substruct4_t * puParm1
) = (void *)0x00419340;

static
__thiscall
bayoEm0000Substruct5_t *
(*bayoEm0000Substruct5_init)(
	bayoEm0000Substruct5_t * puParm1
) = (void *)0x004E5C60;

static
__thiscall
void
(*bayoEm0000_delete)(
	bayoEm0000_t * actor
) = (void *)0x004C06F0;

static
__thiscall
void
(*bayoEm0000_deleteAndFree)(
	bayoEm0000_t * pvParm1,
	byte bParm2
) = (void *)0x004CE8E0;

static
__thiscall
bayoEm0000_t *
(*bayoEm0000_init)(
	bayoEm0000_t * param_1
) = (void *)0x004C96F0;

static
__thiscall
int
(*bayoEm0000_load)(
	bayoEm0000_t * pbParm1
) = (void *)0x0062CB40;

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
void
(*bayoExp_delete)(
	bayoExp_t * this
) = (void *)0x00435A40;

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
bayoExp_t *
(*bayoExp_init)(
	bayoExp_t * puParm1
) = (void *)0x00435A30;

static
__thiscall
void
(*bayoExp_modifyEntry)(
	bayoExp_t * exp,
	float * value
) = (void *)0x00436350;

static
__thiscall
uint
(*bayoFileDesc_getSize)(
	bayoFileDescriptor_t * fileDesc
) = (void *)0x00C81FE0;

static
__thiscall
void
(*bayoFileDescriptor_chain)(
	bayoFileDescriptor_t * previousFD,
	bayoFileDescriptor_t * newFD
) = (void *)0x00C81FB0;

static
__thiscall
char *
(*bayoFileDescriptor_getName)(
	bayoFileDescriptor_t * fileDesc
) = (void *)0x00C81FA0;

static
__thiscall
bayoFileDescriptor_t *
(*bayoFileDescriptor_getNext)(
	bayoFileDescriptor_t * fileDesc
) = (void *)0x00C81FC0;

static
__thiscall
uint
(*bayoFileDescriptor_setName)(
	bayoFileDescriptor_t * fileDescriptor,
	char * name,
	bayoFileVaultData_t * fileVaultData
) = (void *)0x00C81F80;

static
__thiscall
void
(*bayoFileDescriptor_setSize)(
	bayoFileDescriptor_t * fileDescriptor,
	uint fileSize
) = (void *)0x00C81FD0;

static
__thiscall
undefined4
(*bayoFileVaultData_alloc)(
	bayoFileVaultData_t * vaultData,
	bayoHeapBase_t * heap
) = (void *)0x00C7EA20;

static
__thiscall
char *
(*bayoFileVaultData_appendString)(
	bayoFileVaultData_t * vaultData,
	char * path
) = (void *)0x00C7E960;

static
__thiscall
bayoDirectoryDescriptor_t *
(*bayoFileVaultData_getNextDirectoryDescriptor)(
	bayoFileVaultData_t * vaultData
) = (void *)0x00C7EAB0;

static
__thiscall
bayoFileDescriptor_t *
(*bayoFileVaultData_getNextFileDescriptor)(
	bayoFileVaultData_t * subStru
) = (void *)0x00C7EAE0;

static
__thiscall
int
(*bayoFileVault_getFileHierarchy)(
	bayoFileVault_t * fileVault,
	char * pathDataDirPlus,
	bayoHeapSub_t * heap
) = (void *)0x00C79DA0;

static
__thiscall
void
(*bayoFileVault_setDirectoryDescriptorCount)(
	bayoFileVault_t * stru,
	undefined4 param_2
) = (void *)0x00C79D20;

static
__thiscall
void
(*bayoFileVault_setFileDescriptorCount)(
	bayoFileVault_t * stru,
	undefined4 param_2
) = (void *)0x00C79D30;

static
__thiscall
void
(*bayoFileVault_setTotalCharCount)(
	bayoFileVault_t * iParm1,
	undefined4 param_2
) = (void *)0x00C79D40;

static
__thiscall
uint
(*bayoFindFile_bInited)(
	bayoFindFile_t * findFile
) = (void *)0x00C821D0;

static
__thiscall
uint
(*bayoFindFile_findFirst)(
	bayoFindFile_t * findFile,
	char * path
) = (void *)0x00C82010;

static
__thiscall
uint
(*bayoFindFile_findNext)(
	bayoFindFile_t * findFile
) = (void *)0x00C820B0;

static
__thiscall
int
(*bayoFindFile_getFileName)(
	bayoFindFile_t * findFile
) = (void *)0x00C82190;

static
__thiscall
undefined4
(*bayoFindFile_getSizeLow)(
	bayoFindFile_t * findFile
) = (void *)0x00C821B0;

static
__thiscall
void
(*bayoFindFile_init)(
	bayoFindFile_t * findFile
) = (void *)0x00C81FF0;

static
__thiscall
uint
(*bayoFindFile_isDirectory)(
	bayoFindFile_t * findFile
) = (void *)0x00C82200;

static
__thiscall
uint
(*bayoFindFile_isFilePathCurrentDirectory)(
	bayoFindFile_t * findFile
) = (void *)0x00C82280;

static
__thiscall
uint
(*bayoFindFile_isFilePathParentDirectory)(
	bayoFindFile_t * findFile
) = (void *)0x00C822B0;

static
__thiscall
uint
(*bayoFindFile_isNotDirectory)(
	bayoFindFile_t * findFile
) = (void *)0x00C821E0;

static
__thiscall
uint
(*bayoFindFile_isPath)(
	bayoFindFile_t * findFile,
	char * path
) = (void *)0x00C82220;

static
__thiscall
void
(*bayoFindFile_reset)(
	bayoFindFile_t * findFile
) = (void *)0x00C820F0;

static
__thiscall
void
(*bayoFindFile_reset2)(
	bayoFindFile_t * iParm1
) = (void *)0x00C82250;

static
__thiscall
int
(*bayoFixedIndexBuffer_allocate)(
	bayoFixedIndexBuffer_t * fIBuff,
	int indexSize,
	int indexCount
) = (void *)0x00C7AAB0;

static
__thiscall
void
(*bayoFixedIndexBuffer_delete)(
	bayoFixedIndexBuffer_t * fIBuff
) = (void *)0x00C7AA30;

static
__thiscall
void
(*bayoFixedIndexBuffer_discardData)(
	bayoFixedIndexBuffer_t * fIBuff
) = (void *)0x00C7A950;

static
__thiscall
int
(*bayoFixedVertexBuffer_allocate)(
	bayoFixedVertexBuffer_t * fVBuff,
	int size
) = (void *)0x00C660E0;

static
__thiscall
void
(*bayoFixedVertexBuffer_clearSource)(
	bayoFixedVertexBuffer_t * fVBuff
) = (void *)0x00C65F20;

static
__thiscall
void
(*bayoFixedVertexBuffer_delete)(
	bayoFixedVertexBuffer_t * fVBuff
) = (void *)0x00C66060;

static
__thiscall
void
(*bayoFixedVertexBuffer_discardData)(
	bayoFixedVertexBuffer_t * fVBuff
) = (void *)0x00C65F80;

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
(*bayoHeapFixed_checkSizeAndCount)(
	bayoHeapFixed_t * heap,
	uint itemSize,
	uint itemCount
) = (void *)0x00C62700;

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
(*bayoHeapFixed_getBuffer)(
	bayoHeapFixed_t * heap
) = (void *)0x00C62720;

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
(*bayoHeapPageAligned_initSize)(
	bayoHeapPageAligned_t * heap,
	int ignored,
	int totalSize
) = (void *)0x00C6ECC0;

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
void
(*bayoHeapPageAligned_reset)(
	bayoHeapPageAligned_t * heap
) = (void *)0x00C6ECE0;

static
__thiscall
int
(*bayoHeapPool_create)(
	bayoHeapPool_t * this,
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
int
(*bayoHeapSub_create)(
	bayoHeapSub_t * newHeap,
	uint heapSize,
	bayoHeapPageAligned_t * sourceHeap
) = (void *)0x00C6B9A0;

static
__thiscall
void
(*bayoHeapSub_delete)(
	bayoHeapSub_t * heap
) = (void *)0x00C6BA70;

static
__thiscall
void
(*bayoHeapSub_delete_static)(
	bayoHeapSub_t * heap
) = (void *)0x00C6BA30;

static
__thiscall
void
(*bayoHeapSub_freeAndDelete)(
	bayoHeapSub_t * heap,
	char flag
) = (void *)0x00C6BAB0;

static
__thiscall
bayoHeapSub_t *
(*bayoHeapSub_init)(
	bayoHeapSub_t * heap
) = (void *)0x00C6B980;

static
__thiscall
void *
(*bayoHeapVariable_allocBuffer)(
	bayoHeapVariable_t * heap,
	int size,
	uint alignment,
	int direction
) = (void *)0x00C6E7F0;

static
__thiscall
uint
(*bayoHeapVariable_bInited)(
	bayoHeapVariable_t * heap
) = (void *)0x00C6E750;

static
__thiscall
int
(*bayoHeapVariable_create)(
	bayoHeapVariable_t * heap,
	uint heapSize,
	bayoHeapPageAligned_t * allocHeap
) = (void *)0x00C6E540;

static
__thiscall
void *
(*bayoHeapVariable_createVirtualHeap)(
	bayoHeapVariable_t * heap,
	uint size
) = (void *)0x00C6E720;

static
__thiscall
void
(*bayoHeapVariable_deleteAndFree)(
	bayoHeapVariable_t * pbParm1,
	byte bParm2
) = (void *)0x00C6EA70;

static
__thiscall
void
(*bayoHeapVariable_delete_dynamic)(
	bayoHeapVariable_t * heap
) = (void *)0x00C6E7B0;

static
__thiscall
void
(*bayoHeapVariable_delete_static)(
	bayoHeapVariable_t * heap
) = (void *)0x00C6EA20;

static
__thiscall
bayoHeapVariableItem_t *
(*bayoHeapVariable_findMatchingMemBufferFromFirst)(
	bayoHeapVariable_t * heap,
	void * * pMemBuffer,
	int * newRemainingSize,
	uint size,
	uint alignment
) = (void *)0x00C6E5E0;

static
__thiscall
bayoHeapVariableItem_t *
(*bayoHeapVariable_findMatchingMemBufferFromLast)(
	bayoHeapVariable_t * heap,
	void * * pMemBuffer,
	int * newRmainaingSize,
	uint size,
	uint alignment
) = (void *)0x00C6E640;

static
__thiscall
void
(*bayoHeapVariable_free)(
	bayoHeapVariable_t * heap,
	void * buffer
) = (void *)0x00C6E8F0;

static
__thiscall
int
(*bayoHeapVariable_getAllocatableSize)(
	bayoHeapVariable_t * heap
) = (void *)0x00C6E9B0;

static
__thiscall
uint
(*bayoHeapVariable_getAllocatedSize)(
	bayoHeapVariable_t * heap
) = (void *)0x00C6E770;

static
__thiscall
void *
(*bayoHeapVariable_getNextBuffer)(
	bayoHeapVariable_t * heap,
	void * buffer
) = (void *)0x00C6E990;

static
__thiscall
uint
(*bayoHeapVariable_getTotalSize)(
	bayoHeapVariable_t * heap
) = (void *)0x00C6E760;

static
__thiscall
bayoHeapVariable_t *
(*bayoHeapVariable_init)(
	bayoHeapVariable_t * heap
) = (void *)0x00C6E520;

static
__thiscall
void
(*bayoHeapVariable_releaseVirtualHeap)(
	bayoHeapVariable_t * heap,
	void * virtualHeap,
	int flag
) = (void *)0x00C6E740;

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
	bayoHeapBase_t * heap,
	bayoHeapBase_t * nextHeap
) = (void *)0x00C57FE0;

static
__thiscall
void
(*bayoHitVector_copy)(
	bayoHitVector_t * puParm1,
	bayoHitVector_t * param_2
) = (void *)0x00C5C880;

static
__thiscall
bayoHitVector_t *
(*bayoHitVector_init)(
	bayoHitVector_t * uParm1
) = (void *)0x00C5C2D0;

static
__thiscall
uint
(*bayoIndexStramData_load)(
	bayoIndexStreamData_t * indexStream,
	ushort * pIndices,
	uint indexSize,
	uint numIndices
) = (void *)0x00C6F320;

static
__thiscall
UINT
(*bayoIndexStreamData_getIndexCount)(
	bayoIndexStreamData_t * indexStream
) = (void *)0x00C6F300;

static
__thiscall
UINT
(*bayoIndexStreamData_getOffset)(
	bayoIndexStreamData_t * indexStream
) = (void *)0x00C6F310;

static
__thiscall
bayoJobManagerItem_t *
(*bayoJobManagerItem_init)(
	bayoJobManagerItem_t * item
) = (void *)0x00C6C0D0;

static
__thiscall
int
(*bayoJobManager_create)(
	bayoJobManager_t * jobManager,
	int threadCount,
	int * jobIds,
	byte bLowPriority,
	bayoHeapPageAligned_t * heap,
	char * jobName
) = (void *)0x00C6BF50;

static
__thiscall
void
(*bayoJobManager_delete)(
	bayoJobManager_t * jobManager
) = (void *)0x00C6BCD0;

static
__thiscall
void
(*bayoJobManager_init)(
	bayoJobManager_t * pJobManager,
	int threadCount,
	int * jobIds
) = (void *)0x00C6BB10;

static
__thiscall
void
(*bayoMaterialEffect_delete)(
	bayoMaterialEffect_t * puParm1
) = (void *)0x00D52680;

static
__thiscall
bayoMaterialEffect_t *
(*bayoMaterialEffect_deleteAndFree)(
	bayoMaterialEffect_t * pbParm1,
	byte param_2
) = (void *)0x00D53740;

static
__thiscall
void
(*bayoMaterialEffect_delete_dynamic)(
	bayoMaterialEffect_t * pbParm1
) = (void *)0x00D52690;

static
__thiscall
bayoMaterialEffect_t *
(*bayoMaterialEffect_init)(
	bayoMaterialEffect_t * puParm1
) = (void *)0x00D52F10;

static
__thiscall
int
(*bayoMaterialEffect_loadShadersFromPath)(
	bayoMaterialEffect_t * effect,
	char * vertexShaderPath,
	char * pixelShaderPath
) = (void *)0x00D526C0;

static
__thiscall
int
(*bayoMaterialEffect_setBaseVertexIndex)(
	bayoMaterialEffect_t * effect,
	INT baseVertexIndex
) = (void *)0x00C5FCB0;

static
__thiscall
void
(*bayoMaterialEffect_setDefaultSamplers)(
	bayoMaterialEffect_t * effect,
	int * defaultSamplers
) = (void *)0x00D527E0;

static
__thiscall
int
(*bayoMaterialEffect_setEffectParameters)(
	bayoMaterialEffect_t * effect,
	char * vertexShaderName,
	char * pixelShaderName,
	int * intEntries,
	int * intEntries2,
	int * defaultSamplers,
	UINT * pRegisters,
	UINT * pVectorCounts,
	int * samplerParameters,
	undefined4 param_10,
	undefined4 param_11
) = (void *)0x00D536C0;

static
__thiscall
void
(*bayoMaterialEffect_setIntEntries)(
	bayoMaterialEffect_t * effect,
	int * entries
) = (void *)0x00D526E0;

static
__thiscall
void
(*bayoMaterialEffect_setIntEntries2)(
	bayoMaterialEffect_t * effect,
	int * entries
) = (void *)0x00D52770;

static
__thiscall
void
(*bayoMaterialEffect_setSamplerParameters)(
	bayoMaterialEffect_t * effect,
	int * samplerParameters
) = (void *)0x00D52F80;

static
__thiscall
int
(*bayoMaterialEffect_setVertexBounds)(
	bayoMaterialEffect_t * iParm1,
	UINT vertexLimit,
	UINT firstVertexIndex
) = (void *)0x00C5FC90;

static
__thiscall
int
(*bayoMaterialEffect_setVertexSahderConstants)(
	bayoMaterialEffect_t * effect,
	matrix4x4_t * pMatrices,
	uint matrixCount
) = (void *)0x00D53050;

static
__thiscall
int
(*bayoMaterial_ModelShaderPls00_BXNXX_load)(
	bayoMaterial_t * piParm1
) = (void *)0x00D5FE10;

static
__thiscall
uint
(*bayoMaterial_ModelShaderPls00_BXNXX_loadFromPath)(
	bayoMaterial_t * iParm1
) = (void *)0x00D5FDF0;

static
__thiscall
void
(*bayoMaterial_ModelShaderPls00_BXNXX_loadSpecifiedEffect)(
	bayoMaterial_t * material,
	uint effectIndex,
	char * vertexShaderName,
	char * pixelShaderName
) = (void *)0x00D5FE90;

static
__thiscall
void
(*bayoMaterial_ModelShaderPls00_BXNXX_reset)(
	bayoMaterial_t * material
) = (void *)0x00D5FBE0;

static
__thiscall
void
(*bayoMaterial_ModelShaderPls00_BXNXX_setPixelShaderConstants)(
	bayoMaterial_t * material,
	float * constants
) = (void *)0x00D5FC30;

static
__thiscall
void
(*bayoMaterial_apply)(
	bayoMaterial_t * material,
	uint param_2
) = (void *)0x00D6EB20;

static
__thiscall
void
(*bayoMaterial_delete)(
	bayoMaterial_t * param_1
) = (void *)0x00D62140;

static
__thiscall
void
(*bayoMaterial_setActiveEffect)(
	bayoMaterial_t * material,
	uint param_2
) = (void *)0x00D61990;

static
__thiscall
bayoMeshGeometryTable_t *
(*bayoMeshGeometryTable_init)(
	bayoMeshGeometryTable_t * table
) = (void *)0x0042D060;

static
__thiscall
void
(*bayoMeshSelector_init)(
	bayoMeshSelector_t * iParm1
) = (void *)0x004A1D20;

static
__thiscall
void
(*bayoMeshSelector_setDefault)(
	bayoMeshSelector_t * meshSelector,
	int version
) = (void *)0x004A1DD0;

static
__thiscall
void
(*bayoMeshSelector_setVersion)(
	bayoMeshSelector_t * meshSelector,
	bayoActor_t * actor,
	uint meshVersion,
	uint meshNumber
) = (void *)0x004A1D80;

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
bayoMesh_t *
(*bayoMesh_getNextMesh)(
	bayoMesh_t * iParm1
) = (void *)0x0049FBB0;

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
(*bayoMesh_setField0x7c)(
	bayoMesh_t * iParm1,
	int value
) = (void *)0x0049FF50;

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
void
(*bayoMesh_setUnknownSubstructFields0x64And0x68)(
	bayoMesh_t * iParm1,
	float param_2,
	float param_3
) = (void *)0x0049FE60;

static
__thiscall
int
(*bayoMesh_setupBatchMaterials)(
	bayoMesh_t * mesh,
	bayoSamplers_t * meshSamplers
) = (void *)0x004A08C0;

static
__thiscall
bayoMotionInfosSubstruct_t *
(*bayoMotionInfosSubstruct_init)(
	bayoMotionInfosSubstruct_t * puParm1
) = (void *)0x00594110;

static
__thiscall
void
(*bayoMotionInfosSubstruct_initIfNeeded)(
	bayoMotionInfosSubstruct_t * pbParm1
) = (void *)0x00594C20;

static
__thiscall
void
(*bayoMotionInfos_addBaseToRootBoneTransform)(
	bayoMotionInfos_t * motInfos,
	float translateRatio,
	float rotateRatio
) = (void *)0x004AA370;

static
__thiscall
int
(*bayoMotionInfos_allocate)(
	bayoMotionInfos_t * pbParm1
) = (void *)0x004AAFD0;

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
(*bayoMotionInfos_delete)(
	bayoMotionInfos_t * iParm1
) = (void *)0x004AE830;

static
__thiscall
void
(*bayoMotionInfos_deleteCachedKeys)(
	bayoMotionInfos_t * iParm1
) = (void *)0x004AD710;

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
int
(*bayoMotionInfos_init)(
	bayoMotionInfos_t * iParm1
) = (void *)0x004BE8E0;

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
void
(*bayoMotionInfos_reset)(
	bayoMotionInfos_t * pbParm1
) = (void *)0x004AAF80;

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
(*bayoObjectHeap_allocateObject)(
	bayoObjectHeap_t * objectHeap,
	uint obectId
) = (void *)0x004BE7C0;

static
__thiscall
bayoActorGarment_t *
(*bayoObjectHeap_bayoActorGarment_init)(
	bayoObjectHeap_t * objectHeap
) = (void *)0x004C18B0;

static
__thiscall
void
(*bayoObjectHeap_cleanup)(
	bayoObjectHeap_t * objectHeap
) = (void *)0x00587BA0;

static
__thiscall
void
(*bayoObjectHeap_delete)(
	bayoObjectHeap_t * objectHeap
) = (void *)0x004BE810;

static
__thiscall
bayoObjectHeap_t *
(*bayoObjectHeap_init)(
	bayoObjectHeap_t * objectHeap
) = (void *)0x004BE870;

static
__thiscall
void *
(*bayoObject_cleanup)(
	bayoObject_t * object
) = (void *)0x00C5BCA0;

static
__thiscall
int
(*bayoOcclusionQuery_init)(
	bayoOcclusionQuery_t * param_1
) = (void *)0x00C6CFC0;

static
__thiscall
uint
(*bayoOption_getBool)(
	int iParm1,
	uint param_2
) = (void *)0x00520A50;

static
__thiscall
undefined4 *
(*bayoPlayerModelBase_init)(
	bayoPlayerModelBase_t * puParm1
) = (void *)0x00432D30;

static
__thiscall
void
(*bayoPlayerModel_delete)(
	bayoPlayerModel_t * pbParm1
) = (void *)0x004CE640;

static
__thiscall
bayoPlayerModel_t *
(*bayoPlayerModel_deleteAndFree)(
	bayoPlayerModel_t * pbParm1,
	byte bParm2
) = (void *)0x004CFEB0;

static
__thiscall
bayoPlayerModel_t *
(*bayoPlayerModel_init)(
	bayoPlayerModel_t * pbParm1
) = (void *)0x004CE5B0;

static
__thiscall
int
(*bayoPlayerModel_load)(
	bayoPlayerModel_t * pPlayer,
	int modelNumber
) = (void *)0x008C60D0;

static
__thiscall
void
(*bayoPlayerModel_setSelectorsAndFlags)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C5FA0;

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
(*bayoSamplersTex_delete)(
	bayoSamplersTex_t * puParm1
) = (void *)0x00C66390;

static
__thiscall
void
(*bayoSamplersTex_init)(
	bayoSamplersTex_t * samplersTex
) = (void *)0x00C66360;

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
int
(*bayoSamplers_loadWTBDynamic)(
	bayoSamplers_t * samplers,
	void * wtbHandle
) = (void *)0x00C5BC20;

static
__thiscall
int
(*bayoSamplers_loadWTBStatic)(
	bayoSamplers_t * samplers,
	void * wtbHandle
) = (void *)0x00C5BBE0;

static
__thiscall
bayoCamera_t *
(*bayoScene_getCamera)(
	bayoScene_t * scene
) = (void *)0x00AAA2C0;

static
__thiscall
int
(*bayoSemaphore_create)(
	bayoSemaphore_t * semaphore,
	uint initialCount,
	uint maximumCount
) = (void *)0x00C7B290;

static
__thiscall
void
(*bayoSemaphore_delete)(
	bayoSemaphore_t * semaphore
) = (void *)0x00C7B2D0;

static
__thiscall
void
(*bayoSemaphore_delete2)(
	bayoSemaphore_t * semaphore
) = (void *)0x00C7B310;

static
__thiscall
void
(*bayoSemaphore_release)(
	bayoSemaphore_t * semaphore
) = (void *)0x00C7B300;

static
__thiscall
void
(*bayoSemaphore_waitForSingleObject)(
	bayoSemaphore_t * semaphore
) = (void *)0x00C7B2F0;

static
__thiscall
bayoSeq_t *
(*bayoSeqStruct_init)(
	bayoSeq_t * puParm1
) = (void *)0x004BC270;

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
void
(*bayoShaders_init)(
	bayoDat_t * shaders,
	void * shaderFile
) = (void *)0x00C5B320;

static
__thiscall
void
(*bayoSteamCallbacks_delete)(
	bayoSteamCallbacks_t * steamCallbacks
) = (void *)0x00C80070;

static
__thiscall
undefined4 *
(*bayoSteamCallbacks_init)(
	bayoSteamCallbacks_t * puParm1
) = (void *)0x00C80230;

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
__cdecl
void *
(*bayoThread_create)(
	bayoThread_t * pBayoThread,
	uint stackSize,
	int priority,
	int jobID,
	char * threadName
) = (void *)0x00C633C0;

static
__thiscall
void
(*bayoUndefConf_init)(
	bayoUndefConf_t * conf
) = (void *)0x005029A0;

static
__thiscall
void
(*bayoUndefConf_setCameraSpeed)(
	bayoUndefConf_t * conf,
	int param_2
) = (void *)0x00501900;

static
__thiscall
void
(*bayoUndefConf_setDifficulty)(
	bayoUndefConf_t * conf,
	int difficulty
) = (void *)0x005018C0;

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
__cdecl
void
(*bayoUnknownDataIndexStruct_init)(
	bayoUnknownDataIndexStruct * param_1
) = (void *)0x00C71DF0;

static
__thiscall
bayoUnknownFloatList_t *
(*bayoUnknownFloatList_init)(
	bayoUnknownFloatList_t * puParm1
) = (void *)0x004BBBB0;

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
vector4_t *
(*bayoVector4_set)(
	vector4_t * puParm1,
	float param_2,
	float param_3,
	float param_4,
	float param_5
) = (void *)0x00C5C6D0;

static
__thiscall
void
(*bayoVertexBuffer_Init2)(
	bayoVertexBuffer_t * vertexBuffer
) = (void *)0x00C6F1A0;

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
uint
(*bayoVertexDeclaration1_create)(
	bayoVertexDeclarationBase_t * iParm1
) = (void *)0x00C68490;

static
__thiscall
uint
(*bayoVertexDeclaration2_create)(
	bayoVertexDeclarationBase_t * iParm1
) = (void *)0x00C684C0;

static
__thiscall
uint
(*bayoVertexDeclaration3_create)(
	bayoVertexDeclarationBase_t * iParm1
) = (void *)0x00C684F0;

static
__thiscall
uint
(*bayoVertexDeclaration4_create)(
	bayoVertexDeclarationBase_t * iParm1
) = (void *)0x00C68520;

static
__thiscall
uint
(*bayoVertexDeclaration5_create)(
	bayoVertexDeclarationBase_t * iParm1
) = (void *)0x00C68550;

static
__thiscall
uint
(*bayoVertexDeclaration6_create)(
	bayoVertexDeclarationBase_t * iParm1
) = (void *)0x00C68580;

static
__thiscall
uint
(*bayoVertexDeclaration7_create)(
	bayoVertexDeclarationBase_t * iParm1
) = (void *)0x00C685B0;

static
__thiscall
uint
(*bayoVertexDeclaration8_create)(
	bayoVertexDeclarationBase_t * iParm1
) = (void *)0x00C685E0;

static
__thiscall
uint
(*bayoVertexDeclaration9_create)(
	bayoVertexDeclarationBase_t * iParm1
) = (void *)0x00C68610;

static
__thiscall
int
(*bayoVertexDeclarationBase_create)(
	bayoVertexDeclarationBase_t * vertexDeclaration,
	D3DVERTEXELEMENT9 * vertexElements
) = (void *)0x00C68450;

static
__thiscall
void
(*bayoVertexDeclarationBase_delete)(
	bayoVertexDeclarationBase_t * puParm1
) = (void *)0x00C68640;

static
__thiscall
bayoVertexDeclarationBase_t *
(*bayoVertexDeclarationBase_init)(
	bayoVertexDeclarationBase_t * puParm1
) = (void *)0x00C68440;

static
__thiscall
void
(*bayoVertexDeclarationBase_release)(
	bayoVertexDeclarationBase_t * iParm1
) = (void *)0x00C68670;

static
__thiscall
int
(*bayoVertexDeclarations_create)(
	bayoVertexDeclarations_t * vertexDeclarations
) = (void *)0x00D4EB00;

static
__thiscall
void
(*bayoVertexDeclarations_delete)(
	bayoVertexDeclarations_t * vertexDeclarations
) = (void *)0x00D4F7D0;

static
__thiscall
undefined4
(*bayoVertexDeclarations_getDeclaration)(
	bayoVertexDeclarations_t * vertexDeclarations,
	int reverseIndex,
	int flag
) = (void *)0x00D4F290;

static
__thiscall
bayoVertexDeclarations_t *
(*bayoVertexDeclarations_init)(
	bayoVertexDeclarations_t * puParm1
) = (void *)0x00D4F430;

static
__thiscall
void
(*bayoVertexDeclarations_releaseDeclarations)(
	bayoVertexDeclarations_t * vertexDeclarations
) = (void *)0x00D4F0A0;

static
__thiscall
uint
(*bayoVertexStreamData_allocNormals)(
	bayoVertexStreamData_t * vertexStream,
	void * pSource,
	uint structSize,
	uint numVertices,
	void * allocator
) = (void *)0x00C5F920;

static
__thiscall
uint
(*bayoVertexStreamData_bInited)(
	bayoVertexStreamData_t * piParm1
) = (void *)0x00C5F8C0;

static
__thiscall
uint
(*bayoVertexStreamData_getVertexCount)(
	bayoVertexStreamData_t * streamData
) = (void *)0x00C5F8D0;

static
__thiscall
int
(*bayoVertexStreamData_load)(
	bayoVertexStreamData_t * vertexStream,
	float * pVertexData,
	uint structSize,
	uint numVertices
) = (void *)0x00C5F8F0;

static
__thiscall
int
(*bayoVextexDeclaration0x0_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4E9D0;

static
__thiscall
int
(*bayoVextexDeclaration0x10_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EAB0;

static
__thiscall
int
(*bayoVextexDeclaration0x11_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EAC0;

static
__thiscall
int
(*bayoVextexDeclaration0x12_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EAD0;

static
__thiscall
int
(*bayoVextexDeclaration0x13_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EAE0;

static
__thiscall
int
(*bayoVextexDeclaration0x14_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EAF0;

static
__thiscall
int
(*bayoVextexDeclaration0x15_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4E9C0;

static
__thiscall
int
(*bayoVextexDeclaration0x16_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4E9A0;

static
__thiscall
int
(*bayoVextexDeclaration0x17_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4E9B0;

static
__thiscall
int
(*bayoVextexDeclaration0x18_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F300;

static
__thiscall
int
(*bayoVextexDeclaration0x19_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F310;

static
__thiscall
int
(*bayoVextexDeclaration0x1_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4E9F0;

static
__thiscall
int
(*bayoVextexDeclaration0x1a_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F320;

static
__thiscall
int
(*bayoVextexDeclaration0x1b_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F2B0;

static
__thiscall
int
(*bayoVextexDeclaration0x1c_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F330;

static
__thiscall
int
(*bayoVextexDeclaration0x1d_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F2C0;

static
__thiscall
int
(*bayoVextexDeclaration0x1e_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F340;

static
__thiscall
int
(*bayoVextexDeclaration0x1f_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F350;

static
__thiscall
int
(*bayoVextexDeclaration0x20_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F360;

static
__thiscall
int
(*bayoVextexDeclaration0x21_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F370;

static
__thiscall
int
(*bayoVextexDeclaration0x22_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F380;

static
__thiscall
int
(*bayoVextexDeclaration0x23_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F390;

static
__thiscall
int
(*bayoVextexDeclaration0x24_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F3A0;

static
__thiscall
int
(*bayoVextexDeclaration0x25_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F3B0;

static
__thiscall
int
(*bayoVextexDeclaration0x26_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F3C0;

static
__thiscall
int
(*bayoVextexDeclaration0x27_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F3D0;

static
__thiscall
int
(*bayoVextexDeclaration0x28_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F3E0;

static
__thiscall
int
(*bayoVextexDeclaration0x29_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F3F0;

static
__thiscall
int
(*bayoVextexDeclaration0x2_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4E9E0;

static
__thiscall
int
(*bayoVextexDeclaration0x2a_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F400;

static
__thiscall
int
(*bayoVextexDeclaration0x2b_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F410;

static
__thiscall
int
(*bayoVextexDeclaration0x2c_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F420;

static
__thiscall
int
(*bayoVextexDeclaration0x2d_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F2F0;

static
__thiscall
int
(*bayoVextexDeclaration0x2e_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F2D0;

static
__thiscall
int
(*bayoVextexDeclaration0x2f_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4F2E0;

static
__thiscall
int
(*bayoVextexDeclaration0x3_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4E980;

static
__thiscall
int
(*bayoVextexDeclaration0x4_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EA00;

static
__thiscall
int
(*bayoVextexDeclaration0x5_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4E990;

static
__thiscall
int
(*bayoVextexDeclaration0x6_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EA10;

static
__thiscall
int
(*bayoVextexDeclaration0x7_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EA20;

static
__thiscall
int
(*bayoVextexDeclaration0x8_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EA30;

static
__thiscall
int
(*bayoVextexDeclaration0x9_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EA40;

static
__thiscall
int
(*bayoVextexDeclaration0xa_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EA50;

static
__thiscall
int
(*bayoVextexDeclaration0xb_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EA60;

static
__thiscall
int
(*bayoVextexDeclaration0xc_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EA70;

static
__thiscall
int
(*bayoVextexDeclaration0xd_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EA80;

static
__thiscall
int
(*bayoVextexDeclaration0xe_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EAA0;

static
__thiscall
int
(*bayoVextexDeclaration0xf_create)(
	bayoVertexDeclarationBase_t * pbParm1
) = (void *)0x00D4EA90;

static
__thiscall
int
(*bayoWmb_allocNormalsWithCritical)(
	bayoWmb_t * wmb,
	bayoVertexStreamData_t * vertexStream,
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
void *
(*bayoWmb_getHandle)(
	bayoWmb_t * wmb
) = (void *)0x004A6FA0;

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
	bayoWmb_t * pWmb
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
void
(*bayo_OTGManager_reset)(
void) = (void *)0x004E2C60;

static
__cdecl
void
(*bayo_addAssetFileNameToRegister)(
	char * path
) = (void *)0x00C7A0F0;

static
__cdecl
undefined
(*bayo_addAssetToList)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C79F90;

static
__cdecl
void
(*bayo_addEulerAngleAndClamp)(
	vector4_t * param_1,
	vector4_t * param_2,
	vector4_t * param_3
) = (void *)0x00C6B010;

static
__cdecl
void *
(*bayo_allocAligned)(
	uint size,
	bayoHeapBase_t * pBayoHeap
) = (void *)0x00C53BF0;

static
__cdecl
void *
(*bayo_allocAligned2)(
	uint size,
	bayoHeapBase_t * pHeap
) = (void *)0x00C53BB0;

static
__cdecl
bayoTex_t *
(*bayo_allocInitBayoTextures)(
	int numTextures
) = (void *)0x00C6DED0;

static
__stdcall
int
(*bayo_alloc_05bea8e0_structs)(
	uint structCount,
	bayoHeapBase_t * heap
) = (void *)0x00C7BDA0;

static
__cdecl
D3DDISPLAYMODE *
(*bayo_allocateDisplayModeArray)(
	uint displayModeCount
) = (void *)0x00C55530;

static
__cdecl
int
(*bayo_allocate_struct_05a7af18)(
	struct_05a7af18_t * pStru,
	int count1
) = (void *)0x004E2AA0;

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
(*bayo_bDeviceNeedsReset)(
void) = (void *)0x00C549F0;

static
__stdcall
uint
(*bayo_bNotFullscreen)(
void) = (void *)0x00C569C0;

static
__stdcall
void
(*bayo_bayoCriticalSection_t_05bea908_init)(
void) = (void *)0x00C7C2B0;

static
__cdecl
int
(*bayo_beginScene)(
void) = (void *)0x00C5EF40;

static
__cdecl
void
(*bayo_callDrawPrimitive)(
void) = (void *)0x00C5DAA0;

static
__cdecl
void
(*bayo_charWcharTextStruct_Init)(
	void * param_1
) = (void *)0x00C71D90;

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
__cdecl
void
(*bayo_clearStreams)(
void) = (void *)0x00C5DEF0;

static
__cdecl
char
(*bayo_compareDisplayModes)(
	D3DDISPLAYMODE * nextDisplayMode,
	D3DDISPLAYMODE * displayMode
) = (void *)0x00C53D60;

static
__cdecl
float
(*bayo_computeDistance)(
	vector3_t * param_1,
	vector3_t * param_2
) = (void *)0x00C691F0;

static
__cdecl
void
(*bayo_computeInverseMatrix)(
	matrix4x4_t * param_1,
	matrix4x4_t * param_2
) = (void *)0x00C64D80;

static
__cdecl
float
(*bayo_computeSquaredDistance)(
	vector3_t * param_1,
	vector3_t * param_2
) = (void *)0x00C690B0;

static
__stdcall
uint
(*bayo_computeTextID)(
	uint param_1,
	uint param_2,
	uint param_3
) = (void *)0x00C7E540;

static
__thiscall
void
(*bayo_copyPointer)(
	undefined4 * puParm1,
	undefined4 param_2
) = (void *)0x00C5B350;

static
__cdecl
int
(*bayo_createAssetHandle)(
	void * datHandle,
	uint datSize,
	char * datName
) = (void *)0x00C5F550;

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
__cdecl
int
(*bayo_createThread)(
	void * threadCode,
	bayoJobManagerItem_t * jobItem,
	uint stackSize,
	int priority,
	int jobId,
	char * threadName
) = (void *)0x00C634E0;

static
__cdecl
void *
(*bayo_criAllocFromBayoHeap)(
	void * param_1,
	uint size
) = (void *)0x00C74B10;

static
__cdecl
void
(*bayo_criAllocator_00f49510_init)(
	__cdecl void * (*)(bayoCriAllocator_t * allocator, uint ),
	__cdecl void (*)(bayoCriAllocator_t * allocator, void * memory),
	int flag
) = (void *)0x00CDA090;

static
__cdecl
void
(*bayo_criFreeFromBayoHeap)(
	void * param_1,
	void * memory
) = (void *)0x00C74A60;

static
__cdecl
int
(*bayo_criLoaderGetState)(
	void * criLoaderHandle,
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00CD0E38;

static
__cdecl
int
(*bayo_criManaLibrary_init)(
	bayoHeapSub_t * heap
) = (void *)0x00C6CE80;

static
__cdecl
void
(*bayo_criRegisterAlloc)(
	__cdecl void * (*)(bayoCriAllocator_t * allocator, uint ),
	void * data
) = (void *)0x00CD02EB;

static
__cdecl
void
(*bayo_criRegisterFree)(
	__cdecl void (*)(bayoCriAllocator_t * allocator, void * memory),
	void * data
) = (void *)0x00CD0319;

static
__cdecl
int
(*bayo_criSetupAssetLoading)(
	void * criLoaderHandle,
	void * criFilesHandle,
	char * path,
	int param_4,
	int param_5,
	uint size,
	int param_7,
	void * buffer,
	uint buffSize,
	int param_10
) = (void *)0x00CD1C7B;

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
int
(*bayo_deinitStructArray)(
	void * pArray,
	uint structSize,
	int structNumber,
	__thiscall void (*)(void * )
) = (void *)0x00401000;

static
__cdecl
void
(*bayo_deleteAssetPool)(
void) = (void *)0x00C5F5A0;

static
__stdcall
void
(*bayo_deleteOcclusionQueries)(
void) = (void *)0x00C6D090;

static
__cdecl
void
(*bayo_deleteThread)(
	int rank
) = (void *)0x00C62ED0;

static
__stdcall
void
(*bayo_delete_05bcd6b0)(
void) = (void *)0x00D99550;

static
__cdecl
void
(*bayo_destroyStartupScreen)(
void) = (void *)0x00C7B730;

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
int
(*bayo_drawIndexedPrimitive)(
void) = (void *)0x00C5DAF0;

static
__stdcall
uint
(*bayo_drawPrimitive)(
void) = (void *)0x00C5DAB0;

static
__cdecl
void
(*bayo_effect_00da50ac_deinitializer)(
void) = (void *)0x00D96460;

static
__cdecl
void
(*bayo_effect_00da50ac_initializer)(
void) = (void *)0x00D7B3B0;

static
__thiscall
int
(*bayo_effect_00da50ac_load)(
	bayoEffect_00da50ac_t * pbParm1
) = (void *)0x00442E60;

static
__cdecl
void
(*bayo_effect_00da518c_deinitializer)(
void) = (void *)0x00D964C0;

static
__cdecl
void
(*bayo_effect_00da518c_initializer)(
void) = (void *)0x00D7B420;

static
__cdecl
void
(*bayo_effect_00da51f8_deinitializer)(
void) = (void *)0x00D965A0;

static
__cdecl
void
(*bayo_effect_00da51f8_initializer)(
void) = (void *)0x00D7B560;

static
__cdecl
void
(*bayo_effect_00da5778_deinitializer)(
void) = (void *)0x00D96500;

static
__cdecl
void
(*bayo_effect_00da5778_initializer)(
void) = (void *)0x00D7B470;

static
__cdecl
void
(*bayo_effect_00da5784_deinitializer)(
void) = (void *)0x00D96510;

static
__cdecl
void
(*bayo_effect_00da5784_initializer)(
void) = (void *)0x00D7B4D0;

static
__stdcall
void
(*bayo_effect_00eac430_deinitializer)(
void) = (void *)0x00D993A0;

static
__stdcall
void
(*bayo_effect_00eac430_initializer)(
void) = (void *)0x00D932A0;

static
__stdcall
void
(*bayo_effect_00eac444_deinitializer)(
void) = (void *)0x00D99390;

static
__cdecl
void
(*bayo_effect_00eac444_initalizer)(
void) = (void *)0x00D93280;

static
__stdcall
void
(*bayo_effect_00eac450_deinitializer)(
void) = (void *)0x00D99370;

static
__cdecl
void
(*bayo_effect_00eac450_initializer)(
void) = (void *)0x00D93240;

static
__cdecl
void
(*bayo_effect_00eac598__deinitialize)(
void) = (void *)0x00D99380;

static
__stdcall
void
(*bayo_effect_00eac598_initialize)(
void) = (void *)0x00D93260;

static
__cdecl
void
(*bayo_effect_00ed212c_deinitializer)(
void) = (void *)0x00D99A40;

static
__cdecl
void
(*bayo_effect_00ed212c_initializer)(
void) = (void *)0x00D93A30;

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
void
(*bayo_freeBones)(
	bayoBone_t * param_1
) = (void *)0x004A7CA0;

static
__cdecl
void *
(*bayo_freeObject)(
	void * pBayoObject
) = (void *)0x00C58200;

static
__cdecl
int
(*bayo_getActiveLanguage)(
void) = (void *)0x00C57520;

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
int
(*bayo_getAssetBuffer)(
	void * * resultBuffer,
	char * path,
	bayoHeapSub_t * heap,
	uint size,
	int param_5
) = (void *)0x00C61B80;

static
__cdecl
bayoHeapSub_t *
(*bayo_getAssetBufferHeap)(
void) = (void *)0x00C58770;

static
__cdecl
void *
(*bayo_getAssetHandle)(
	char * path
) = (void *)0x00C5F5E0;

static
__stdcall
int *
(*bayo_getChapterEventInfo)(
	int chapterId,
	int eventId
) = (void *)0x004E6820;

static
__stdcall
bayoCpkCriDirectoryEntry_t *
(*bayo_getCpkEntryForFile)(
	char * path
) = (void *)0x00C74830;

static
__cdecl
void
(*bayo_getCriLoaderHandle)(
	void * * param_1
) = (void *)0x00CD200D;

static
__stdcall
uint
(*bayo_getDisplayModes)(
	bayoDisplayModes_t * displayModes
) = (void *)0x00C54D40;

static
__cdecl
LPCSTR
(*bayo_getFXFile)(
	char * fileName
) = (void *)0x0045AB70;

static
__cdecl
uint
(*bayo_getFXFileSize)(
	char * param_1
) = (void *)0x0045ABD0;

static
__cdecl
int
(*bayo_getFileSize)(
	char * path
) = (void *)0x00C74A00;

static
__cdecl
bayoIndexBufferCacheItem_t *
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
void
(*bayo_getKeyNAme)(
	int keyCode,
	char * pName
) = (void *)0x00C75F00;

static
__cdecl
bayoMaterial_t *
(*bayo_getMaterialFuncs)(
	wmbMaterial_t * material
) = (void *)0x00D4E140;

static
__cdecl
int
(*bayo_getMaterialProperty7)(
	bayoMaterial_t * a1
) = (void *)0x00D4E540;

static
__cdecl
int
(*bayo_getModelName)(
	char * charBuff,
	int charBuffLength,
	int modelNumber
) = (void *)0x004DBEA0;

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
char *
(*bayo_getPathDataDirPlus)(
void) = (void *)0x00C612C0;

static
__cdecl
float
(*bayo_getPerformanceRate)(
void) = (void *)0x00C78100;

static
__stdcall
void
(*bayo_getRealFileName)(
	char * pRealPathBuff,
	uint buffSize,
	char * path
) = (void *)0x00C61510;

static
__cdecl
int
(*bayo_getStartupScreenImagePath)(
	char * pathBuff,
	uint pathBuffSize,
	uint imageNumber
) = (void *)0x00C7B460;

static
__cdecl
int
(*bayo_getSteamAppsLanguage)(
void) = (void *)0x00C577F0;

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
	bayoVertexStreamData_t * vertexStream,
	void * pSource,
	uint structSize,
	uint numVertices,
	void * allocator
) = (void *)0x00C79390;

static
__cdecl
void *
(*bayo_getWindowHandle)(
void) = (void *)0x00C565F0;

static
__stdcall
uint
(*bayo_getWindowHeight)(
void) = (void *)0x00C56700;

static
__cdecl
HINSTANCE
(*bayo_getWindowInstanceHandle)(
void) = (void *)0x00C565E0;

static
__cdecl
uint
(*bayo_getWindowWidth)(
void) = (void *)0x00C566F0;

static
__cdecl
uint
(*bayo_graphicMemoryUsageDec)(
	uint size
) = (void *)0x00C5DE50;

static
__cdecl
uint
(*bayo_graphicMemoryUsageInc)(
	uint size
) = (void *)0x00C5DE60;

static
__stdcall
int
(*bayo_init)(
void) = (void *)0x0049D700;

static
__cdecl
int
(*bayo_initChapterDataText)(
void) = (void *)0x00C18A40;

static
__cdecl
int
(*bayo_initContinueDataText)(
void) = (void *)0x00C194E0;

static
__cdecl
undefined4
(*bayo_initControls)(
void) = (void *)0x0048FA50;

static
__cdecl
int
(*bayo_initCriRelatedStructs)(
void) = (void *)0x00C7A300;

static
__cdecl
int
(*bayo_initCriVideo)(
	uint structCount,
	bayoHeapSub_t * heap
) = (void *)0x00C70360;

static
__cdecl
undefined4
(*bayo_initD3DQueries)(
void) = (void *)0x00C54A20;

static
__cdecl
int
(*bayo_initDirect3D9)(
	bayoHeapSub_t * heap1,
	bayoHeapSub_t * heap2
) = (void *)0x00C55360;

static
__cdecl
undefined4
(*bayo_initDisplayModeX8R8G8B8)(
void) = (void *)0x00C54010;

static
__cdecl
int
(*bayo_initDoubleBuffers)(
void) = (void *)0x004F93F0;

static
__cdecl
uint
(*bayo_initFileSystem)(
	char * dataDirPath
) = (void *)0x0042E310;

static
__cdecl
int
(*bayo_initKeyboard)(
void) = (void *)0x00C761C0;

static
__cdecl
int
(*bayo_initKeyboardWrapper)(
void) = (void *)0x00C76360;

static
__cdecl
void
(*bayo_initMotionTable)(
void) = (void *)0x00D8B250;

static
__cdecl
int
(*bayo_initMouse)(
void) = (void *)0x00C75800;

static
__cdecl
uint
(*bayo_initMouseWrapper)(
void) = (void *)0x00C758B0;

static
__cdecl
int
(*bayo_initShaders)(
void) = (void *)0x0045B520;

static
__cdecl
void
(*bayo_initStructArray)(
	void * pArray,
	uint structSize,
	uint numStructs,
	__thiscall void (*)(void * )
) = (void *)0x00401030;

static
__cdecl
int
(*bayo_initSystemDataText)(
void) = (void *)0x00C1BE90;

static
__cdecl
undefined
(*bayo_initThreadEnv)(
	uint numThreads
) = (void *)0x00C62B00;

static
__cdecl
int
(*bayo_isMatPls05_BXNXB)(
	bayoMaterial_t * param_1
) = (void *)0x00D4E2D0;

static
__cdecl
int
(*bayo_isMaterialPls05_BXNXXorPls05_BXNXB)(
	bayoMaterial_t * param_1
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
void
(*bayo_jobThreadCode)(
	bayoJobManagerItem_t * jobManagerItem
) = (void *)0x00C6BEB0;

static
__cdecl
int
(*bayo_launchStartupScreen)(
	char * path,
	char * fileExtension
) = (void *)0x00C7BC10;

static
__cdecl
int
(*bayo_launchStartupWindowThread)(
void) = (void *)0x00C7BBD0;

static
__cdecl
int
(*bayo_loadAsset)(
	void * * resultBuffer,
	int * loadedSize,
	char * path,
	bayoHeapSub_t * heap,
	uint alignment,
	int param_6
) = (void *)0x00C61830;

static
__cdecl
int
(*bayo_loadCpkFile)(
	char * fileName,
	uint size
) = (void *)0x00C748A0;

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
void
(*bayo_loadExtraCloth)(
	clpHeader_t * clpHeader,
	bayoExtraCloth_t * extraCloth
) = (void *)0x00420FD0;

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
__stdcall
int
(*bayo_loadStartupScreenImage)(
	char * imagePath
) = (void *)0x00C7B790;

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
	bayoSamplers_t * samplers,
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
	bayoPlayerModel_t * playerModel
) = (void *)0x008C6680;

static
__thiscall
int
(*bayo_load_pl0011_pl0011)(
	bayoActorGarment_t * actor
) = (void *)0x009F5160;

static
__thiscall
int
(*bayo_load_pl0013_pl0013)(
	bayoActorGarment_t * actor
) = (void *)0x009F7CE0;

static
__thiscall
int
(*bayo_load_pl001a_pl0031)(
	bayoActorGarment_t * actor
) = (void *)0x009FA9F0;

static
__thiscall
int
(*bayo_load_pl0020_pl0020)(
	bayoPlayerModel_t * pbParm1
) = (void *)0x008C6A40;

static
__thiscall
int
(*bayo_load_pl0023_pl0023)(
	bayoPlayerModel_t * pbParm1
) = (void *)0x008C6CC0;

static
__thiscall
int
(*bayo_load_pl0025_pl0025)(
	bayoPlayerModel_t * param_1
) = (void *)0x008C6E60;

static
__thiscall
int
(*bayo_load_pl0026_pl0026)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C7140;

static
__thiscall
int
(*bayo_load_pl0027_pl0027)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C7420;

static
__thiscall
int
(*bayo_load_pl002a_pl002a)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C7700;

static
__thiscall
int
(*bayo_load_pl002c_pl002c)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C7A50;

static
__thiscall
int
(*bayo_load_pl002d_pl002d)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C7DA0;

static
__thiscall
int
(*bayo_load_pl002e_pl002e)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C8080;

static
__thiscall
int
(*bayo_load_pl002f_pl002f)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C8360;

static
__thiscall
int
(*bayo_load_pl0030_pl0030)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C8680;

static
__thiscall
int
(*bayo_load_pl0031_pl0031)(
	bayoActorGarment_t * pbParm1
) = (void *)0x009FC890;

static
__thiscall
int
(*bayo_load_pl0033_pl0033)(
	bayoActorGarment_t * actor
) = (void *)0x009FCB00;

static
__thiscall
int
(*bayo_load_pl004b_pl004b)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C8920;

static
__thiscall
int
(*bayo_load_pl004c_pl004c)(
	bayoActorGarment_t * actor
) = (void *)0x00A17420;

static
__thiscall
int
(*bayo_load_pl0052_pl004b)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C8CA0;

static
__thiscall
int
(*bayo_load_pl0053_pl0053)(
	bayoActorGarment_t * actor
) = (void *)0x00A19760;

static
__thiscall
int
(*bayo_load_pl0054_pl0054)(
	bayoActorGarment_t * actor
) = (void *)0x00A1B410;

static
__thiscall
int
(*bayo_load_pl0060_pl0060)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C8ED0;

static
__thiscall
int
(*bayo_load_pl0061_pl0061)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C90D0;

static
__thiscall
int
(*bayo_load_pl0062_pl0062)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C92D0;

static
__thiscall
int
(*bayo_load_pl0064_pl0064)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C94D0;

static
__thiscall
int
(*bayo_load_pl0066_pl0066)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C9850;

static
__thiscall
int
(*bayo_load_pl0067_pl0067)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C9B50;

static
__thiscall
int
(*bayo_load_pl0068_pl0068)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C9DB0;

static
__thiscall
int
(*bayo_load_pl0069_pl0069)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008C9FB0;

static
__thiscall
int
(*bayo_load_pl006a_pl006a)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CA1B0;

static
__thiscall
int
(*bayo_load_pl006e_pl006e)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CA430;

static
__thiscall
int
(*bayo_load_pl0070_pl0070)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CA6F0;

static
__thiscall
int
(*bayo_load_pl0072_pl0072)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CA9B0;

static
__thiscall
int
(*bayo_load_pl0074_pl0074)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CACE0;

static
__thiscall
int
(*bayo_load_pl0075_pl0075)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CAFE0;

static
__thiscall
int
(*bayo_load_pl0083_pl0083)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CB240;

static
__thiscall
int
(*bayo_load_pl0085_pl0085)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CB5F0;

static
__thiscall
int
(*bayo_load_pl0087_pl0087)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CB9A0;

static
__thiscall
int
(*bayo_load_pl0089_pl0089)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CBDC0;

static
__thiscall
int
(*bayo_load_pl008a_pl008a)(
	bayoPlayerModel_t * pPlayer
) = (void *)0x008CC090;

static
__cdecl
void
(*bayo_material_ModelShaderPls00_BXNXX_deinitializer)(
void) = (void *)0x00D9A300;

static
__cdecl
void
(*bayo_material_ModelShaderPls00_BXNXX_initializer)(
void) = (void *)0x00D945E0;

static
__cdecl
int
(*bayo_occlusionQueryIssueBegin)(
	int queryIndex
) = (void *)0x00C6D220;

static
__cdecl
int
(*bayo_occlusionQueryIssueEnd)(
	int queyIndex
) = (void *)0x00C6D2E0;

static
__cdecl
int
(*bayo_presentNextBuffer)(
void) = (void *)0x00C54CB0;

static
__cdecl
undefined4
(*bayo_putAssetDescInPriority)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A070;

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
__cdecl
undefined
(*bayo_releaseCriLoaderHandle)(
	void * criLoaderHandle
) = (void *)0x00CD1D82;

static
__cdecl
void
(*bayo_releaseDevice)(
void) = (void *)0x00C549A0;

static
__cdecl
undefined
(*bayo_removeAssetDescFromPriority)(
	bayoAssetDescriptor_t * assetDesc
) = (void *)0x00C7A0D0;

static
__cdecl
void
(*bayo_removeAssetDescFromQueue)(
	bayoAssetDescriptor_t * param_1
) = (void *)0x00C79FE0;

static
__stdcall
bayoAllocator_t *
(*bayo_selectAllocator)(
	uint obectId
) = (void *)0x004BE720;

static
__cdecl
int
(*bayo_setBaseVertexIndex)(
	INT param_1
) = (void *)0x00C5DA90;

static
__stdcall
int
(*bayo_setCurrentIndexStream)(
	bayoIndexStreamData_t * indexStream
) = (void *)0x00C5D9F0;

static
__cdecl
void
(*bayo_setD3DCullMode)(
	D3DCULL cullMode
) = (void *)0x00C5E290;

static
__cdecl
int
(*bayo_setD3DCurrentEffect)(
	bayoEffectBase_t * effect
) = (void *)0x00C5DA40;

static
__cdecl
void
(*bayo_setD3DZBufferType)(
	D3DZBUFFERTYPE param_1
) = (void *)0x00C5E2B0;

static
__cdecl
void
(*bayo_setD3DZWriteEnable)(
	BOOL param_1
) = (void *)0x00C5E2E0;

static
__cdecl
int
(*bayo_setGameResolution)(
	uint gameWidth,
	uint gameHeight
) = (void *)0x00C5D460;

static
__cdecl
void
(*bayo_setGameResolution2)(
	uint gameWidth,
	uint gameHeight
) = (void *)0x00C5D480;

static
__cdecl
void
(*bayo_setGameResolutions)(
	int displayMode,
	uint width,
	uint height,
	int param_4
) = (void *)0x00C56780;

static
__cdecl
void
(*bayo_setGameWindowResolution)(
	uint gameWindowWidth,
	uint gameWindowHeight
) = (void *)0x00C5D440;

static
__thiscall
int
(*bayo_setGetSteamAppsLanguage)(
	bayoSteamAppsLanguage_t * steamAppsLanguage
) = (void *)0x00C77D70;

static
__cdecl
void
(*bayo_setIndexedPrimiritveTypeAndCount)(
	D3DPRIMITIVETYPE primType,
	uint primCount
) = (void *)0x00C5E1E0;

static
__cdecl
void
(*bayo_setIndexedPrimitiveType)(
	D3DPRIMITIVETYPE primType
) = (void *)0x00C5F030;

static
__stdcall
int
(*bayo_setPixelShaderConstantF)(
	UINT startRegister,
	D3DXVECTOR4 * pConstantData,
	uint * dataCount
) = (void *)0x00C5FC30;

static
__thiscall
void
(*bayo_setPointerValueZero)(
	int * pValue
) = (void *)0x00C7B280;

static
__cdecl
void
(*bayo_setPrimitiveType)(
	D3DPRIMITIVETYPE param_1
) = (void *)0x00C5EF90;

static
__cdecl
void
(*bayo_setPrimitiveTypeAndCount)(
	D3DPRIMITIVETYPE primitiveType,
	undefined4 primitiveCount
) = (void *)0x00C5E190;

static
__cdecl
void
(*bayo_setRenderStateAlphaBlendEnable)(
	BOOL param_1
) = (void *)0x00C5E390;

static
__cdecl
void
(*bayo_setRenderStateBlend)(
	D3DBLEND srcBlend,
	D3DBLEND dstBlend,
	D3DBLENDOP blendOp
) = (void *)0x00C5E3C0;

static
__cdecl
void
(*bayo_setShaderDat)(
	void * param_1
) = (void *)0x00D52D60;

static
__cdecl
int
(*bayo_setStream)(
	uint streamNumber,
	bayoVertexStreamData_t * streamData
) = (void *)0x00C5E0F0;

static
__cdecl
int
(*bayo_setVertexDeclaration)(
	bayoVertexDeclarationBase_t * param_1
) = (void *)0x00C5D9A0;

static
__cdecl
int
(*bayo_setVertexRange)(
	uint vertexLimit,
	uint minVertexIndex
) = (void *)0x00C5DA60;

static
__cdecl
int
(*bayo_setVertexShaderConstantF)(
	UINT startRegister,
	float * pConstantData,
	uint * dataCount
) = (void *)0x00C5FB20;

static
__cdecl
int
(*bayo_setViewport)(
void) = (void *)0x00C5D610;

static
__cdecl
uint
(*bayo_setViewportFromBackBuffer)(
void) = (void *)0x00C5D560;

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
void
(*bayo_sortDisplayModes)(
	D3DDISPLAYMODE * pDisplayModes,
	D3DDISPLAYMODE * pDisplayModesEnd,
	int ptrDiff,
	__cdecl char (*)(void * , void * )
) = (void *)0x00C55DF0;

static
__thiscall
struct_050a57d0_t *
(*bayo_struct_050a57d0_init)(
	struct_050a57d0_t * iParm1
) = (void *)0x00442D60;

static
__thiscall
void
(*bayo_struct_050a57d0_substruct_2_copy)(
	struct_050a57d0_substruct_2_t * puParm1,
	struct_050a57d0_substruct_2_t * param_2
) = (void *)0x00442910;

static
__thiscall
void
(*bayo_struct_051ae320_clear)(
	struct_051ae320_t * puParm1
) = (void *)0x00C67460;

static
__thiscall
void
(*bayo_struct_051ae320_delete)(
	struct_051ae320_t * puParm1
) = (void *)0x00C67630;

static
__thiscall
void
(*bayo_struct_051ae320_delete_dynamic)(
	struct_051ae320_t * puParm1,
	byte param_2
) = (void *)0x00C67C80;

static
__thiscall
void
(*bayo_struct_051ae320_init)(
	struct_051ae320_t * this
) = (void *)0x00C675D0;

static
__thiscall
int
(*bayo_struct_051ae320_substruct_bInited)(
	struct_051ae320_substruct_t * iParm1
) = (void *)0x00C68940;

static
__thiscall
void
(*bayo_struct_05a7ae78_delete)(
	struct_05a7ae78_t * puParm1
) = (void *)0x00C70D30;

static
__thiscall
void
(*bayo_struct_05a7ae78_init)(
	struct_05a7ae78_t * pStru
) = (void *)0x00C70770;

static
__thiscall
int
(*bayo_struct_05a7af18_allocate)(
	struct_05a7af18_t * pStru,
	int count1,
	int count2,
	struct_05a7ae78_t * pStru2,
	bayoHeapSub_t * heap,
	bayoJobManager_t * jobManager
) = (void *)0x00C70B10;

static
__thiscall
void
(*bayo_struct_05a7af18_cleanup)(
	struct_05a7af18_t * iParm1
) = (void *)0x00C70670;

static
__thiscall
void
(*bayo_struct_05a7af18_init)(
	struct_05a7af18_t * puParm1
) = (void *)0x00C70AA0;

static
__thiscall
void
(*bayo_struct_05a7af18_swap)(
	struct_05a7af18_t * iParm1
) = (void *)0x00C70C40;

static
__thiscall
void
(*bayo_struct_05a7af18_swap2)(
	struct_05a7af18_t * iParm1
) = (void *)0x00C70C90;

static
__thiscall
void
(*bayo_struct_05a7e538_allocate)(
	struct_05a7e538_t * iParm1
) = (void *)0x004E5610;

static
__thiscall
void
(*bayo_struct_05a7e538_cleanup)(
	struct_05a7e538_t * iParm1
) = (void *)0x004E5580;

static
__thiscall
void
(*bayo_struct_05a7e538_reset)(
	struct_05a7e538_t * iParm1
) = (void *)0x004E55A0;

static
__thiscall
void
(*bayo_struct_05ac79c0_init)(
	struct_05ac79c0_t * stru
) = (void *)0x00C6CDA0;

static
__cdecl
void
(*bayo_struct_05ace0f4_init)(
void) = (void *)0x00523310;

static
__thiscall
struct_05bea8e0_t *
(*bayo_struct_05bea8e0_init)(
	struct_05bea8e0_t * pStru
) = (void *)0x00C7EF20;

static
__thiscall
int
(*bayo_struct_05bea8e0_substruct_1_init)(
	struct_05bea8e0_substruct_1_t * pStru
) = (void *)0x00C82650;

static
__thiscall
void
(*bayo_struct_05bea8e0_substruct_2_init)(
	struct_05bea8e0_substruct_2_t * puParm1
) = (void *)0x00C823D0;

static
__thiscall
void
(*bayo_struct_05bea8e0_substruct_2_init2)(
	struct_05bea8e0_substruct_2_t * puParm1
) = (void *)0x00C82380;

static
__thiscall
void
(*bayo_struct_05bea8e0_substruct_3_init)(
	struct_05bea8e0_substruct_3_t * puParm1
) = (void *)0x00C82350;

static
__thiscall
void
(*bayo_struct_05bea8e0_substruct_3_init2)(
	struct_05bea8e0_substruct_3_t * puParm1
) = (void *)0x00C822F0;

static
__cdecl
void
(*bayo_swapDoubleBuffers)(
void) = (void *)0x004F9460;

static
__cdecl
bool
(*bayo_testMaterialProperty3equals1)(
	bayoMaterial_t * a1
) = (void *)0x00D4E550;

static
__stdcall
void *
(*bayo_threadLauncher)(
	bayoThread_t * param_1
) = (void *)0x00C63300;

static
__cdecl
void
(*bayo_vertexDeclarations_deinitializer)(
void) = (void *)0x00D99810;

static
__stdcall
void
(*bayo_vertexDeclarations_initializer)(
void) = (void *)0x00D937B0;

static
__stdcall
void
(*bayo_waitStartupWindowClosed)(
void) = (void *)0x00C7B330;

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
void
(*initStruct_05a490d0)(
	struct_05a490d0_t * param_1
) = (void *)0x00C77D10;

static
__cdecl
void
(*initStruct_05a49188)(
	struct_05a49188_t * param_1
) = (void *)0x00C767E0;

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
int
(*init_controller)(
void) = (void *)0x00C77870;

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
__thiscall
int
(*struct_05a50030_init)(
	bayoCollisionCache_t * iParm1
) = (void *)0x004999A0;

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

