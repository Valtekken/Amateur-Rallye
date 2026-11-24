extern s32 func_003A35D0(s32); extern void func_00396310(s32,s32); typedef struct { s8 value; } Tag;
s32 func_00397180(s32 a,s32 b,s32 c,Tag d) { s32 p=c; while(a!=b) { func_00396310(func_003A35D0(p),a); a+=4; p+=4; } return p; }
