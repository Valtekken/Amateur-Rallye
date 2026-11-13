typedef struct S_BlockHdr {
    s32 unk_10;   // at ptr-0x10: free list link or back pointer
    s32 unk_C;    // at ptr-0xC
    s32 unk_8;    // at ptr-0x8: refcount
    s32 unk_4;    // at ptr-0x4: size or next pointer
} S_BlockHdr;

typedef struct S_Elem {
    void *unk0;   // pointer to data block
    s32 unk4;     // count/refcount
} S_Elem;

typedef struct S_Mgr {
    void **unk0;      // handle table: array of void*
    s32 unk4;         // count
    s32 unk8;         // count2
    s32 unkC;         // array of s32 (reverse mapping)
    void *unk10;
    void *unk14;
    void *unk18;
    void *unk1C;
    void *unk20;
    void **unk24;     // array of S_Elem (8 bytes each)
    s32 unk28;
    s32 unk2C;
    s32 unk30;        // count of elements
    s32 unk34;        // capacity
    s32 unk38;
} S_Mgr;

extern S_Mgr D_004262D0;
extern void **D_0042A7B0;
extern u32 D_0042DA20;
extern s32 D_0040E678;
extern void *D_0049B0C0;
extern char D_00483F58[16];
extern u32 D_0040E618[16];
extern u32 D_0040E658[8];
extern void *D_00483DA0[88];

extern void func_0030F030(void);
extern s32 func_002FD7A0(s32);
extern void func_003FA8A4(void *, s32);
extern void func_003FA634(void *, void *);
extern s32 func_003FA9B8(void *);
extern s32 func_00151930(void *);
extern void func_002B2028(void *, void *, s32);
extern void func_00151A28(void **, s32, s32, void *, s32);
extern void func_00152720(void *, s32 *, s32 *);
extern void func_001537E8(void **, s32, s32);
extern s32 func_00153F40(s32, void **, s32, s32);
extern void func_001D9628(void *, u32, s32, void **);
extern void func_001D9A90(void *, u32, s32, void **, s32);
extern void func_002DD510(s32 *, s32, s32, s32, s32, s32, u32);
extern void func_002F7AE8(s32, u32, s32, void *);

static inline void *hdr(void *p) { return (void *)((u8 *)p - 0x10); }

void func_002DC6E8(s32 *arg0, s32 arg1) {
    s32 sp5C, sp60, sp64, sp50, sp54, sp14, sp0;
    s32 sp68, sp6C;
    void *sp10, *sp20, *sp30, *sp40;
    void *temp_18;
    void *var_7;
    void *var_16_2, *var_16_5, *var_17_2;
    s32 var_17, var_18;
    s32 var_3, var_3_2, var_3_3, var_3_4, var_3_5, var_3_6, var_3_7, var_3_8, var_3_9;
    s32 var_3_10, var_3_11, var_3_12, var_3_13;
    s32 var_4, var_16_3, var_16_4;
    s8 var_16;
    s32 temp_2, temp_3, temp_3_2;
    s32 temp_8;
    s32 temp_17_2, temp_18_2, temp_18_3, temp_18_4;
    s32 temp_20;
    s32 temp_2_2, temp_2_3, temp_2_4, temp_2_5, temp_2_6, temp_2_7, temp_2_8, temp_2_9;
    s32 temp_2_10, temp_2_11, temp_2_12, temp_2_13, temp_2_14, temp_2_15, temp_2_16, temp_2_17;
    s32 temp_30;
    u32 temp_21;
    void *temp_16, *temp_16_2, *temp_16_4, *temp_16_5, *temp_16_6;
    void *temp_17, *temp_17_3;
    void *temp_5, *temp_5_2, *temp_5_3, *temp_5_4, *temp_5_5, *temp_5_6, *temp_5_7, *temp_5_8, *temp_5_9;
    void *temp_3_3, *temp_3_4, *temp_3_5, *temp_3_6, *temp_3_7, *temp_3_8, *temp_3_9;
    void **temp_4, **temp_4_2, **temp_4_3, **temp_4_4, **temp_4_5, **temp_4_6, **temp_4_7;
    void **temp_4_8, **temp_4_9, **temp_4_10, **temp_4_11, **temp_4_12, **temp_4_13;
    void **temp_4_14, **temp_4_15, **temp_4_16, **temp_4_17, **temp_4_18, **temp_4_19;
    void **temp_4_20, **temp_4_21, **temp_4_22, **temp_4_23, **temp_4_24, **temp_4_25;
    void **temp_4_26, **temp_4_27, **temp_4_28, **temp_4_29;
    s32 *temp_5_10;
    void *temp_3_2_ptr;
    s8 temp_16_3;
    s32 **sp68_ptr;

    sp68_ptr = &arg0;
    func_0030F030();
    if (arg1 != 0) goto end;
    
    sp5C = (s32)((u32)D_0042DA20 >> 8);
    sp0 = sp5C;
    
    if (D_0042A7B0 == NULL) {
        D_0042A7B0 = (void **)&D_0049B0C0;
        func_003FA8A4(&D_0049B0C0, D_0040E678);
        func_003FA634(&D_0049B0C0, &D_00483F58[0]);
    }
    
    sp60 = func_002FD7A0(arg0[0]);
    temp_18 = D_0042A7B0;
    sp64 = 0x4000 - sp5C;
    
    if (temp_18 == NULL || func_003FA9B8(temp_18) == 0) {
        if (sp0 >= 0) {
            temp_4 = &D_004262D0.unk0[sp0];
            temp_3_8 = *temp_4;
            temp_2_14 = (s32)((u8 *)temp_3_8 - (u8 *)0) - 0x10;
            if (temp_2_14 == 0) {
                var_7 = &D_00483DA0[0];
            } else {
                *(s32 *)((u8 *)temp_3_8 + temp_2_14) = 0;
                var_7 = *temp_4;
            }
        }
        func_002F7AE8(sp60, sp5C, sp64, var_7);
        if (sp0 >= 0) {
            *arg0 = -1;
        }
    } else {
    }
end:
    func_002DD510(arg0, 0, 0, 0x280, 0x1E0, 0, 0x42340000u);
}
