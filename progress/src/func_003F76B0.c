typedef struct{float time,pad;u64 start;float freq,inv;s32 shift;} Timer;
extern char*func_002BF920(void);extern f32 func_0040C7F0(s64);extern void func_003E80A8(void*,f32);
Timer*func_003E7FE8(Timer*a){f32 f;s32 e,n;f=func_0040C7F0(*(s64*)(func_002BF920()+16));a->freq=f;if(f>16384.0f){e=(((*(u32*)&f)>>23)&255)-127;if((u32)e==0xFFFFFF81u)e=0;n=e-14;a->shift=n;a->freq=f/(f32)(1<<n);}else a->shift=0;a->inv=1.0f/a->freq;func_003E80A8(a,0.0f);return a;}typedef void(*Fn)(void);
#define F(p,t,o) (*(t*)((u8*)(p)+(o)))
extern void*D_004404DC;void func_003F7820(void*);
s16 func_003F7600(void*p){s32 n;void*r=F(p,void*,84);if(r)n=F(r,s32,56);else{r=D_004404DC;F(p,void*,84)=r;n=F(r,s32,56);}if(!n)func_003F7820(r);return F(p,s16,14);}
void*func_003F8A30(void*,s32);void func_003F94D0(void*,s32,s32);
void*func_003F76B0(void*a,s32 n){s32 size=n*88;u8*p=func_003F8A30(a,size+12);void*r=0;if(p){void*q=p+12;F(p,s32,4)=n;F(p,s32,0)=0;F(p,void*,8)=q;func_003F94D0(q,0,size);r=p;}return r;}
void func_003F7800(void);void func_003F7658(void*,s32,s32,void*);
void func_003F7820(void*p){void*q=(u8*)p+484;F(p,Fn,60)=func_003F7800;F(p,s32,56)=1;func_003F7658(q,4,0,p);func_003F7658((u8*)p+572,9,1,p);func_003F7658((u8*)p+660,10,2,p);F(p,void*,480)=q;F(p,s32,476)=3;F(p,s32,472)=0;}
