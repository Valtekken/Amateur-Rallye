typedef struct{s32 value;}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
typedef struct{s32 type,sign,exp,pad;s64 mant;}Wide;
extern void func_002ABBE8(s64*,Wide*);extern s32 func_002AC398(Wide*,Wide*);extern Wide*func_002ABC88(Wide*,Wide*,Wide*);extern s64 func_002ABAB8(Wide*);
s32 func_002AC4B0(s64 a,s64 b){Wide x,y;func_002ABBE8(&a,&x);func_002ABBE8(&b,&y);return func_002AC398(&x,&y);}
s64 func_002ABF20(s64 a,s64 b){Wide x,y,z;func_002ABBE8(&a,&x);func_002ABBE8(&b,&y);y.sign^=1;return func_002ABAB8(func_002ABC88(&x,&y,&z));}
s64 func_002ABEC8(s64 a,s64 b){Wide x,y,z;func_002ABBE8(&a,&x);func_002ABBE8(&b,&y);return func_002ABAB8(func_002ABC88(&x,&y,&z));}
