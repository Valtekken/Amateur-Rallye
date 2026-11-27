typedef struct { u32 v[2]; } S8C;
extern void func_001C8E50(f32 *, f32 *, f32 *, s32);
extern f32 *func_001C8F48(f32 *, f32 *, s64);
extern void func_001C8FF0(f32 *, f32 *, s32, s32);
#define DIFFC ((s32)((u8 *)hi - (u8 *)lo))

void func_001C8FF0(f32 *lo, f32 *hi, s32 a2, s32 depth) {
    S8C sp;
    while ((DIFFC >> 3) >= 0x11) {
        f32 *mid;
        f32 f2, f1, f0;
        f32 *pivot;
        s32 c;
        if (depth == 0) {
            func_001C8E50(lo, hi, hi, 0);
            return;
        }
        depth--;
        mid = (f32 *)((u8 *)lo + ((((DIFFC >> 3) + (DIFFC >> 31)) >> 1) << 3));
        f2 = *lo;
        f1 = *mid;
        c = (f1 < f2) ? 1 : 0;
        f0 = *(f32 *)((u8 *)hi - 8);
        pivot = (f32 *)((u8 *)hi - 8);
        if (c != 0) {
            c = (f0 < f1) ? 1 : 0;
            if (c != 0) pivot = mid;
            else {
                c = (f0 < f2) ? 1 : 0;
                if (c == 0) pivot = lo;
            }
        } else {
            c = (f0 < f2) ? 1 : 0;
            if (c != 0) pivot = lo;
            else {
                c = (f0 < f1) ? 1 : 0;
                if (c == 0) pivot = mid;
            }
        }
        *(S8C *)&sp = *(S8C *)pivot;
        hi = func_001C8F48(lo, hi, (s64)sp.v[0] | ((s64)sp.v[1] << 32));
        func_001C8FF0(hi, hi, 0, depth);
    }
}
