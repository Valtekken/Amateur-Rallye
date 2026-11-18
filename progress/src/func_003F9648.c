s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
typedef unsigned int U128 __attribute__((mode(TI)));
void *func_003F94D0(void *dest,int c,u32 n){unsigned char *d=dest;if(n>=8&&!((u32)dest&15)){u64 w=(unsigned char)c;U128 q;w|=w<<8;w|=w<<16;w|=w<<32;{union {U128 q;u64 w[2];}v;v.w[0]=w;v.w[1]=w;q=v.q;}while(n>=32){*(U128*)d=q;d+=16;*(U128*)d=q;d+=16;n-=32;}while(n>=8){*(u64*)d=w;d+=8;n-=8;}}while(n--)*d++=c;return dest;}
extern s32 D_004404DC;extern s32 func_003F9610(s32,s32);
void func_003F9648(s32 a){func_003F9610(D_004404DC,a);}
extern s32 func_003FB738(void*,s32,s32,s32*);
void func_003F9658(void*a,s32 b,...){s32*ap=(s32*)__builtin_next_arg(b)-12;func_003FB738(a,*(s32*)((char*)a+8),b,ap);}
