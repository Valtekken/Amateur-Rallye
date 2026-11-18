typedef struct{float time,pad;u64 start;float freq,inv;s32 shift;} Timer;
extern char*func_002BF920(void);extern f32 func_0040C7F0(s64);extern void func_003E80A8(void*,f32);
Timer*func_003E7FE8(Timer*a){f32 f;s32 e,n;f=func_0040C7F0(*(s64*)(func_002BF920()+16));a->freq=f;if(f>16384.0f){e=(((*(u32*)&f)>>23)&255)-127;if((u32)e==0xFFFFFF81u)e=0;n=e-14;a->shift=n;a->freq=f/(f32)(1<<n);}else a->shift=0;a->inv=1.0f/a->freq;func_003E80A8(a,0.0f);return a;}
u32 func_003F6EC0(s64 x){s32 lo=(s32)x; s32 hi=(s32)(x>>32);u32 nz=(u32)(lo|-lo)>>31;hi&=0x7fffffff;return (u32)(0x7ff00000-(hi|nz))>>31;}
u32 func_003F7120(f32 f){union{f32 f;u32 u;}x;x.f=f;return ((x.u&0x7fffffff)+0x80800000)>>31;}
u32 func_003F7148(f32 f){union{f32 f;u32 u;}x;x.f=f;return (0x7f800000-(x.u&0x7fffffff))>>31;}
