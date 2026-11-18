extern void func_003DF4B0(s32);
void func_003DF518(s32 a){func_003DF4B0(a+8);}
s64 func_003DBBB8(s64 a,u64 b){
s32 t=((s32)(a>>32)&0x7ff00000)+0xfcc00000;
union {u64 u; u32 w[2];} r;
if(t>0){r.w[1]=t;r.w[0]=0;}
else {s32 e=(-t)>>20;if(e<20){r.w[1]=0x80000>>e;r.w[0]=0;}else {e-=20; b &= 0xffff0000ULL; r.u=b; r.w[0]=e<31?1<<(31-e):1;}}
return r.u;
}
s32 func_003DB9C0(void *a,void *b){
s32 n=*(s32*)((char*)b+16),d=*(s32*)((char*)a+16)-n;
u32 *base,*p,*q;
if(d)return d;
base=(u32*)((char*)a+20);p=base+n;q=(u32*)((char*)b+20)+n;
do{--p;--q;if(*p!=*q)return *p<*q?-1:1;}while(p>base);
return 0;}
extern s32 func_003DB208(s32,s32,s32);
extern s32 D_0043A970[];
s32 func_003DB7C8(s32 a,s32 n){if(n>=7){do{a=func_003DB208(a,0x3d09,0);n-=6;}while(n>=7);}if(n==0)return a;return func_003DB208(a,D_0043A970[n-1],0);}
