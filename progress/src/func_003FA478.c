#define F(p,t,o) (*(t*)((u8*)(p)+(o)))
s64 func_003FF618(s32,s16,s32,s32);s64 func_003FDB48(s32,s16,s32,s32);
s32 func_003FA478(void*p,s32 a,s32 b){if(F(p,u16,12)&256)func_003FF618(F(p,s32,84),F(p,s16,14),0,2);{u16 f=F(p,u16,12);s16 fd=F(p,s16,14);F(p,u16,12)=f&0xefff;return (s32)func_003FDB48(F(p,s32,84),fd,a,b);}}
s64 func_003FA4F8(void*p,s32 a,s32 b){s64 r=func_003FF618(F(p,s32,84),F(p,s16,14),a,b);u32 f=F(p,u16,12);if(r==-1)f&=0xefff;else{F(p,s32,80)=(s32)r;f|=4096;}F(p,u16,12)=f;return r;}
extern u8 D_0048BD29[];
#define LOW(c) ((D_0048BD29[(c)]&1)?(c)+32:(c))
s32 func_003FA580(s8*a,s8*b){s8*p=a,*q=b;u8 c=*p;while(*p){s32 d=*q;if(LOW((s8)c)!=LOW(d))break;p++;q++;c=*p;}return LOW((u8)*p)-LOW((u8)*q);}
