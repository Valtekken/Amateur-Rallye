void func_0023E538(void *);

void func_0023E3E8(void *arg0, s32 arg1, s32 arg2, void *arg3, void *arg4, s32 arg5, void *arg6, void *arg7, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, s32 arg_sp0, s32 arg_sp8) {
    // Declare pointers in the order the target initializes them
    void *p2 = (u8 *)arg0 + 0xC;
    void *p3 = (u8 *)arg0 + 0x2C;
    void *p4 = (u8 *)arg0 + 0x38;
    
    func_0023E538(arg0);
    
    *(volatile s32 *)((u8 *)arg0 + 0x4C) = arg1;
    *(volatile s32 *)((u8 *)arg0 + 0x50) = arg2;
    
    // arg3 stores - use arg3 directly (target keeps in $s1)
    *(volatile f32 *)((u8 *)arg0 + 0x00) = *(volatile f32 *)((u8 *)arg3 + 0x00);
    *(volatile f32 *)((u8 *)arg0 + 0x04) = *(volatile f32 *)((u8 *)arg3 + 0x04);
    *(volatile f32 *)((u8 *)arg0 + 0x08) = *(volatile f32 *)((u8 *)arg3 + 0x08);
    
    // arg4 stores - use p2 and arg4 (target: $v0=p2, $s2=arg4)
    *(volatile f32 *)((u8 *)p2 + 0x00) = *(volatile f32 *)((u8 *)arg4 + 0x00);
    *(volatile f32 *)((u8 *)p2 + 0x04) = *(volatile f32 *)((u8 *)arg4 + 0x04);
    *(volatile f32 *)((u8 *)p2 + 0x08) = *(volatile f32 *)((u8 *)arg4 + 0x08);
    
    // fparg stores
    *(volatile f32 *)((u8 *)arg0 + 0x18) = fparg0;
    *(volatile f32 *)((u8 *)arg0 + 0x1C) = fparg1;
    *(volatile f32 *)((u8 *)arg0 + 0x20) = fparg2;
    *(volatile f32 *)((u8 *)arg0 + 0x24) = fparg3;
    
    // arg5
    *(volatile s32 *)((u8 *)arg0 + 0x28) = arg5;
    
    // stack arg0
    s32 v0 = *(volatile s32 *)&arg_sp0;
    
    // arg6 stores - use p3 and arg6 (target: $v1=p3, $s3=arg6)
    *(volatile f32 *)((u8 *)arg0 + 0x2C) = *(volatile f32 *)((u8 *)arg6 + 0x00);
    *(volatile f32 *)((u8 *)p3 + 0x04) = *(volatile f32 *)((u8 *)arg6 + 0x04);
    *(volatile f32 *)((u8 *)p3 + 0x08) = *(volatile f32 *)((u8 *)arg6 + 0x08);
    
    // arg7 stores - use p4 and arg7 (target: $a0=p4, $s4=arg7)
    *(volatile f32 *)((u8 *)arg0 + 0x38) = *(volatile f32 *)((u8 *)arg7 + 0x00);
    *(volatile f32 *)((u8 *)p4 + 0x04) = *(volatile f32 *)((u8 *)arg7 + 0x04);
    *(volatile f32 *)((u8 *)p4 + 0x08) = *(volatile f32 *)((u8 *)arg7 + 0x08);
    
    *(volatile s32 *)((u8 *)arg0 + 0x44) = v0;
    *(volatile s32 *)((u8 *)arg0 + 0x48) = arg_sp8;
    
    *(volatile s32 *)((u8 *)arg0 + 0xD4) = 0;
    *(volatile s32 *)((u8 *)arg0 + 0xD8) = 0;
}
