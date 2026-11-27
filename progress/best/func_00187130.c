extern void func_001E2460(void *, s32);
extern void func_001E28F8(void *, const char *, s32);
extern s32 func_001D4010(void *);
extern s32 func_00151930(void *);
extern void func_00151A28(void *, s32, s32, s32, s32);
extern void func_00175A40(void *, s32);
extern void func_00175AD0(void *, s32);
extern void func_00187280(void *);
extern void func_00187288(void *, s32);
extern void func_001872B0(void *, void *, void *);
extern void func_002B2028(void *, void *);
extern const char D_00470178[];
extern unsigned long D_0040E658;
extern unsigned long D_0040E618;

typedef struct { s32 unk8; } S_E658;
typedef struct { s32 unk4; } S_E618;

void func_00187130(s32 arg2) {
    char pad[64];
    s32 sp54;
    s32 sp50;
    s32 sp20;
    void *sp10;
    s32 temp_16;
    s32 temp_2;
    void *temp_4;

    func_001E2460(&sp54, arg2);
    func_001E28F8(&sp54, &D_00470178, 0);
    temp_16 = func_001D4010(&sp54);
    if ((D_0040E658 & 0xC) == 0) {
        sp10 = (void *)((u32)&D_0040E658 + 0x10);
        D_0040E658 = D_0040E658 + 1;
    } else {
        sp10 = (void *)func_00151930(&D_0040E658);
    }
    func_00151A28(&sp10, 0, 0xFFFFFFFF, temp_16, func_003FA9B8(temp_16));
    func_00175A40(&sp20, 0);
    func_00187280(&sp50);
    func_001872B0(&sp50, &sp10, &sp20);
    func_00187288(&sp50, 2);
    func_00175AD0(&sp20, 2);
    temp_4 = (void *)((u32)sp10 - 0x10);
    temp_2 = ((s32)(&(((S_E658 *)temp_4)->unk8) - (u32)temp_4));
    ((S_E658 *)temp_4)->unk8 = temp_2;
    if (temp_2 == 0) {
        if (((s32)(((S_E618 *)temp_4)->unk4) + 0x10) != 0) {
            func_002B2028(temp_4, &sp10);
            return;
        }
    }
}
