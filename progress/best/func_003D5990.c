extern void func_003CDDB0(void**,s32,s32,s32,s32);extern void func_003CE0D0(void**,s32,s32);
void *func_003D0178(void**p,s8*pos,s8*end){s32 diff=pos-(s8*)*p;s8*v;func_003CDDB0(p,diff,end-pos,0,0);v=*p;if(*(u32*)(v-8)>=2){func_003CE0D0(p,*(s32*)(v-16),1);v=*p;}*(s32*)(v-4)=1;return v+diff;}
s64 func_003D5278(void **a,s32 b){u8*p=*a;u64 v=*(u64*)(p+16);s32 bit=v&1;if(b)v|=1;else v&=~1;*(u64*)(p+16)=v;return bit;}
extern s32 func_003D6F68(s32,s8);extern s32 func_003D6F88(s32);
void**func_003D5938(void**a,s8 b){u8*p=*a;if(!p[26]){if(func_003D6F68(*(s32*)p,b)==-1){u8*q=*a; q[26]=4; return a;}}return a;}
void**func_003D5990(void**a){u8*p=*a;if(!p[26]&&func_003D6F88(*(s32*)p)==-1){u8*q=*a; q[26]=4; return a;}return a;}
