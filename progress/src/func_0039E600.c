/* identical to func_003B3588 (matched), with its names changed by decompdecomp */
extern s32 func_003A3EB0(s32);
s32 func_0039E600(register s32 a){return a==0?0:func_003A3EB0(a*12);}
s32 func_003B3A80(register s32 a){return a;}
s32 *func_003B4B00(register s32 *a,register s32 *b,register s32 *c,register s32 d,register s32 e){s32 n=b-a;while(n>0){*c=*a;a++;c++;n--;}return c;}
extern void *D_002AD408(s32);
extern void *func_0024C090(void*,s32,s32);
void *func_003B56F0(void *unused,s32 **a,void *b){s32 x,y; s32 p,q;void*t;void*r;
t=*(void**)((char*)b+8);((void(*)(void*,s32*))(*(void**)((char*)t+0x94)))((char*)b+*(s16*)((char*)t+0x90),&x);
p=(*a)[x];t=*(void**)((char*)b+8);((void(*)(void*,s32*))(*(void**)((char*)t+0x94)))((char*)b+*(s16*)((char*)t+0x90),&y);
q=(*a)[y];r=func_0024C090(D_002AD408(72),p,q);*(s32*)((char*)r+68)=1;return r;}
