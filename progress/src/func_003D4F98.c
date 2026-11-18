extern void func_003D4D70(void*);extern void func_003D5050(void**);
void**func_003D4F98(void**a,s32 b,s32 c){u8*p=*a;s32 ok;if(p[26])ok=0;else{void*t=*(void**)(p+4);if(t)func_003D4D70(t);ok=1;}if(ok){char*q=*(void**)*a;char*v=*(void**)(q+80);if((*(s32(**)(void*,s32,s32))(v+52))(q,b,c)!=c){u8*p=*a;p[26]|=2;}if(*(s64*)((char*)*a+16)&0x6000)func_003D5050(a);}return a;}
