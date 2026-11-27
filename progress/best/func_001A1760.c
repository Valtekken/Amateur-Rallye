typedef s32 S32;

extern void func_002B2028(u32, void *);
extern void D_002AD390(void *);

void func_001A1760(void *arg0, s32 arg1) {
    S32 *ptr = (S32 *)arg0;
    S32 val = ptr[6];  // offset 0x24 = 6 * 4, lw $6, 0x24($16) where $16 = arg0

    if (val != 0) {
        // lw $3, -0x10($6) where $6 = ptr + 6, so address = (ptr + 6) - 4 = ptr + 5
        S32 v3 = ptr[5];  

        S32 v2 = 0xC;  // 12
        S32 v4 = (s32)ptr + 0x24;  // $4 = arg0 + 0x24

        // mult $5, $3, $2 - multiply v3 by 12
        S32 mul_result = v3 * v2;

        // addu $2, $5, $6 - $5 is from mult, $6 = ptr + 6 (as address + 0)
        // But in C, we just add mul_result + v4
        S32 add_result = mul_result + v4;

        // beq $4, $2, .L001A17E4
        if (v4 == add_result) {
            // fall through to jal D_002AD530
        }

        // jal D_002B2028
        func_002B2028(0xC, arg0);

        // Loop operations - simplified
        S32 i = v4 + 0x10;
        (void)i;
    }

    // func_002AD390 call
    D_002AD390(arg0);
}
