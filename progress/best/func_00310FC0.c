extern void *func_00311098(void);

typedef struct { u32 pad[3]; u32 unkC; } NodeC;
typedef struct { u32 refcnt; void *meta; } RefObj;
typedef struct { u32 pad[2]; s16 off8; u16 padA; void (*fn)(void *, s32); } Meta;
typedef struct { u8 *begin; u8 *end; } Vec;
typedef struct {
    u32 pad0[4]; void *ptr10; void *ptr14; u32 pad18[7]; s32 unk34; u32 pad38[2];
} Inner;
typedef struct { Inner a; Inner b; u32 pad80[16]; s32 unkC0; u32 padC4[3]; u8 *begin; u8 *end; } Outer;

void func_00310FC0(void) {
    Outer *o = (Outer *)func_00311098();
    Vec *v = (Vec*)((char*)o + 0xD0);
    ((NodeC*)o->a.ptr14)->unkC = 0;
    ((NodeC*)o->a.ptr10)->unkC = 0;
    o->a.unk34 = -1;
    Inner *b = (Inner*)((char*)o + 0x40);
    ((NodeC*)b->ptr14)->unkC = 0;
    ((NodeC*)b->ptr10)->unkC = 0;
    b->unk34 = -1;
    o->unkC0 = 0;

    u8 *end = v->end;
    u32 n = (u32)(end - v->begin);
    if (v->begin < end) {
        u8 *it = v->begin;
        RefObj *elem = *(RefObj**)it;
        do {
            if (elem != NULL) {
                u32 r = elem->refcnt - 1;
                elem->refcnt = r;
                if (r == 0) {
                    Meta *m = (Meta*)elem->meta;
                    m->fn((char*)elem + m->off8, 3);
                }
            }
            it += 4;
            if (it >= end) break;
            elem = *(RefObj**)it;
        } while (1);
    }
    v->end = (u8*)((char*)v->end - n);
}
