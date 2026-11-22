extern void D_002AD390(void *);
extern void func_001FC9D0(void *, s32);
extern void func_002B2028(u32, u32, u32);
extern u32 D_0040E618[];

typedef struct {
    void **begin;
    void *end;
    u32 count;
    void *ptrC;
} S;

void func_001FD910(S *arg0, s32 arg1) {
    void **p = arg0->begin;
    if (p != (void **)arg0->end) {
        do {
            u32 *e = (u32 *)*p;
            if (e != NULL) {
                u32 b = e[0];
                u32 f = e[1];
                u32 g = e[2];
                if (b < f) {
                    u32 q = b + 0x50;
                    while (q < f) q += 0x50;
                }
                s32 n = (s32)((g - b) * 0xCCCCCCCDu) >> 4;
                if (n != 0) {
                    if ((n * 0x50) == 0) {
                        *(u32 *)b = D_0040E618[-1];
                        D_0040E618[-1] = b;
                    } else {
                        func_002B2028(b, f, g);
                    }
                }
                D_002AD390(e);
            }
            p++;
        } while (p != (void **)arg0->end);
    }
    if (arg0->ptrC != NULL) func_001FC9D0(arg0->ptrC, 3);
    {
        u32 b = (u32)arg0->begin;
        s32 n = (s32)(arg0->count - b) >> 2;
        if (n != 0) {
            if ((n * 4) != 0) {
                func_002B2028(b, 0, 0);
            } else {
                *(u32 *)b = D_0040E618[-1];
                D_0040E618[-1] = b;
            }
        }
    }
    if (arg1 & 1) D_002AD390(arg0);
}
