#ifndef HELPER_FUNCS_H
#define HELPER_FUNCS_H

#define pBayoHeap3 ((struct bayoHeapBase_t *)0x05A57A78)

#define MEMBER_ADDR_AT_OFFSET(ptr, offset) ((uintptr_t)(ptr) + offset)

#define set_mesh_substruct_flags(actor, mesh, index, mask, flag) {\
    mesh = bayoActor_getMesh(actor, index);\
    if (mesh) {\
        mesh->pUnknownSubstruct->flags &= mask;\
        mesh->pUnknownSubstruct->flags |= flag;\
    }\
}

extern
__thiscall
__attribute__((noinline))
int32_t
bayoActor_loadATT(struct bayoActor_t *actor, void *attHandle);

extern
__thiscall
__attribute__((noinline))
int32_t
bayoActor_loadFLG(struct bayoActor_t *actor, void *flgHandle);

#endif
