typedef struct {s32 value;} CopyTag;extern s32 func_002C5160(s32,s32,s32,CopyTag);
s32 func_003978C8(register s32 a,register s32 b,register s32 c,register s32 d){return func_002C5160(a,b,c,(CopyTag){0});}
extern s32 func_003D8118(void*);
s32 func_003D6C70(s32*a,s32 n){s32 left=n;do{s32 cur=a[1];s32 k=a[2]-cur;if(k>0){k=left<k?left:k;cur+=k;left-=k;a[1]=cur;}if(!left)break;}while(func_003D8118(a)!=-1);return n-left;}
s32 func_003D6E00(void*a,s32 b,s32 c){char*v=*(void**)((char*)a+80);return (*(s32(**)(void*,s32,s32,s32))(v+68))((char*)a+*(s16*)(v+64),b,0,c);}
extern u8 D_00489090[];extern void func_003D8820(void*,s32);extern void D_002AD390(void*);
void func_003D6EE8(void*a,u32 b){*(void**)((char*)a+80)=D_00489090;func_003D8820(a,0);if(b&1){void(*f)(void*)=D_002AD390;f(a);}}
