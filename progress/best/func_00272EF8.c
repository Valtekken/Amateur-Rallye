typedef struct S_D_00426618_0 {
    s32 unk_00;
} S_D_00426618_0;

typedef struct S_func_00272EA0_arg2 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
} S_func_00272EA0_arg2;

typedef struct S_D_0040E618 {
    void *unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
} S_D_0040E618;

typedef struct S_D_00426618 {
    S_D_00426618_0 *unk_00;
    S_func_00272EA0_arg2 *unk_04;
    S_D_0040E618 *unk_08;
} S_D_00426618;

extern void func_002B1FC0(s32);
extern void func_003D2910(s32);
extern void func_00272EA0(void *, void *, void *, s32);
extern void func_002B2028(void *);
extern void func_00152D28(void *, void *);

extern S_D_0040E618 D_0040E618;

void func_00272EF8(S_D_00426618 *arg0, S_func_00272EA0_arg2 *arg1, void *arg2) {
    S_D_00426618_0 *p19 = (S_D_00426618_0 *)arg1;
    S_func_00272EA0_arg2 *p18 = arg0->unk_04;
    S_D_0040E618 *p17 = arg0->unk_08;
    S_D_00426618_0 *p5 = (S_D_00426618_0 *)arg0->unk_00;

    if (p18 != (S_func_00272EA0_arg2 *)p17) {
        S_D_0040E618 *p4 = (S_D_0040E618 *)p18;
        if (p4->unk_04 != p4->unk_08) {
            S_D_0040E618 *p_copy = (S_D_0040E618 *)((char*)p4 + 0x14);
            p4->unk_04 = 0;
            p4->unk_08 = 0;
            p4->unk_00 = p_copy->unk_00;
            p4->unk_04 = p_copy->unk_04;
            p4->unk_08 = p_copy->unk_08;
            p4->unk_0C = p_copy->unk_0C;
            p4->unk_10 = p_copy->unk_10;
        }
        s32 magic = 0xCCCCCCCD;
        S_D_0040E618 *p3 = (S_D_0040E618 *)p18;
        S_D_0040E618 *p6 = (S_D_0040E618 *)((char*)p3 + 0x14);
        S_D_0040E618 *p4_ptr = (S_D_0040E618 *)((char*)p3 + 0x14);
        s32 diff = (s32)(((s32)p6->unk_00 - (s32)p5->unk_00) * magic) >> 2;
        
        if (diff > 0) {
             p19->unk_00 = p5->unk_00;
        }
    }
}
