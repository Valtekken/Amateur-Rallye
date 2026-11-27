extern void func_0021B848(void *, s32, s32, void *);

typedef struct
{
    s32 key;      /* +0x0 */
    f32 a;        /* +0x4 */
    f32 b;        /* +0x8 */
    f32 c;        /* +0xC */
    f32 d;        /* +0x10 */
    f32 e;        /* +0x14 */
    f32 f;        /* +0x18 */
    f32 g;        /* +0x1C */
    f32 h;        /* +0x20 */
} Rec;

static inline void copyrec(Rec *dst, const Rec *src)
{
    dst->key = src->key;
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d = src->d;
    dst->e = src->e;
    dst->f = src->f;
    dst->g = src->g;
    dst->h = src->h;
}

void func_0021B988(Rec *arg0, s32 arg1, s32 arg2, Rec *arg3, s32 arg4, s32 arg5)
{
    s32 hole;
    s32 k;
    s32 orig;
    Rec val;
    Rec *base = arg0;

    orig = arg1;
    hole = arg1;
    k = (arg1 * 2) + 2;

    if (k < arg2)
    {
        do
        {
            s32 c;
            Rec *child = base + k;
            /* choose rightmost child that compares less */
            c = k - ((child->h < child[-1].h) ? 1 : 0);
            copyrec(base + hole, base + c);
            hole = c;
            k = (hole + 1) * 2;
        } while (k < arg2);
    }

    if (k == arg2)
    {
        copyrec(base + hole, base + (k - 1));
        hole = k - 1;
    }

    copyrec(&val, arg3);

    func_0021B848(arg0, hole, orig, &val);
}
