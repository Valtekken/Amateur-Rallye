typedef struct { void *unk0; void *unk4; } S0;
s32 func_0023F6A0(S0 *arg0, s32 arg1) {
    s32 *p = (s32*)arg0->unk0;
    s32 count = ((s32)arg0->unk4 - (s32)p) >> 2;
    if (count <= 0) return -1;
    s32 i = 0;
    do {
        if (arg1 == *p) return i;
        i++;
        p++;
    } while (i < count);
    return -1;
}

typedef struct { void **unk0; s32 unk4; void **unkC; s32 unk10; void **unk18; s32 unk1C; } S1;
void func_002410A0(S1 *arg0, s32 arg1) {
    s32 count; s32 i;
    void **base;
    base = arg0->unk0;
    count = ((s32)arg0->unk4 - (s32)base) >> 2;
    i = 0;
    while (i < count) {
        *(s32*)base[i] = arg1;
        i++;
    }
    base = arg0->unkC;
    count = ((s32)arg0->unk10 - (s32)base) >> 2;
    i = 0;
    while (i < count) {
        *(s32*)((char*)base[i] + 0x44) = arg1;
        i++;
    }
    base = arg0->unk18;
    count = ((s32)arg0->unk1C - (s32)base) >> 2;
    i = 0;
    while (i < count) {
        *(s32*)((char*)base[i] + 0x2C) = arg1;
        i++;
    }
}

typedef struct { void **unkC; void *unk10p; s32 unk10; void **unk18; void *unk1Cp; s32 unk1C; } S2;
void func_0024C620(void*);
void func_00250440(void*);
void func_00241160(S2 *arg0) {
    s32 count; s32 i; void **base;
    count = ((s32)arg0->unk10 - (s32)arg0->unkC) >> 2;
    if (count > 0) {
        i = 0; base = arg0->unkC;
        do {
            func_0024C620(base[i]);
            i++;
        } while (i < count);
    }
    count = ((s32)arg0->unk1C - (s32)arg0->unk18) >> 2;
    if (count > 0) {
        i = 0; base = arg0->unk18;
        do {
            func_00250440(base[i]);
            i++;
        } while (i < count);
    }
}
