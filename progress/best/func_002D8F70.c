extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(u32);
extern void func_002B2028(void *);
extern void func_003F93CC(void *, void *, s32);
extern u32 D_0040E618[];

typedef struct Vec {
    void *begin;
    void *end;
    void *cap;
} Vec;

void func_002D8F70(Vec *arg0, void *arg1, void **arg2) {
    void *oldend, *oldbegin, *newbegin, *newend, *newcap, *p;
    s32 n, nn, bytes, newsize;

    oldend = arg0->end;
    if (oldend == arg0->cap) {
        oldbegin = arg0->begin;
        n = ((s32)oldend - (s32)oldbegin) >> 2;
        newsize = (n != 0) ? (n * 2) : 1;
        bytes = newsize * 4;
        if (newsize != 0) {
            if (bytes != 0) {
                newbegin = func_002B1FC0(bytes);
                if (newbegin == 0)
                    newbegin = func_003D2910(bytes);
            } else {
                newbegin = (void *)D_0040E618[-1];
                if (newbegin == 0)
                    newbegin = func_00152D28(0);
                else
                    D_0040E618[-1] = *(u32 *)newbegin;
            }
        } else {
            newbegin = 0;
            bytes = 0;
        }
        p = (char *)newbegin + ((s32)arg1 - (s32)oldbegin);
        func_003F93CC(newbegin, oldbegin, (s32)((s32)arg1 - (s32)oldbegin));
        if (p != 0)
            *(void **)p = *arg2;
        func_003F93CC((char *)p + 4, arg1, (s32)((s32)oldend - (s32)arg1));
        n = ((s32)arg0->cap - (s32)arg0->begin) >> 2;
        if (n != 0) {
            if (n * 4 != 0)
                func_002B2028(arg0->begin);
            else {
                *(void **)arg0->begin = (void *)D_0040E618[-1];
                D_0040E618[-1] = (u32)arg0->begin;
            }
        }
        newend = (char *)p + 4 + ((s32)oldend - (s32)arg1);
        newcap = (char *)newbegin + bytes;
        arg0->end = newend;
        arg0->cap = newcap;
        arg0->begin = newbegin;
    } else {
        if (oldend != 0)
            *(void **)oldend = *(void **)((s32)oldend - 4);
        newend = (char *)oldend + 4;
        nn = (s32)((s32)oldend - 4) - (s32)arg1;
        nn = nn & ~3;
        func_003F93CC((char *)newend - nn, arg1, nn);
        *arg2 = arg0->begin;
    }
}
