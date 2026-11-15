#define I(p,o) (*(int*)((char*)(p)+(o)))
#define R(a) (*(volatile unsigned*)(a))
extern int func_003E1078(void*);
extern void func_003E1708(void*,char*,int);
extern char D_00489A88[];
extern void func_003E67F0(void*,int,int,int);
extern void func_003E6900(void*,int,int,int);
extern int func_003E3D68(int);
extern int func_0040AF58(void),func_0040AFA0(void),func_003F28C8(int,int);
int func_003E0C98(void*p,unsigned b,int c){void*q=*(void**)((char*)p+0x40); b=(b&0xfffffff)|0x20000000; I(q,0xb0)=1;I(q,0xd8)=b;I(q,0xe4)=c;I(q,0xdc)=0;I(q,0xe0)=0;return func_003E1078(p);}
void func_003E1520(void*p){int n=I(p,0x118);if(I(p,0x120)){func_003E1708(p,D_00489A88,n);}else if(I(p,0x174)==3){func_003E67F0(p,I(p,0x1bc),n-1,n-1);}else{func_003E6900(p,I(p,0x1cc),I(p,0x1dc),n-1);}I(p,0x120)=0;}
void func_003E15A0(void*p){register int base=0x70000000;func_003E3D68(1);I(p,0x590)=base;I(p,0x594)=0x70001800;I(p,0x6d0)=0x70001b00;I(p,0x6d4)=0x70003300;I(p,0x810)=0;}
void func_003E1600(void*p){I(p,0x818)=1;I(p,0x1b0)=0;func_0040AF58();R(0x1000f590)=R(0x1000f520)|0x10000;R(0x1000b000)=0;R(0x1000b400)=0;R(0x1000d400)=0;*(unsigned*)0x1000f590=R(0x1000f520)&0xfffeffff;func_0040AFA0();R(0x1000b020)=0;R(0x1000b420)=0;R(0x1000d420)=0;R(0x10002010)=0x40000000;func_003F28C8(0,0);}
