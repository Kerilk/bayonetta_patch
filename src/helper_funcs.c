#include "bayonetta_native_types.h"
#include "helper_funcs.h"

extern int dummy;

extern
__thiscall
__attribute__((noinline))
int32_t
bayoActor_loadATT(struct bayoActor_t *actor, void *attHandle) {
    int32_t numAttachPoints;
    struct bayoAttachPoint_t *pAttachPoints;
    int32_t i;

    if(!attHandle || *(int32_t *)attHandle <= 0)
        return 0;

    numAttachPoints = *(int32_t *)attHandle;
    pAttachPoints = (struct bayoAttachPoint_t *)
            ((int32_t *)attHandle + 1);

    bayoActor_allocInitAttachPoints(actor,
                                    numAttachPoints,
                                    pBayoHeap3);
    for(i = 0; i < numAttachPoints; i++) {
        bayoActor_attachBone(actor,
                             pAttachPoints[i].sourceBoneIndex,
                             pAttachPoints[i].targetBoneIndex,
                             pAttachPoints[i].option);
    }
    return 1;
}

extern
__thiscall
__attribute__((noinline))
int32_t
bayoActor_loadFLG(struct bayoActor_t *actor, void *flgHandle) {
    uint32_t i;
    struct flgHeader_t *header;
    struct bayoMesh_t *mesh;
    struct flgMeshUnknownSubstructFlags_t *ussflgs;
    struct flgMeshUnknownFlags_t *uflgs;
    int *data;

    if (!flgHandle)
        return 0;

    header = (struct flgHeader_t *)flgHandle;
    if (header->meshUnknownSubstructFlagsCount != 0 &&
        header->meshUnknownSubstructFlagsOffset != 0) {
        ussflgs = (struct flgMeshUnknownSubstructFlags_t *)
                    ((unsigned char*)flgHandle +
                     header->meshUnknownSubstructFlagsOffset);
        for (i = 0; i < header->meshUnknownSubstructFlagsCount; i++) {
            set_mesh_substruct_flags(actor, mesh,
                                     ussflgs[i].meshIndex,
                                     ussflgs[i].mask,
                                     ussflgs[i].flags);
        }
    }

    if (header->meshUnknownFlagsCount != 0 &&
        header->meshUnknownFlagsOffset != 0) {
        uflgs = (struct flgMeshUnknownFlags_t *)
                    ((unsigned char*)flgHandle +
                     header->meshUnknownFlagsOffset);
        for (i = 0; i < header->meshUnknownFlagsCount; i++) {
            mesh = bayoActor_getMesh(actor, uflgs[i].meshIndex);
            if (mesh) {
                mesh->unknownFlags = uflgs[i].value;
            }
        }
    }

    if (header->meshUnknownSubstructFieldCCount != 0 &&
        header->meshUnknownSubstructFieldCOffset !=0) {
        uflgs = (struct flgMeshUnknownFlags_t *)
                    ((unsigned char*)flgHandle +
                     header->meshUnknownSubstructFieldCOffset);
        for (i = 0; i <header->meshUnknownSubstructFieldCCount; i++) {
            mesh = bayoActor_getMesh(actor, uflgs[i].meshIndex);
            if (mesh) {
                bayoMesh_setUnknownSubstructFieldC(mesh, uflgs[i].value);
            }
        }
    }
    return 1;
}


