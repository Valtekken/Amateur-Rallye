extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_001BD878(void *);
extern void func_001BD8F8(void *);
extern void func_001BD978(void *);
extern void func_001BD9D8(void *, void *);
extern void func_001BDA18(void *, void *, s32);

typedef struct Obj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 padC[0x1C];
    s32 unk28;
    u8 pad2C[0x4];
    void *unk30;
    u8 pad34[0x2C];
    s32 unk60;
    s32 unk64;
    u8 pad68[0x14];
    s32 unk7C;
} Obj;

void func_001BD798(Obj *self) {
    if (self->unk4 != self->unk8) {
        s32 t = func_001E3650(func_001E4280(), (s32)self + 0x78);
        if (t != self->unk7C) {
            func_001BD878(self);
            void *p = self->unk30;
            void **vt = *(void ***)( (char *)p + 0xDC );
            s16 off = *(s16 *)((char *)vt + 0x28);
            void (*fn)(void *) = *(void (**)(void *))((char *)vt + 0x2C);
            fn((char *)p + off);
        }
        self->unk7C = t;
        func_001BD8F8(self);
        if (self->unk60 != 0) {
            s32 sp = 0;
            func_001BDA18(self, &sp, 1);
        } else {
            func_001BD9D8(self, (void *)((char *)self + 0x38));
        }
        func_001BD978(self);
        self->unk60 = 0;
        self->unk28 = self->unk28 + 1;
        self->unk64 = self->unk64 + 1;
    }
}
