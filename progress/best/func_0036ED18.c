extern void *func_00152D28(int);
extern void *func_002B1FC0(int);
extern void func_002B2028(void *);
extern void *func_003D2910(int);
extern void func_003F93CC(void *, void *, int);
extern u32 D_0040E618[];

typedef struct { s32 b; s32 e; s32 c; } V;

static inline void *alloc_or_fallback(int n){void*p=func_002B1FC0(n);return p?p:func_003D2910(n);}
static inline void *get_free(void){u32 h=D_0040E618[-1];if(!h)return func_00152D28(0);D_0040E618[-1]=*(u32*)h;return (void*)h;}

void *func_0036ED18(V *arg0, V *arg1) {
    if ((void *)arg1 != (void *)arg0) {
        s32 n1 = (arg1->e - arg1->b) >> 1;
        s32 cap0 = (arg0->c - arg0->b) >> 1;
        s32 var19;
        void *buf;
        if ((u32)cap0 < (u32)n1) {
            if (n1 == 0) { buf = NULL; var19 = 0; }
            else {
                var19 = n1 << 1;
                if (var19 == 0) buf = get_free();
                else buf = alloc_or_fallback(var19);
            }
            func_003F93CC(buf, (void *)arg1->b, n1 << 1);
            {
                s32 oldn = (arg0->c - arg0->b) >> 1;
                if (oldn) {
                    u32 sz = oldn << 1;
                    if (sz) func_002B2028((void *)arg0->b);
                    else { *(u32 *)arg0->b = D_0040E618[-1]; D_0040E618[-1] = (u32)arg0->b; }
                }
            }
            arg0->b = (s32)buf;
            arg0->c = (s32)buf + var19;
        } else {
            s32 n0 = (arg0->e - arg0->b) >> 1;
            if ((u32)n0 >= (u32)n1) {
                func_003F93CC((void *)arg0->b, (void *)arg1->b, n1 << 1);
                var19 = n1 << 1;
            } else {
                func_003F93CC((void *)arg0->b, (void *)arg1->b, n0 << 1);
                var19 = n1 << 1;
                {
                    s32 src = ((arg0->e - arg0->b) >> 1 << 1) + arg1->b;
                    func_003F93CC((void *)arg0->e, (void *)src, ((arg1->e - src) >> 1) << 1);
                }
            }
        }
        arg0->e = arg0->b + var19;
    }
    return arg0;
}
