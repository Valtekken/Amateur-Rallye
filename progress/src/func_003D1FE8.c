/* identical to func_003D1A88 (matched), with its names changed by decompdecomp */
extern void func_002B2028(void *);
extern u8 D_00437E18[];
void func_003D1220(u32 *a){u32 n=a[1];if(n+16>=129){func_002B2028(a);return;}{u32 *p=(u32*)(D_00437E18+((((n+23)>>3)-1)<<2));*a=*p;*p=(u32)a;}}
extern s32 D_002AD390(void *);
extern u8 D_0047D9A8[],D_00488D50[],D_00488D80[];
s32 func_003D1FE8(void **a,s32 b){char *s=a[1];u32 *h=(u32*)(s-16);s32 count=h[2]-1;h[2]=count;if(!count){u32 n=h[1];if(n+16>=129)func_002B2028(h);else{u32 *p=(u32*)(D_00437E18+((((n+23)>>3)-1)<<2));*(u32*)(s-16)=*p;*p=(u32)h;}}a[0]=D_0047D9A8;if(b&1)return D_002AD390(a);return (s32)D_0047D9A8;}
