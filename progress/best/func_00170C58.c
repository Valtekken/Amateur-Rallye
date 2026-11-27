typedef struct Obj {
    s32 unk0;
    void *unk4;
    void *unk8;
    void *unkC;
    void *unk10;
    void *unk14;
    void *unk18;
    void *unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
} Obj;

extern void func_00170EB0(void *, void *, void *, f32 *, f32 *, f32, f32);

void func_00170C58(Obj *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    s32 v = arg0->unk0;
    if (v == 0) {
        f32 sp0 = 0.0f;
        f32 sp4 = 0.0f;
        func_00170EB0(arg0, arg0->unk14, arg0->unk18, &sp0, &sp4, 0.0f, arg0->unk20);
        func_00170EB0(arg0, arg0->unk4, arg0->unk8, arg1, arg2, sp0, arg0->unk24);
        func_00170EB0(arg0, arg0->unkC, arg0->unk10, arg3, arg4, sp4, arg0->unk28);
        return;
    }
    if (v == 2) {
        void *c;
        s32 s;
        c = *(void **)((u8 *)arg0->unk4 + 0xC);
        s = -1;
        if (*(f32 *)((u8 *)c + 0x128) > 0.0f) s = 1;
        *arg1 = (f32)-s * *(f32 *)((u8 *)c + 0x100) + *(f32 *)((u8 *)c + 0x10C);
        c = *(void **)((u8 *)arg0->unk8 + 0xC);
        s = -1;
        if (*(f32 *)((u8 *)c + 0x128) > 0.0f) s = 1;
        *arg2 = (f32)-s * *(f32 *)((u8 *)c + 0x100) + *(f32 *)((u8 *)c + 0x10C);
        func_00170EB0(arg0, arg0->unkC, arg0->unk10, arg3, arg4, 0.0f, arg0->unk28);
        return;
    }
    func_00170EB0(arg0, arg0->unk4, arg0->unk8, arg1, arg2, 0.0f, arg0->unk24);
    {
        void *c;
        s32 s;
        c = *(void **)((u8 *)arg0->unkC + 0xC);
        s = -1;
        if (*(f32 *)((u8 *)c + 0x128) > 0.0f) s = 1;
        *arg3 = (f32)-s * *(f32 *)((u8 *)c + 0x100) + *(f32 *)((u8 *)c + 0x10C);
        c = *(void **)((u8 *)arg0->unk10 + 0xC);
        s = -1;
        if (*(f32 *)((u8 *)c + 0x128) > 0.0f) s = 1;
        *arg4 = (f32)-s * *(f32 *)((u8 *)c + 0x100) + *(f32 *)((u8 *)c + 0x10C);
    }
}
