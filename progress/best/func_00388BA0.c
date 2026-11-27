s32 func_002B8438(void *);
s32 func_002B84E0(void *, s32);

extern struct {
    s16 unk48;
    u32 unk4C;
    u8 pad[160 - 0x4C - 4];
} D_00484828;

typedef struct {
    void *unk8;
} Struct_unk8;

typedef struct {
    s16 unk40;
    s32 (*unk44)(void *, void *);
    s16 unk90;
    s32 (*unk94)(void *, s32 *, void *);
} VTable;

typedef struct {
    void *unk10;
} Arg0Struct;

s32 func_00388BA0(Arg0Struct *arg0, s32 arg1) {
    s32 sp40;
    s32 sp44;
    void *sp_ptr;
    VTable *vt;
    Struct_unk8 *unk8_ptr;
    void *d_ptr;

    // Stack frame 0x90, save s16,s17,s18,ra
    // s18 = arg0, s16 = arg1, s17 = &D_00484828
    func_002B8438(&sp_ptr);
    arg0->unk10 = &sp_ptr;

    d_ptr = &D_00484828;
    *(void **)((u8 *)&sp_ptr + 8) = d_ptr;

    s32 (*func1)(void *, s32, s32, s32, void *) = (s32 (*)(void *, s32, s32, s32, void *))D_00484828.unk4C;
    func1((void *)((u8 *)&sp_ptr + D_00484828.unk48), arg1, 0, 1, d_ptr);

    unk8_ptr = (Struct_unk8 *)arg0->unk10;
    vt = (VTable *)unk8_ptr->unk8;

    if (vt->unk44((void *)((u8 *)unk8_ptr + vt->unk40), unk8_ptr) != 0) {
        unk8_ptr = (Struct_unk8 *)arg0->unk10;
        vt = (VTable *)unk8_ptr->unk8;

        if (vt->unk94((void *)((u8 *)unk8_ptr + vt->unk90), &sp40, unk8_ptr), sp40 == 0xF001) {
            unk8_ptr = (Struct_unk8 *)arg0->unk10;
            vt = (VTable *)unk8_ptr->unk8;

            if (vt->unk94((void *)((u8 *)unk8_ptr + vt->unk90), &sp44, unk8_ptr), sp44 == 0x7D) {
                *(void **)((u8 *)&sp_ptr + 8) = d_ptr;
                func_002B84E0(&sp_ptr, 2);
                return 1;
            }
        }
    }

    *(void **)((u8 *)&sp_ptr + 8) = d_ptr;
    func_002B84E0(&sp_ptr, 2);
    return 0;
}
