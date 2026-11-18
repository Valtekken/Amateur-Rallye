u32 func_003CE5A8(s8 **a,s8 b,u32 c){s8 *s=*a;u32 n=*(u32*)(s-16),p;volatile s8 save=b;if(!n)return 0xFFFFFFFFu;p=n-1;if(c<p)p=c;++p;if(p){--p;do{if(s[p]==b)return p;if(p==0)break;--p;}while(1);}return 0xFFFFFFFFu;}
extern void func_002B2028(void *);
extern u8 D_00437E18[];
void func_003D1220(u32 *a){u32 n=a[1];if(n+16>=129){func_002B2028(a);return;}{u32 *p=(u32*)(D_00437E18+((((n+23)>>3)-1)<<2));*a=*p;*p=(u32)a;}}
extern s32 D_002AD390(void *);
extern u8 D_0047D9A8[],D_00488D50[],D_00488D80[];
void func_003D1A88(void **a,s32 b){char *s=a[1];u32 *h=(u32*)(s-16);s32 count=h[2]-1;h[2]=count;if(!count){u32 n=h[1];if(n+16>=129)func_002B2028(h);else{u32 *p=(u32*)(D_00437E18+((((n+23)>>3)-1)<<2));*(u32*)(s-16)=*p;*p=(u32)h;}}a[0]=D_0047D9A8;if(b&1)D_002AD390(a);}
extern char *func_003CD828(void *,char *);
void *func_003D1B30(void **a,char **b){char *s=*b;u32 *h;a[0]=D_00488D80;h=(u32*)(s-16);if(h[3])s=func_003CD828(h,s);else ++h[2];a[1]=s;a[0]=D_00488D50;return a;}
