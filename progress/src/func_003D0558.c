extern char D_00488CF0[];extern void func_003D13B0(void*);extern void func_003CE0D0(void**,s32,s32);
char*func_003CFF48(void**a,u32 n){char*p=*a;if(n>=*(u32*)(p-16)){func_003D13B0(D_00488CF0);p=*a;}if(*(u32*)(p-8)>=2){func_003CE0D0(a,*(s32*)(p-16),1);p=*a;}*(s32*)(p-4)=1;return p+n;}
s32 func_003D0558(s32*a){return *a;}
extern s32 func_003D30B0(void*);extern void func_003D6F68(void*,s8);
s32 func_003D4EA0(void**a){s32 c=func_003D30B0(*(void**)*a);if(c==-1){u8*p=*a;p[26]|=3;return 0;}else{func_003D6F68(*(void**)*a,(s8)c);return 1;}}
extern void func_003DA700(s32,s32);extern void func_003D4DC8(s32**);
void func_003D4F40(s32**a){func_003DA700(10,**a);func_003D4DC8(a);}
