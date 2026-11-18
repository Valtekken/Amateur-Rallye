extern void func_002B2028(void *);
extern void *func_003CD828(void *, void *);
extern u32 D_00437E18[];

void **func_003D0DE0(void **arg0, void **arg1) {
    if (arg1 != arg0) {
        void *temp6 = *arg0;
        void *temp5 = (char *)temp6 - 0x10;
        s32 t2 = *(s32 *)((char *)temp5 + 8) - 1;
        *(s32 *)((char *)temp5 + 8) = t2;
        if (t2 == 0) {
            s32 t3 = *(s32 *)((char *)temp5 + 4);
            if ((u32)(t3 + 0x10) >= 0x81U) {
                func_002B2028(temp5);
            } else {
                u32 idx = (((u32)(t3 + 0x17) >> 3) - 1);
                u32 *slot = D_00437E18 + idx;
                *(void **)((char *)temp6 - 0x10) = (void *)*slot;
                *slot = (u32)temp5;
            }
        }
        void *p = *arg1;
        void *temp4 = (char *)p - 0x10;
        if (*(s32 *)((char *)temp4 + 0xC) != 0) {
            p = func_003CD828(temp4, p);
        } else {
            *(s32 *)((char *)temp4 + 8) = *(s32 *)((char *)temp4 + 8) + 1;
        }
        *arg0 = p;
    }
    return arg0;
}
