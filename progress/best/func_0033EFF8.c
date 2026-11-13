extern void func_002B2028(void *);
extern void func_0033ED08(void *, s32);

typedef struct S { s32 pad0; s32 begin; s32 end; s32 padC; s32 unk10; } S;

void func_0033EFF8(S *arg0) {
    s32 *inner = (s32 *)((char *)arg0 + 4);
    s32 var_4 = 0;
    s32 count = (inner[1] - inner[0]) >> 2;
    if (count != 0) {
        s32 var_3 = 0;
        do {
            s32 raw = *(s32 *)(inner[0] + var_3);
            s32 *var_17 = (s32 *)raw;
            if (var_17 != 0) {
                void *var_4_2 = (char *)var_17 + 8;
                do {
                    s32 *temp_16 = *var_17;
                    func_0033ED08(var_4_2, 2);
                    func_002B2028(var_17);
                    var_17 = temp_16;
                    var_4_2 = (char *)var_17 + 8;
                } while (var_17 != 0);
            }
            var_4 = var_4 + 1;
            *(s32 *)(inner[0] + var_3) = 0;
            var_3 = var_4 * 4;
        } while ((u32)var_4 < (u32)((inner[1] - inner[0]) >> 2));
    }
    arg0->unk10 = 0;
}
