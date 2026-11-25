typedef struct S_type34537 {
    u8 unk_00[0x8];
    s16 unk_08;
    u8 unk_0A[0x2];
    s32 unk_0C;
} S_type34537;

typedef struct S_type34536 {
    s32 unk_00;
    S_type34537 *unk_04;
} S_type34536;

typedef struct S_func_00310750_arg0_D0 {
    S_type34536 *unk_00;
} S_func_00310750_arg0_D0;

typedef struct S_func_00310750_arg0 {
    u8 unk_00[0xD0];
    S_func_00310750_arg0_D0 *unk_D0;
    s32 unk_D4;
    s32 unk_D8;
} S_func_00310750_arg0;

extern void func_002B2028(void *);
extern void func_00310750(S_func_00310750_arg0 *, s32);
extern void D_002AD390(void *);
extern u32 D_0040E618;

void func_00310A20(S_func_00310750_arg0 *arg0, s32 arg1) {
    S_func_00310750_arg0_D0 *unkD0 = arg0->unk_D0;
    u32 *curr = (u32 *)unkD0->unk_00;
    u32 *endPtr = (u32 *)((u8 *)unkD0 + 0x4);
    u32 endVal = *endPtr;
    
    if ((u32)curr < endVal) {
        void *var_6;
        do {
            var_6 = (void *)*curr;
            if (var_6 != NULL) {
                S_type34536 *obj = (S_type34536 *)var_6;
                s32 temp = obj->unk_00 - 1;
                obj->unk_00 = temp;
                if (temp == 0) {
                    S_type34537 *callback = obj->unk_04;
                    void *callbackArg = (u8 *)var_6 + callback->unk_08;
                    ((void (*)(void *, s32, void *))callback->unk_0C)(callbackArg, 3, var_6);
                }
            }
            curr++;
        } while ((u32)curr < endVal);
    }
    
    s32 count = ((arg0->unk_D8 - (s32)unkD0->unk_00) >> 2);
    if (count != 0) {
        if ((count * 4) != 0) {
            func_002B2028(unkD0->unk_00);
        } else {
            u32 *listHead = (u32 *)(D_0040E618 - 4);
            u32 next = *listHead;
            *(u32 *)unkD0->unk_00 = next;
            *listHead = (u32)unkD0->unk_00;
        }
    }
    
    func_00310750(arg0, 2);
    
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
