typedef struct TaggedLocal { 
    s32 name; 
    union { s32 *i; f32 *f; } payload; 
    s32 tag; 
    unsigned b0:1; unsigned b1:1; unsigned b2:1; unsigned rest:29; 
    s32 changes; 
    s32 refs; 
    s32 owner; 
} TaggedLocal;

extern void func_001E5C58(TaggedLocal *, TaggedLocal *, s32);
extern void *D_002AD408(s32);

void func_001E5130(TaggedLocal *p, s32 *arg1) {
    if (p->tag != 8) {
        s32 *t;
        s32 val;
        func_001E5C58(p, p, 8);
        t = (s32 *)D_002AD408(4);
        val = *arg1;
        p->payload.i = t;
        *t = val;
    } else {
        s32 *v = p->payload.i;
        if (*v != *arg1) {
            p->changes++;
            *v = *arg1;
        }
    }
}
