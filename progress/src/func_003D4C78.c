extern u32 D_00436208[];extern u8 D_00488D80[];extern void*func_003CD828(void*);
void *func_003D1E50(void**a){void*p;void**slot=&a[1];a[0]=D_00488D80;if(D_00436208[3])p=func_003CD828(D_00436208);else{p=(char*)D_00436208+16;++D_00436208[2];}*slot=p;return a;}
s32 func_003D0560(s32 a,s32 b){return (a+16)+b;}
extern void func_003D4D70(s32);extern void func_003D4168(void**,s32,s32);
void**func_003D46B0(void**a,s32 b){u8*p=*a;s32 ok;if(p[26])ok=0;else{s32 t=*(s32*)(p+4);if(t)func_003D4D70(t);ok=1;}if(ok)func_003D4168(a,b,0);return a;}
extern s32 func_003DA068(s32,s32,s32);
void**func_003D4C78(void**a,s32 b){if(func_003DA068(*(s32*)*a,b,2)==-1){u8*p=*a;p[26]|=4;}return a;}
