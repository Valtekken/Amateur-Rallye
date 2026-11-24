typedef struct { s32 *b, *e, *c; } Vec;
extern void func_001CAED8(Vec *, s32 *, s32 *);

void func_0024F158(void *a0, void *a1, s32 a2)
{
    Vec *v = (Vec *)((char *)a1 + 0x18);
    s32 tmp = a2;

    if (v->e != v->c) {
        if (v->e)
            *v->e = tmp;
        v->e++;
    } else {
        func_001CAED8(v, v->e, &tmp);
    }
}
