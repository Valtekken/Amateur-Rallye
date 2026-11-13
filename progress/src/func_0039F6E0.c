extern s32 func_0039F678(s32);
s32 func_0039F6E0(register s32 a, register s32 b) { return func_0039F678(b); }

extern s32 func_003A32E8(s32, s32);
void func_0039F740(register s32 a, register s32 b) { if (b) func_003A32E8(a, b * 0xC); }

typedef struct { s32 value; } CopyTag;
extern s32 func_0039F2A8(s32, s32, s32, CopyTag, s32);
extern s32 func_0039F370(s32, s32, s32);
s32 func_0039F3F0(register s32 a, register s32 b, register s32 c) { return func_0039F370(a, b, c); }

s32 func_0039F370(register s32 a, register s32 b, register s32 c) { return func_0039F2A8(a, b, c, (CopyTag){0}, 0); }
