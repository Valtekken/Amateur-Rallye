extern void func_003D13B0(void*);extern char D_00488D20[];extern s32 func_003F9288(void*,s32,u32);
s32 func_003CEA50(register char**a,register s32 b,register u32 c,register u32 d){s32 r;u32 n;char*p=*a;if(*(u32*)(p-16)<c)func_003D13B0(D_00488D20);n=*(u32*)(*a-16)-c;r=func_003F9288(*a+c,b,d<n?d:n);if(!r)r=*(u32*)(*a-16)-c-d;return r;}
extern void**func_003D4D70(void**);extern s32 func_003DA6B8(void*);extern s32 func_003D4EA0(void**);
s32 func_003D5A40(void**a){u8*p=*a;s32 good,r;u8 f=p[26];if(f){good=0;p[26]=f|2;}else{void*t=*(void**)(p+4);if(t){s32*b=*(void**)p;if(b[2]==b[1])func_003D4D70(t);}good=1;}r=-1;if(good){s32 c=func_003DA6B8(*(void**)*a);r=c;if(c==-1){u8*p=*a;p[26]|=1;r=c;}}return r;}
s32 func_003D5B48(void**a){u8*p=*a;u8 f=p[26];s32 r;if(f){p[26]=f|2;return 0;}else{void*t=*(void**)(p+4);if(t)func_003D4D70(t);r=1;if((s32)(*(s64*)((char*)*a+16)&1))return func_003D4EA0(a);}return r;}
s32 func_003D5BC8(void**a,s32 n){u8*p=*a;u8 f=p[26];s32 r;if(f){p[26]=f|2;return 0;}else{void*t=*(void**)(p+4);if(t){s32*b=*(void**)p;if(!n||(s32)(b[2]-b[1])<n)func_003D4D70(t);}r=1;if(!n){if((s32)(*(s64*)((char*)*a+16)&1))return func_003D4EA0(a);}}return r;}
