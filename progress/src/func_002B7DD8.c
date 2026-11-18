extern s32 func_002BDB28();extern void func_003F9698(const char*,...);extern void func_002BB1B8(u32);extern s32 func_002BB070(u32,s32);extern void func_003F94D0(void*,s32,s32);extern char D_0047FEC0[],D_0047FF48[];extern void*func_002B1FC0(u32);extern void func_003F96F8(void);extern void func_002B8A78(void*,u32);extern void*func_002B8938(void*,void*,u32);
s32 func_002B7DD8(s32 a,void*b){s32 r=0;func_002BDB28();if(b)r=*(s32*)((char*)b+4);return r;}
s32 func_002BB0A0(u32 a){u32 r=0xFFFFFFFFu,p=a,end=a+0x300;s32 i=0;while(p<end){if(*(u32*)(p+4)==0xFFFFFFFFu){*(u32*)(p+4)=0;*(u32*)(p+8)=0;r=i;break;}p+=12;i++;}if(r==0xFFFFFFFFu){func_003F9698(D_0047FEC0);func_002BB1B8(a);}return r;}
void func_002BB150(u32 a,s32 b){s32 off;if(func_002BB070(a,b)){off=b*12;func_003F94D0((void*)(a+off),0,12);*(u32*)(a+off+4)=0xFFFFFFFFu;}}
typedef struct __attribute__((packed)){u32 a,b;u8 pad[12];u16 key;}Packed;
void*func_002BB398(void*a,Packed*b){void*p=(char*)a+40;void*r=func_002B1FC0(b->b);func_003F96F8();func_002B8A78(p,b->a);func_002B8938(p,r,b->b);if(*(u16*)((char*)a+100)!=b->key){func_003F9698(D_0047FF48);return 0;}return r;}
