void func_003E7498(void*,s32);
typedef struct R {s64 zero;u32 base,cur;s32 x,pad;s64 bits;u32 p,end,size;} R;
void func_003E75C8(R*a,s32 b){s32 k=b*8;s64 t=k+a->bits;u32 p;a->zero=0;p=a->base+((s64)(t<<29)>>32);a->x=0;a->bits=t;a->cur=p;if(p>=a->end)a->cur=p-a->size;func_003E7498(a,0);}
void func_003E4BC8(s32*a,s32 b,s32 c,s32 d,s32 e){register s32 *p=a;register s32 v=*p; s32 n=16<<b,r;v=e?v>>1:v;if(c>0){++v;v+=((c-1)<<b)+d;r=v*2;if(v>=n){v-=n*2;goto recalc;}}else{r=v*2;if(c<0){--v;v-=(~c<<b)+d;if(v<-n)v+=n*2;recalc:r=v*2;}}*p=e?r:v;}
void func_003E7660(char**a){char*p=*a;if(p){do{if(*(s32*)p){char*v=*(char**)(p+16);(*(void(**)(void*))(v+12))(p+*(s16*)(v+8));}p=*(char**)(p+12);}while(p);}}
