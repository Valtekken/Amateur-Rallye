void *func_001F9790(void *arg0, s32 arg1) {
    s32 tmp = -1;
    s32 sp[4];
    (void)sp;
    ((s32 *)arg0)[3] = tmp;
    ((s32 *)arg0)[4] = arg1;
    ((s32 *)arg0)[0] = 0;
    ((s32 *)arg0)[1] = 0;
    ((s32 *)arg0)[2] = 0;
    return arg0;
}

typedef struct S_1F9368_arg0 { s32 unk0, unk4, unk8, unkC; } S_1F9368_arg0;
typedef struct S_1F9368_arg1 { u8 pad[0x24]; s32 unk24; } S_1F9368_arg1;

int func_001F9368(S_1F9368_arg0 *arg0, S_1F9368_arg1 *arg1) {
    s32 v = arg0->unkC;
    if (v == -1) return 0;
    if (!func_001F2530(arg1->unk24, v)) return 0;
    return 1;
}

extern int func_001F2530(int, int);
