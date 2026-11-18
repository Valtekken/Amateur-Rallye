extern u32 D_00436208[];extern u8 D_00488D80[];extern void*func_003CD828(void*);
void *func_003D1E50(void**a){void*p;void**slot=&a[1];a[0]=D_00488D80;if(D_00436208[3])p=func_003CD828(D_00436208);else{p=(char*)D_00436208+16;++D_00436208[2];}*slot=p;return a;}
extern s32 func_003DA068(s32,s32,s32);extern s32 func_003D9FC8(s32,s32,s32,s32);
void**func_003D34C8(void**a,s32 b){if(func_003DA068(*(s32*)*a,b,1)==-1){u8*p=*a;p[26]|=4;}return a;}
void**func_003D3518(void**a,s32 b,s32 c){if(func_003D9FC8(*(s32*)*a,b,c,1)==-1){u8*p=*a;p[26]|=4;}return a;}
extern void func_003D4D70(s32);extern s32 func_003D4EA0(void**);extern s32 func_003DA6B8(s32);
void**func_003D35C0(void**a,s8*out){u8*p=*a;u8 f=p[26];s32 ok;if(f){ok=0;p[26]=f|2;}else{s32 t=*(s32*)(p+4);if(t)func_003D4D70(t);ok=1;if((s32)(*(s64*)((char*)*a+16)&1))ok=func_003D4EA0(a);}if(ok){s32 c=func_003DA6B8(*(s32*)*a);if(c==-1){u8*p=*a;p[26]|=3;}else *out=c;}return a;}
