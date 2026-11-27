extern void *D_002AD408(int);
extern void *func_0016BC08(void *);
extern void *func_0016A588(void *);
extern void *func_0016A240(void *);
extern void *func_00169B48(void *);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_001C5A30(s32, s32, void *, s32);
extern void func_002B2028(s32);
extern char D_0040E618[];

#define DIV6(x) (((x) * (s32)0xAAAAAAAB) >> 2)

typedef struct {
    s32 f0, f4, f8, fC, f10, f14, f18, f1C;
} A;

void *func_00164150(A *a) {
    s32 *p = &a->f14;
    s32 start, end, end2, blk, count2, v, v19, v3;
    a->f14 = 0;
    p[1] = 0;
    p[2] = 0;
    a->f8 = (s32)func_0016BC08(D_002AD408(0x18));
    a->f4 = (s32)func_0016A588(D_002AD408(0x18));
    a->f0 = (s32)func_0016A240(D_002AD408(4));
    a->fC = (s32)func_00169B48(D_002AD408(4));
    a->f10 = 0x4B;
    start = a->f14;
    end2 = p[2];
    if ((u32)DIV6(end2 - start) < 4) {
        end = p[1];
        blk = DIV6(end - start);
        v = (s32)func_002B1FC0(0x30);
        if (v == 0) v = (s32)func_003D2910(0x30);
        func_001C5A30(start, end, (void *)v, 0);
        v19 = v + 0x30;
        if ((u32)a->f14 < (u32)p[1]) {
            v3 = a->f14 + 0xC;
            while ((u32)v3 < (u32)p[1]) v3 += 0xC;
        }
        count2 = DIV6(p[2] - a->f0);
        if (count2 != 0) {
            if (count2 * 12 != 0) {
                func_002B2028(a->f0);
            } else {
                *(s32 *)a->f0 = *(s32 *)(D_0040E618 - 4);
                *(s32 *)(D_0040E618 - 4) = a->f0;
            }
        }
        p[2] = v19;
        p[0] = v;
        p[1] = v + blk * 12;
    }
    return a;
}
