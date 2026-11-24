extern int func_001B1D10(void *),func_001D5DE0(void *); extern int D_004731D8;
#define I(p,o) (*(int*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
void *func_001B21D8(void *a) {
 char *p=(char*)a,*v=p+0xa4,*t=p+0x38,*z=p+0x54,*q,*r;
 F(p,0x38)=100.0f; I(p,0xdc)=(int)&D_004731D8;
 I(p,0xc)=0; I(p,0x1c)=0; I(p,0x24)=0; I(p,0x2c)=0; I(p,0x34)=0;
 F(t,8)=F(t,4)=100.0f; I(p,0x44)=0; I(p,0x54)=0; I(z,8)=I(z,4)=0;
 I(p,0x68)=0; I(p,0x74)=0; I(p,0x78)=0; I(p,0x80)=0; I(p,0x88)=0; I(p,0x90)=0; I(p,0x9c)=0;
 F(p,0x60)=100.0f; F(p,0x64)=100.0f; F(p,0x7c)=100.0f; F(p,0x8c)=100.0f; F(p,0x98)=100.0f;
 func_001B1D10(v);
 I(p,0xc8)=0; I(p,0xd4)=0; I(p,0xcc)=1; I(p,0xd0)=1; func_001D5DE0(p+0xd8);
 q=p+0xb0; r=p+0x10;
 F(p,0)=F(p,0xa4); F(p,4)=F(v,4); F(p,8)=F(v,8); F(p,0x10)=F(p,0xb0);
 F(r,4)=F(q,4); F(r,8)=F(q,8); F(p,0x20)=F(v,0x18); F(p,0x28)=F(v,0x1c); F(p,0x30)=F(v,0x20);
 return a;
}
