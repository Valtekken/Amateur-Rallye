s64 D_002BFA80(s32); s32 func_002BF920(void); s64 func_0040C530(f32); extern s32 D_0043BFCC; extern f32 D_0043BFD0;
#define F(p,t,o) (*(t*)((u8*)(p)+(o)))
void func_003E80A8(void*p,f32 f){s64 t,v,r;s32 n;if(!D_0043BFCC){t=D_002BFA80(func_002BF920());n=F(p,s32,24);F(p,f32,0)=f;v=t>>n;if(!n)v=t;if(f!=0.0f){r=v-func_0040C530(f*F(p,f32,16));goto done;}F(p,s64,8)=v;return;}{f32 x=F(p,f32,16),y=D_0043BFD0;F(p,f32,0)=f;r=func_0040C530((y-f)*x);}done:F(p,s64,8)=r;}typedef void(*VF)(void*);
void *func_0026C578(void);void func_0026C570(void*);s32 func_003F0768(s32*);
void func_003F0770(s32*p){u8 **q;u8*v;if(!*p && F(func_0026C578(),s32,12)==1){if(F(func_0026C578(),s32,8)){q=F(func_0026C578(),u8**,8);v=*q;F(v,VF,28)((u8*)q+F(v,s16,24));}func_0026C570(func_0026C578());func_003F0768(p);}}u32 func_003F28C8(s32 m){u32 r=0;switch(m){case 0:while(*(volatile s32*)0x10002010<0){}r=0;break;case 1:r=*(volatile u32*)0x10002010>>31;break;}return r;}
s32 func_003F5B60(f32,f32*);f32 func_003F6C28(f32,f32,s32);
f32 func_003F3230(f32 x){union{f32 f;s32 i;}u;f32 y[2];s32 n;u.f=x;u.i&=0x7fffffff;if(u.i<=0x3f490fda)return func_003F6C28(x,0.0f,1);if(u.i>0x7f7fffff)return x-x;n=func_003F5B60(x,y);return func_003F6C28(y[0],y[1],1-((n&1)*2));}
