s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
s32 func_00400A98(s64 a){s32 lo=(s32)a,hi=(s32)(a>>32);u32 n=(u32)(lo|-lo)>>31;hi&=0x7fffffff;hi|=n;hi=0x7ff00000-hi;return 1-((u32)(hi|-hi)>>31);}
s32 func_003FF150(s32,void*);
s32 func_00401CB0(s32 a,s32*p){s32 r;if(!p[2]){p[1]=0;return 0;}r=func_003FF150(a,p);p[2]=0;p[1]=0;return r;}
s32 func_003F74F8(void*);s32 func_00401DB0(void*,s32,s32);
struct Frame{void*f00;s32 f04,f08;u16 f0c,f0e;void*f10;s32 f14,f18,f1c;char pad20[52];s32 f54;char pad58[8],buf[1024];};
#define F(p,t,o) (*(t*)((u8*)(p)+(o)))
s32 func_00401CF8(void*a,s32 b,s32 c){struct Frame f;void*p=&f;s32 r;f.f54=F(a,s32,84);f.f0c=F(a,u16,12)&0xfffd;f.f0e=F(a,u16,14);f.f1c=F(a,s32,28);F(p,s32,36)=F(a,s32,36);f.f10=f.f00=(u8*)p+96;f.f14=f.f08=1024;f.f18=0;r=func_00401DB0(p,b,c);if(r>=0){if(func_003F74F8(p))r=-1;}if(f.f0c&64)F(a,u16,12)|=64;return r;}
