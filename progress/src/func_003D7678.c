typedef struct Buf{u32 pad;u8*cur;u8*end;}Buf;extern s32 func_003D8118(Buf*);
s32 func_003D7428(Buf*a){s32 r;if(a->cur<a->end||func_003D8118(a)!=-1){++a->cur;if(a->cur<a->end||func_003D8118(a)!=-1){r=*a->cur;goto done;}}r=-1;done:return r;}
void func_003D7678(s32*a,s32 b){if(b)*a|=2;else *a&=~2;}
extern s32 func_003DA068(u32,s32,s32);s32 func_003D76C0(u32 a,s32 b,s32 c){return func_003DA068(a,b,c);}
