typedef struct {s32 value;} CopyTag;
extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
typedef struct {s32 type,sign,exp,pad;u64 mant;} Wide;
typedef union {u64 bits;struct{u64 mant:52;u64 exp:11;u64 sign:1;}f;} DoubleBits;
void func_002ABBE8(DoubleBits*a,Wide*b){u32 sign=a->f.sign;s32 e=a->f.exp;u64 m=a->f.mant;b->sign=sign;if(!e){b->type=2;return;}if(e==2047){if(!m){b->type=4;return;}if(m&(1ULL<<51))b->type=1;else b->type=0;b->mant=m;return;}b->exp=e-1023;b->type=3;b->mant=(m<<8)|(1ULL<<60);}
typedef struct {int a,b,x,y;} Grid;typedef struct {int a,b;Grid*g;} Outer;
extern int*func_001C67A0(Grid*,int,int);
int func_002AB868(Outer*p){int i,j,n=0;for(i=0;i<p->g->x;i++)for(j=0;j<p->g->y;j++)if(*func_001C67A0(p->g,i,j))n++;return n;}
typedef void(*Handler)(void);extern Handler D_00437E58;extern char D_00439570[],D_0047D8F0[];
extern Handler func_002ABA80(int);extern int func_002B1FC0(int);extern void*func_003D4938(void*,void*);extern void func_003D4F40(void*);
void func_002AB240(int p){void(*raise_error)(void*)=func_003D4F40;Handler h;do{h=D_00437E58;if(!h){char*msg=D_0047D8F0;raise_error(func_003D4938(D_00439570,msg));h=func_002ABA80(1);}h();}while(!func_002B1FC0(p));}
