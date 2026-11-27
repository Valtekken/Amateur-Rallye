extern s32 func_001D4010(void *);
extern void func_001D4040(s32 *, s32), func_001E15E0(void *, void *, s32);
extern s32 func_003FA388(s32, const char *, f32 *, f32 *, f32 *, f32 *);
extern s32 func_003FA760(s32, s32);
extern char D_00476AA8[];
typedef struct { s32 f0; s32 f4; } Elem;
typedef struct { Elem *begin, *end; } Vec16;
typedef struct { char pad[0x14]; Vec16 v; char pad2[4]; s32 f20; } Arg1;
typedef struct { char pad[0x20]; s32 f20, f24, f28; char pad2[0x18]; s32 f44, f48; } Arg0;
typedef struct { f32 f0, f4, f8, fC; } F4;

s32 func_001E0A38(Arg0 *arg0, Arg1 *arg1, s32 *arg2, F4 *arg3) {
    s32 sp10; f32 sp0, sp4, sp8, spC;
    if (arg1->f20 == arg0->f48) {
        Vec16 *v = &arg1->v;
        Elem *first = v->begin;
        s32 n = (s32)((char *)v->end - (char *)first) >> 3;
        if ((n == 6 || n == 8) && first->f0 == (s32)arg0->f24 && first[1].f0 == (s32)arg0->f44) {
            s32 s = func_001D4010((char *)arg0 + 0x20);
            s32 s2 = first[1].f4;
            s32 ok = 0;
            if (s2 && s) ok = (func_003FA760(s, s2) == 0);
            if (ok) {
                F4 *out = arg3;
                s32 *keys;
                s32 i, off;
                func_001D4040(&sp10, first->f4);
                *arg2 = sp10;
                if (n == 8) {
                    func_001E15E0(arg0, arg1, 6);
                    out = arg3;
                }
                keys = (s32 *)((char *)arg0 + 0x28);
                i = 0; off = 0x10;
                do {
                    Elem *p = (Elem *)((char *)first + off);
                    if (p->f0 != *keys) return 0;
                    if (func_003FA388(p->f4, D_00476AA8, &sp0, &sp4, &sp8, &spC) != 4) return 0;
                    i++; keys++; off += 8;
                    out->f0 = sp0; out->f4 = sp4; out->f8 = sp8; out->fC = spC;
                    out = (F4 *)((char *)out + 0x10);
                } while (i < 4);
                return 1;
            }
        }
    }
    return 0;
}
