typedef struct{s32 value;}CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
extern void func_002AC8C0(float*,s32*);extern float func_002AC7B0(s32*);extern s32*func_002AC950(s32*,s32*,s32*);
float func_002ACB88(float a,float b){s32 x[4],y[4],z[4];func_002AC8C0(&a,x);func_002AC8C0(&b,y);return func_002AC7B0(func_002AC950(x,y,z));}
float func_002ACBE0(float a,float b){s32 x[4],y[4],z[4];func_002AC8C0(&a,x);func_002AC8C0(&b,y);y[1]^=1;return func_002AC7B0(func_002AC950(x,y,z));}
typedef struct{s32 type,sign,exp,pad;s64 mant;}Wide;
extern void func_002ABBE8(s64*,Wide*);extern void func_002AD320(s32,s32,s32,s32);
void func_002AC758(s64 a){Wide p;s32 t;s64 m;func_002ABBE8(&a,&p);m=p.mant;t=(m<<2)>>32;func_002AD320(p.type,p.sign,p.exp,(m&0x3fffffff)?t|1:t);}
