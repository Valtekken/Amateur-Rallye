extern s32 func_002BA330(s32,s32,s32,s32);extern s32 func_002B1FC0(s32);
s32 func_002BA390(s32*a,s32 b,s32 c){s32 n=func_002BA330(0,0,b,c),k=n+1,p;if(n>0){p=func_002B1FC0(k);*a=p;if(p)return func_002BA330(p,k,b,c);return -1;}return n;}
extern void func_003F95A0(void*);extern s32 D_00427D7C,D_00427D84;extern char D_10000[],D_4D9978[];
void func_002B1488(s32*a,s32*b,s32*c,s32*d){s32 sp[12];char*v;func_003F95A0(sp);v=D_10000;if((u32)v>0x800000)v=(char*)0x100000;*a=sp[0];*b=sp[7];*c=0x2000000-(s32)D_4D9978-(s32)v-0x400;*d=D_00427D7C;}
void func_002B15F8(s32*a,s32*b,s32*c){s32 sp[12];char*v;func_003F95A0(sp);v=D_10000;if((u32)(v-1)>0x7fffff)v=(char*)0x100000;*a=D_00427D84;*b=0x2000000-(s32)D_4D9978-(s32)v-0x400;*c=D_00427D7C;}
s32 func_002AFF50(u32);s32 func_002B1380(u32 a){return func_002AFF50(a);}
