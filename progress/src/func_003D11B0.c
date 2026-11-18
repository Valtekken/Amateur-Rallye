extern u8 D_00437E18[];
extern void func_002B2028(void*);
void func_003D11B0(u32*a){u32 c=a[2]-1;a[2]=c;if(!c){u32 n=a[1];if(n+16>=129){func_002B2028(a);return;}{u32*p=(u32*)(D_00437E18+((((n+23)>>3)-1)<<2));*a=*p;*p=(u32)a;}}}
extern s32 func_003F93CC(u32);
s32 func_003D12B0(register u32 a){return func_003F93CC(a);}
extern u32 D_00436208[];
extern void *func_003CD828(void*);
extern s32 func_003CD948(void*,u32,u32,s32,s32);
void **func_003D0AF0(void **a,s32 b,s32 c){void*p;if(D_00436208[3])p=func_003CD828(D_00436208);else{p=(char*)D_00436208+16;++D_00436208[2];}*a=p;func_003CD948(a,0,~0u,b,c);return a;}
extern u8 D_00488D80[],D_0047D9A8[];
void *func_003D1E50(void**a){void*p;void**slot=&a[1];a[0]=D_00488D80;if(D_00436208[3])p=func_003CD828(D_00436208);else{p=(char*)D_00436208+16;++D_00436208[2];}*slot=p;return a;}
