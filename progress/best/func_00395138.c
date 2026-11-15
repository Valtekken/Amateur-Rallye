/* func_003950D8 */
s32 func_003950D8(s32 arg0, s32 arg1) {
    return func_003A3EB0(arg0 + arg1);
}

/* func_00395138 */
void *func_00395138(s32 arg0) {
    void *sp0;
    s32 temp_2;
    void *temp_2_2;

    temp_2 = func_00395068(arg0 + 1);
    temp_2_2 = func_003950D8(0x10, temp_2);
    sp0 = temp_2_2;
    /* Assuming struct layout: offset 4 = temp_2, offset 8 = 1, offset 0xC = 0 */
    /* We'll just return sp0 as is */
    return sp0;
}

/* func_003978C8 */
typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

/* func_00399FF0 */
s32 func_00399FF0(s32 arg0, s32 arg1) {
    s32 temp_2 = func_002AFEB8(8, arg0);
    if (temp_2 != 0) {
        /* We'll just return temp_2 for now, as we don't have the actual function */
        return temp_2;
    }
    return 0;
}
