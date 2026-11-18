extern s32 func_002BB070(void *arg0);
extern void func_003F9698(char *fmt, ...);
extern u8 D_00428978[];
extern char D_004802F0[];

typedef struct { s32 v; } __attribute__((packed)) UnalignedS32;

s32 func_002BBDB8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_21;
    u8 *var_16;
    void *temp_9;
    void *temp_3;
    u32 temp_4;

    var_21 = 0;
    if (func_002BB070(D_00428978) != 0) {
        var_16 = D_00428978 + arg1 * 12;
    } else {
        var_16 = NULL;
    }
    if (var_16 != NULL) {
        temp_9 = *(void **)((u8 *)arg0 + 0x10);
        temp_3 = *(void **)((u8 *)temp_9 + 0x24);
        var_21 = ((s32 (*)(void *, void *, u32, s32, s32, void *))(*(void **)((u8 *)temp_3 + 0x1C)))(
            (void *)((u8 *)temp_9 + *(s16 *)((u8 *)temp_3 + 0x18)),
            *(void **)var_16,
            *(u32 *)(var_16 + 8),
            arg2, arg3, temp_9);
        *(u32 *)(var_16 + 8) = *(u32 *)(var_16 + 8) + arg3;
        temp_4 = ((UnalignedS32 *)(*(void **)var_16 + 4))->v;
        if (temp_4 < *(u32 *)(var_16 + 8)) {
            *(u32 *)(var_16 + 8) = temp_4;
        }
    } else {
        func_003F9698(D_004802F0);
    }
    return var_21;
}
