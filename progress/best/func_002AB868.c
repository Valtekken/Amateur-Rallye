typedef struct {s32 value;} CopyTag;
extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
typedef struct {s32 type,sign,exp,pad;u64 mant;} Wide;
void func_002ABBE8(u64 *a,Wide *b){
u64 v=*a,m=v&(~0ULL>>12);s32 e=(v>>52)&2047;
b->sign=v>>63;
switch(e){case 0:b->type=2;return;case 2047:if(!m){b->type=4;return;}if(m&(1ULL<<51))b->type=1;else b->type=0;b->mant=m;return;default:b->mant=(m<<8)|(1ULL<<60);b->exp=e-1023;b->type=3;return;}
}
typedef struct {int a,b,x,y;} Grid;typedef struct {int a,b;Grid*g;} Outer;
extern int*func_001C67A0(Grid*,int,int);
int func_002AB868(Outer*p){int i=0,j,n=0;if(p->g->x>0){j=0;do{if(p->g->y>0){do{int t=j;j++;if(*func_001C67A0(p->g,i,t))n++;}while(j<p->g->y);}i++;j=0;}while(i<p->g->x);}return n;}
typedef void(*Handler)(void);extern Handler D_00437E58;extern char D_00439570[],D_0047D8F0[];
extern Handler func_002ABA80(int);extern int func_002B1FC0(int);extern void*func_003D4938(void*,void*);extern void func_003D4F40(void*);
void func_002AB240(int p){void(*raise_error)(void*)=func_003D4F40;Handler h;do{h=D_00437E58;if(!h){char*msg=D_0047D8F0;raise_error(func_003D4938(D_00439570,msg));h=func_002ABA80(1);}h();}while(!func_002B1FC0(p));}
