extern s32 func_00395B68(s32,s32);
typedef struct { char x; } Byte;
s32 func_00397228(s32 a,s32 b,s32 c,Byte d){s32 p=c; while(a!=b){func_00395B68(p,a); a+=8; p+=8;} return p;}
