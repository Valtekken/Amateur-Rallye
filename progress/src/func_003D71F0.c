extern s32 func_003A0BD8(s32,s32);extern s32 func_00219DA8(s32,s32);
s32 func_003A5DC8(register s32 a,register s32 b){func_003A0BD8(a,b);func_00219DA8(a+12,b+12);return a;}

extern u8 D_00489120[];extern void D_002AD530(s32);extern void D_002AD390(void*);
void func_003D71F0(void*a,s32 b){*(void**)((u8*)a+40)=D_00489120;s32 p=*(s32*)((u8*)a+32);if(p)D_002AD530(p);if(b&1)D_002AD390(a);}
#define F(a,t,n) (*(t*)((u8*)(a)+(n)))
void func_003D72B0(void*a,s32 b,s32 c){if(!b)F(a,s8,26)=4;else F(a,s8,26)=0;F(a,s32,0)=b;F(a,s32,4)=c;F(a,s16,24)=32;F(a,s64,16)=17;F(a,s32,28)=6;F(a,s32,32)=0;F(a,s8,27)=0;F(a,s32,8)=0;}
s32 func_003D7318(s32*a){s32 f=a[0];s32 x=(f&256)?a[9]:a[3];s32 y=(f&256)?a[11]:a[2];if(x!=y){if(f&256)return a[9];return a[1];}return a[5];}
