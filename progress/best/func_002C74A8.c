s32 func_002C7410(void *);
s32 func_003CA110(s16, s16, void *);
s32 func_003F9698(s32 *, s16, s16);
extern s32 D_00481E10;
extern s32 D_00481E40;
extern s32 D_0049AC00;
extern s32 D_0049AE00;

s32 func_002C74A8(void *arg0, s16 arg1, s16 arg2) {
    s32 *temp_19;
    s32 var_20;
    s32 var_2;

    func_003F9698(&D_00481E10, arg1, arg2);
    var_20 = 0;
    func_002C7410(arg0);
    *(s16*)((char*)arg0+0x14) = arg1;
    temp_19 = (s32*)(((arg2 + arg1) * 4) + (s32)&D_0049AE00);
    *(s16*)((char*)arg0+0x16) = arg2;
    var_2 = 0;
    if (*temp_19 == 0) {
        if (func_003CA110(arg1, arg2, (void*)((arg1 << 8) + ((arg2 << 8) + (s32)&D_0049AC00))) == 0) {
            func_003F9698(&D_00481E40, arg1, arg2);
        } else {
            var_20 = 1;
            *temp_19 = 1;
            *(s32*)((char*)arg0+0xC) = 1;
        }
        var_2 = var_20;
    }
    return var_2;
}
