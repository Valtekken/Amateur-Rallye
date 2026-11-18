extern s32 func_003C92C8(void *, s32, s32);
extern void func_003C9418(void *);

extern u32 D_00436090[10];
extern u32 D_004360D0[10];

#define REG_E000 (*(volatile u32 *)0x1000E000)
#define REG_E010 (*(volatile u32 *)0x1000E010)

s32 func_003C9328(s32 arg0, s32 arg1) {
    u32 *ptr_ptr = D_00436090;
    u32 *flag_ptr = D_004360D0;
    s32 temp_17 = arg1 & 1;
    s32 i = 9;
    
    do {
        if (*flag_ptr != 0) {
            u32 *obj = *ptr_ptr;
            obj[0x80/4] = 0;
            obj[0x0/4] = 0;
            obj[0x30/4] = 0;
            obj[0x10/4] = 0;
            obj[0x50/4] = 0;
            obj[0x40/4] = 0;
        }
        ptr_ptr++;
        flag_ptr++;
    } while (i-- >= 0);
    
    REG_E010 = 0xFF1F;
    REG_E010 &= 0xFF1F0000;
    
    func_003C92C8((void *)&REG_E010, 0x14, 0xFF1F0000);
    func_003C9418((void *)&REG_E010);
    
    if (arg0 == 1) {
        REG_E000 |= 1;
    }
    return temp_17;
}
