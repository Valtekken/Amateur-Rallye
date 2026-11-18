/* --- prototypes used by this batch --- */
extern void func_00192130(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, s32);
extern s32  func_001E4280(void);
extern void func_001E3610(s32, void *);

static inline __attribute__((always_inline)) void *init_d4040(void *p, s32 s) {
    func_001D4040(p, s);
    return p;
}

typedef struct { u8 d[16]; } Tmp16;

typedef struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x50];
    s32 unk60;
    s32 unk64;
    u8 pad3[0x20];
    s32 unk88;
} S_1926;

void func_001926B0(S_1926 *arg0) {
    Tmp16 buf;
    s32 r;

    do { } while (0);
    func_00192130();
    func_001D2900(&arg0->unkC, arg0->unk88);
    r = func_001E4280();
    func_001E3610(r, init_d4040(&buf, arg0->unkC));
}
