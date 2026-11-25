extern u32 D_0040E618[];
extern void func_002B2028(void *);
extern void D_002AD390(void *);

typedef struct S_func_00374AB8_arg0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} S_func_00374AB8_arg0;

void func_00374AB8(S_func_00374AB8_arg0 *arg0, s32 arg1) {
    s32 *p4 = (s32 *)arg0->unk_0C;
    s32 val14 = arg0->unk_14;
    s32 val4 = arg0->unk_0C;
    s32 diff1 = val14 - val4;
    s32 n1 = diff1 >> 2;

    if (n1 != 0) {
        if ((n1 << 2) != 0) {
            func_002B2028(p4);
        } else {
            s32 *ptr_D = (s32 *)&D_0040E618[-1];
            s32 val_D = *ptr_D;
            *p4 = val_D;
            *ptr_D = arg0->unk_0C;
        }
    }

    s32 unk0 = arg0->unk_00;
    s32 unk4 = arg0->unk_04;
    s32 unk8 = arg0->unk_08;

    if (unk0 < unk4) {
        s32 val_loop = unk0;
        while (val_loop < unk4) {
            val_loop += 0x1C;
        }
    }

    s32 diff2 = (s32)((u8 *)unk8 - (u8 *)unk0) >> 2;
    s32 n2 = (diff2 * (s32)0xAAAAAAAB) >> 2;

    if (n2 != 0) {
        if ((n2 * 0x1C) != 0) {
            func_002B2028((void *)0); // Placeholder
        } else {
            // Placeholder
        }
    }

    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
