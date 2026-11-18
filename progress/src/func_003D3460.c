extern u8 D_00437E18[];extern void func_002B2028(void*);
void func_003D1220(u32*a){u32 n=a[1];if(n+16>=129){func_002B2028(a);return;}{u32*p=(u32*)(D_00437E18+((((n+23)>>3)-1)<<2));*a=*p;*p=(u32)a;}}
extern char D_00488D30[];
char *func_003D1EE0(char **a){char*p=a[1];u32 n=*(u32*)(p-16);if(!n)return D_00488D30;p[n]=0;return a[1];}
extern u8 D_00488D80[];extern void*func_003CD828(void*,char*);
void *func_003D1F08(void**a,char**b){char*q=*b;void*p=q-16;void**dst=&a[1];a[0]=D_00488D80;if(*(s32*)((char*)p+12))q=func_003CD828(p,q);else ++*(s32*)((char*)p+8);*dst=q;return a;}
s32 func_003D3460(void**a){void*b=*(void**)*a;if(!b)return -1;{void*v=*(void**)((char*)b+80);s32 r=(*(s32(**)(void*))((char*)v+92))((char*)b+*(s16*)((char*)v+88));if(r){u8*s=(u8*)*a;s[26]|=4;return -1;}return 0;}}
