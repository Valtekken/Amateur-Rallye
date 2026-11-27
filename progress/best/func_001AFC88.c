extern s32 func_001D5F70(void);
extern f32 func_001D5E70(s32, f32, f32);
extern s32 func_001D5EB0(s32, s32, s32);
extern void func_001577C8(void *, void *, void *);

void func_001AFC88(char *arg0) {
    char *v44;
    char *v68;
    f32 val;
    s32 n;
    s32 count;
    s32 i;

    v44 = arg0 + 0x44;
    if (*(int *)v44 == *(int *)(v44 + 4)) {
        return;
    }

    val = *(f32 *)(arg0 + 0x24) + 0.001f;
    *(f32 *)(arg0 + 0x24) = val;

    if (func_001D5E70(func_001D5F70(), 0.1f, 1.0f) < val * 0.01f) {
        int sp0;
        *(f32 *)(arg0 + 0x24) = 0.0f;
        n = func_001D5EB0(func_001D5F70(), 0, 10);
        count = (*(int *)(v44 + 4) - *(int *)v44) >> 2;
        if ((u32)count >= (u32)n) count = n;
        if (count > 0) {
            v68 = arg0 + 0x68;
            for (i = count; i != 0; i--) {
                int *end = *(int **)(v44 + 4);
                end--;
                sp0 = *end;
                *(int **)(v44 + 4) = end;
                if (*(int *)(v68 + 4) != *(int *)(v68 + 8) && *(int *)v68 == *(int *)(v68 + 4)) {
                    if (*(int *)v68 != 0) {
                        *(int *)*(int **)v68 = sp0;
                    }
                    *(int *)(v68 + 4) += 4;
                } else {
                    func_001577C8(v68, (void *)*(int *)v68, &sp0);
                }
            }
        }
    }
}
