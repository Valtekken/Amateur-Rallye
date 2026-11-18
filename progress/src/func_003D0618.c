extern s32 func_003CD948(s32,s32,s32,s32,s32);extern s32 func_003FA9B8(s32);extern s32 func_003CDDB0(s32,s32,s32,s32,s8);extern s32 func_003CDC40(s32,s32,s32,s32,s32,s32);
void func_003D0020(s32*a,s32 b,s32 c,s32 d){s32 pos=b-*a;func_003CD948((s32)a,pos,c-b,d,func_003FA9B8(d));}
s32 func_003D0570(s32 a,s32 b,s32 c,s32 d){return func_003CDDB0(a,b,0,c,(s8)d);}
s32 func_003D0598(s32 a,s32 b,s32 c){return func_003CD948(a,b,0,c,func_003FA9B8(c));}
s32 func_003D0618(s32 a,s32 b,s32 c,s32 d,s32 e){return func_003CDC40(a,b,0,c,d,e);}
