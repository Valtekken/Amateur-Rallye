extern s32 func_003A0BD8(s32,s32); extern s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
extern void func_001D4040(void*,const char*); extern char D_0047B778[],D_0047CCF8[],D_0047AD68[];
#define W(p,o) (*(s32*)((char*)p+o))
static inline void vi(float*p,float x){p[0]=x;((s32*)p)[1]=0;((s32*)p)[2]=0;}
void*func_00291250(void*p){s32 k;func_001D4040(&k,D_0047B778);W(p,4)=k;W(p,0)=-1;W(p,8)=(s32)D_0047CCF8;W(p,24)=1;W(p,12)=0;W(p,20)=0;vi((float*)((char*)p+28),0);vi((float*)((char*)p+40),1);vi((float*)((char*)p+52),0);W(p,64)=0;W(p,140)=0;func_001D4040((char*)p+64,D_0047AD68);return p;}
extern void*func_00201350(void);extern void func_001CB748(void*,void*,void*,s32);
void func_00290F88(void*p){float x[4],y[4];s32 base=*(s32*)func_00201350()+144;float*a=(float*)((char*)p+48),*b=(float*)((char*)p+60);x[0]=a[0]+b[0];x[1]=a[1]+b[1];x[2]=a[2]+b[2];((s32*)y)[0]=0;y[1]=1;((s32*)y)[2]=0;func_001CB748(a,x,y,base);}
extern void func_00290528(float,float);
void func_002903C8(void*p){W(p,28)=1;func_00290528(5.f,8.f);*(float*)((char*)p+24)=2;*(float*)((char*)p+32)=3.5f;*(float*)((char*)p+72)=.5f;*(float*)((char*)p+76)=30;*(float*)((char*)p+80)=.3f;*(float*)((char*)p+84)=70;}
