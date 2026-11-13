typedef struct { s32 value; } CopyTag;
extern s32 func_0039F2A8(s32, s32, s32, CopyTag, s32);
s32 func_0039F370(register s32 a, register s32 b, register s32 c) { return func_0039F2A8(a, b, c, (CopyTag){0}, 0); }

extern s32 func_0039F370(s32, s32, s32);
s32 func_0039F3F0(register s32 a, register s32 b, register s32 c) { return func_0039F370(a, b, c); }

extern s32 func_003AA058(s32*);extern s32 func_0039F1A0(s32,s32,s32,s32);s32 func_0039F228(register s32 a,register s32 b,volatile s32 c){c;return func_0039F1A0(a,b,c,func_003AA058(&c));}

extern s32 func_0039EF58(s32, s32);
s32 func_0039F028(register s32 a, register s32 b) { func_0039EF58(a, b); return a; }
