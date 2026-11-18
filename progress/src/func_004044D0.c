s32 func_003A0BD8(s32,s32);s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8((s32)((u8*)a+12),(s32)((u8*)b+12));return a;}
void func_004040D8(u32*p){u32 end=p[0]+16;p[1]--;p[2]++;if(p[2]==(u32)p+end)p[2]=(u32)p+16;}
typedef struct{volatile s32 id;volatile u32 a,b,c;u8*p,*q;void*r;} State;
extern State D_0049E150;extern u8 D_0049E180[],D_0049E2C0[];void func_00404118(void);
s32 FlushCache_2(s32);s32 func_0040B388(s32,State*,void(*)(void));void*func_00404070(s32);
s32 func_004044D0(void){u8*p,*q;FlushCache_2(0);D_0049E150.id=func_0040B388(0x210,&D_0049E150,func_00404118);if(D_0049E150.id<0)return 0;q=(u8*)((u32)D_0049E2C0|0x20000000);D_0049E150.c=0;p=(u8*)((u32)D_0049E180|0x20000000);D_0049E150.a=0;D_0049E150.b=0;D_0049E150.q=q;D_0049E150.p=p;*(u16*)(p+4)=0x210;p[6]=0x45;p[7]=0x48;*(u16*)(p+2)=0;*(u32*)(p+8)=0;D_0049E150.r=func_00404070(256);return 1;}
s32 func_00404590(s32 a){while(*(volatile u32*)0x1000f130&0x8000){}{register u8 *p=(u8*)0x1000f180;*p=a;}return a;}
