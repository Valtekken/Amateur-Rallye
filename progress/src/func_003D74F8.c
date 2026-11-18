typedef struct {s32 value;} CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}

typedef struct{u32 x;u8*cur,*end;} PeekBuf;extern s32 func_003D8118(void*);
s32 func_003D74A8(PeekBuf*a){if(a->cur<a->end)return *a->cur;if(func_003D8118(a)==-1)return -1;return *a->cur;}
extern s32 func_003DA6B8(u32);
s32 func_003D74F8(u32 a){return func_003DA6B8(a);}
extern s32 func_003DA700(s32,s32);
s32 func_003D7518(s32 a,s32 b){return func_003DA700(b,a);}
