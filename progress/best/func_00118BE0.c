typedef struct { s32 unk0; s32 *end; s32 cap; } S;
extern void func_00152688(void);
extern void func_00152720(S *arg0, s32 *end, s32 *arr, s32 val);
void func_00118BE0(S *arg0) {
    s32 sp[4];
    s32 i, tmp;
    i = 0;
    func_00152688();
    do {
        tmp = i + 8;
        sp[0] = tmp;
        if (arg0->end != (s32 *)arg0->cap) {
            if (arg0->end) *arg0->end = tmp;
            arg0->end++;
        } else {
            func_00152720(arg0, arg0->end, sp, tmp);
        }
        i++;
    } while (i < 12);
}
