/* func_0040AFB8 - creates semaphores */
extern s32 CreateSema_2(s32, void *);
extern s32 D_004411D4;
extern s32 D_004411D8;

void func_0040AFB8(void) {
    s32 val = 1;
    char buf[0x50];
    char* sp = buf;  /* frame base */
    
    /* Store val to multiple stack locations using $v0 equivalent */
    *(s32*)(sp + 0x28) = val;
    *(s32*)(sp + 4) = val;
    *(s32*)(sp + 8) = val;
    
    /* First call: $a0 = sp, $a1 = val */
    s32 ret1 = CreateSema_2(val, sp);
    
    /* Store val to 0x24(sp) - delay slot of first jal */
    *(s32*)(sp + 0x24) = val;
    
    /* Second call: $a0 = sp+0x20, $a1 = &D_004411D4 */
    s32 ret2 = CreateSema_2(val, sp + 0x20);
    
    /* Store first call's return to D_004411D4 - delay slot of second jal */
    D_004411D4 = ret1;
    
    /* Store second call's return to D_004411D8 */
    D_004411D8 = ret2;
}

/* func_0040B280 - wrapper calling func_0040B278 then _ExecPS2_2 */
extern s32 func_0040B278(void);
extern s32 _ExecPS2_2(s32, s32, s32, s32);

s32 func_0040B280(register s32 arg0, register s32 arg1, register s32 arg2, register s32 arg3) {
    register s32 r16 = arg0;
    register s32 r17 = arg1;
    register s32 r18 = arg2;
    register s32 r19 = arg3;
    func_0040B278();
    return _ExecPS2_2(r16, r17, r18, r19);  /* use return value to prevent tail call */
}
