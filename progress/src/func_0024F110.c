typedef struct { s32 *b, *e, *c; } Vec;
extern void func_001CAD18(Vec *, s32 *, s32 *);

void func_0024F110(void *a0, void *a1, s32 a2)
{
    Vec *v = (Vec *)((char *)a1 + 0xC);
    s32 tmp = a2;

    if (v->e != v->c) {
        if (v->e)
            *v->e = tmp;
        v->e++;
    } else {
        func_001CAD18(v, v->e, &tmp);
    }
}
