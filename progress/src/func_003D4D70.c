extern char D_00488CF0[];extern void func_003D13B0(void*);extern void func_003CE0D0(void**,s32,s32);
char*func_003CFF48(void**a,u32 n){char*p=*a;char*r;if(n>=*(u32*)(p-16)){func_003D13B0(D_00488CF0);p=*a;}r=p+n;if(*(u32*)(p-8)>=2){func_003CE0D0(a,*(s32*)(p-16),1);p=*a;r=p+n;}*(s32*)(p-4)=1;return r;}
extern s32 func_003D9FC8(s32,s32,s32,s32);
void**func_003D4CC8(void**a,s32 b,s32 c){if(func_003D9FC8(*(s32*)*a,b,c,2)==-1){u8*p=*a;p[26]|=4;}return a;}
void**func_003D4D70(void**a){char*b=*(void**)*a;char*v=*(void**)(b+80);if((*(s32(**)(void*))(v+92))(b+*(s16*)(v+88))){u8*p=*a;p[26]|=4;}return a;}
extern s32 func_003D30B0(void*);extern void func_003D6F68(void*,s8);
void**func_003D4DE8(void**a){u8*p=*a;s32 good;u8 f=p[26];if(f){good=0;p[26]=f|2;}else{void*t=*(void**)(p+4);if(t){s32*b=*(void**)p;if(b[2]==b[1])func_003D4D70(t);}good=1;}if(good){s32 c=func_003D30B0(*(void**)*a);if(c==-1){u8*p=*a;p[26]|=1;}else func_003D6F68(*(void**)*a,(s8)c);}return a;}
