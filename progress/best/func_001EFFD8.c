extern int func_003F9698(const char *, ...);
extern char D_004262B0[], D_004774D8[], D_004774E0[], D_004774F8[], D_00477508[];

typedef struct {
    s32 f0, f4, f8, fC, f10, f14, f18, f1C, f20, f24;
    char pad[0x34 - 0x28];
} Elem;
typedef struct { Elem *start, *end; char pad[0x10]; } Inner;
typedef struct { Inner **start, **end; } Outer;

void func_001EFFD8(void *arg0, Outer *arg1) {
    s32 *depth;
    Inner **it;
    (void)arg0;
    func_003F9698(D_004774E0, (s32)((char *)arg1->end - (char *)arg1->start) >> 2);
    depth = (s32 *)&D_004262B0;
    depth[3] = depth[3] + 1;
    for (it = arg1->start; it != arg1->end; it++) {
        Inner *in = *it;
        if (in != 0) {
            func_003F9698(D_004774F8, (s32)((char *)it - (char *)arg1->start) >> 2, (s32)((u32)((char *)in->end - (char *)in->start) * 0xC4EC4EC5u) >> 2, it);
            depth[3] = depth[3] + 1;
            if (in->start != in->end) {
                Elem *e;
                for (e = in->start; e != in->end; e = (Elem *)((char *)e + 0x34)) {
                    s32 idx = (s32)((u32)((char *)e - (char *)in->start) * 0xC4EC4EC5u) >> 2;
                    func_003F9698(D_00477508, idx, e->f0, e->f4, e->f8, e->fC, e->f10, e->f14, e->f18, e->f1C, e->f20, e->f24);
                }
            }
            depth[3] = depth[3] - 1;
            func_003F9698(D_004774D8);
        }
    }
    depth[3] = depth[3] - 1;
    func_003F9698(D_004774D8);
}
