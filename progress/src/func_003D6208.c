extern char D_00488D80[],D_0047D9A8[];extern char*func_003CD828(void*,char*);
void*func_003D1F08(void**a,char**b){char*q=*b;char*p=q-16;void**dst=a+1;*a=D_00488D80;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;return a;}
extern u8 D_00488F48[],D_00489120[];extern void D_002AD530(s32);extern void D_002AD390(void*);
typedef struct VT3{u64 a,b;}VT3;
void func_003D5EA0(void*p,s32 n){u8*base=D_00488F48;u8*v=*(u8**)p;*(void**)(v+40)=base;if(!n){VT3 tmp;u16 h;u32 sub,diff;tmp=*(VT3*)base;h=*(u16*)(base+8);sub=(u32)v-8;diff=(u32)p-sub;*(u16*)((u8*)&tmp+8)=h+diff;*(VT3**)(v+40)=&tmp;}if(n&2){s32 x=*(s32*)(v+32);*(void**)(v+40)=D_00489120;if(x)D_002AD530(x);}if(n&1)D_002AD390(p);}
extern void func_003D5050(void**);extern void**func_003D4D70(void**);
void func_003D61D8(void**a){if(*(s64*)((char*)*a+16)&0x6000)func_003D5050(a);}
s32 func_003D6208(void**a){u8*p=*a;if(p[26])return 0;{void*t=*(void**)(p+4);if(t)func_003D4D70(t);}return 1;}
