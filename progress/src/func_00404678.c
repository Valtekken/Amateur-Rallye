s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
extern s32 D_00441114;extern u8 D_0049E400[];extern void func_0040B540(u8*);
void func_004045C8(s32 a){s32 n=D_00441114;u8*p;if(n>=126){D_00441114=0;D_0049E400[127]=0;func_0040B540(D_0049E400);n=D_00441114;}if(a==10){D_00441114=0;p=D_0049E400+n;p[0]=a;p[1]=0;func_0040B540(D_0049E400);return;}D_00441114=n+1;D_0049E400[n]=a;}
extern void func_00404590(s32);
void func_00404678(s32 a){if(a==10){func_00404590(13);func_00404590(10);}else func_00404590(a);}
s32 func_004046B0(s64 a){s64 x=a,e;u64 m,t;e=((u64)(x<<1)>>53)-1075;if(e<-53)return 0;if(e>=13)return 9999;m=((u64)(x<<12)>>12)|(0x8000ULL<<37);if(e<0){t=m>>(s32)(-e-2);if((t&3)!=3)m=t>>2;else m=(t>>2)+1;}else m<<=(s32)e;return (s32)m;}
