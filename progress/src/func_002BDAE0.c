extern "C" {
extern s32 func_003A0BD8(s32,s32),func_00219DA8(s32,s32);extern s32 func_0040AF58(void),func_0040AFA0(void);extern s32 func_002BD8E0(void*,void*);extern s32 func_002BCA88(void*,s32*,s32*,s32*,s32*,s32*,s32*);extern void func_002BCDA8(s32),func_002BCE48(void*);extern s32 func_003F931C(s32,s32,s32);extern s32 func_003F9698(const char*,...);extern char D_004807F8[],D_00480810[],D_004806F8[];extern s32 D_0042D440;
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}
void func_002BDAE0(s32 a,char*b,char*c){const char*q;const char*fmt=D_004807F8;q=b;b=(char*)fmt;if(!q)q=D_00480810;func_003F9698(b,q,*(u16*)(c+12),*(s32*)(c+16),*(s32*)(c+20),*(s32*)(c+24),*(s32*)(c+28));}
s32 func_002BD590(void*a,s32*b,s32 c){s32 x0,x4,x8,xc,x10,x14;void*p;func_0040AF58();p=*(void**)((char*)b[3]+8);func_0040AFA0();if(c)func_002BD8E0(a,p);if(*(s32*)((char*)p+88)){func_002BCA88(p,&x0,&x4,&x8,&xc,&x10,&x14);func_002BCDA8(x10);{s32 y=x8,z=x4;b[2]=0;b[0]=z;b[1]=y;}func_002BCE48(p);D_0042D440=0;}return 0;}
s32 func_002BD428(void*a,s32*b,s32 c){s32 r=0;if(c)func_002BD8E0(a,b);if(b[22]){s32 q=b[20];if(q){s32 p=b[19];if(p!=q){if(p!=0)func_003F931C(p,q,b[21]);else func_003F9698(D_004806F8,q);func_002BCDA8(b[20]);}}{s32 p=b[16];if(p && b[15]!=p)func_002BCDA8(p);}r=1;func_002BCE48(b);D_0042D440=0;}return r;}
}
