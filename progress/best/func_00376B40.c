extern void *func_00376B40(void *arg0, void *arg1, u32 arg2, s32 arg3);
extern void *func_00376B40(void *arg0, void *arg1, u32 arg2, s32 arg3, s32 a, void *b);
void *func_00376B40(void *arg0, void *arg1, u32 arg2, s32 arg3) {
    void *var_18 = 0;
    s32 temp_3 = *(s32 *)((char *)arg0 + 0x14200);
    if (temp_3 != 0) {
        s32 temp_3_2 = temp_3 - 1;
        *(s32 *)((char *)arg0 + 0x14200) = temp_3_2;
        void **temp_3_3 = (void **)((char *)arg0 + 0x28000 + ((s32)temp_3_2 * 4));
        temp_3_3[0x2200 / 8] = (void *)((char *)temp_3_3 + 0x2200);
        ((s32 *)temp_3_3)[0xC / 4] = -1;
        var_18 = temp_3_3;
        ((void **)var_18)[0x18 / 8] = arg1;
        ((void **)var_18)[0] = 0; ((void **)var_18)[4 / 8] = 0;
        ((void **)var_18)[8 / 8] = 0; ((void **)var_18)[0x10 / 8] = 0;
        ((void **)var_18)[0x14 / 8] = 0; ((void **)var_18)[0x1C / 8] = 0;
        ((void **)var_18)[0x20 / 8] = 0;
        *(s32 *)((char *)arg0 + 0x14204) = *(s32 *)((char *)arg0 + 0x14204) + 1;
    }
    return var_18;
}
