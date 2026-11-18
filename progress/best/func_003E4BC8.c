void func_003E4BC8(s32*a,s32 b,s32 c,s32 d,s32 e){s32 v=*a,n=16<<b,r;v=e?v>>1:v;if(c>0){++v;v+=((c-1)<<b)+d;r=v*2;if(v>=n){v-=n*2;goto recalc;}}else{r=v*2;if(c<0){--v;v-=(~c<<b)+d;if(v<-n)v+=n*2;recalc:r=v*2;}}*a=e?r:v;}
s32 func_003E5438(void*,s32);s32 func_003E5848(void*);
void func_003E5C20(s32*a){a[58]=0;a[533]=1;a[531]=a[532]+1;func_003E5438(a,1);func_003E5438(a,5);func_003E5438(a,6);func_003E5438(a,1);func_003E5438(a,6);func_003E5438(a,6);a[105]=func_003E5438(a,1);a[106]=func_003E5438(a,1);func_003E5848(a);}
void func_003E5E80(void*a){func_003E5438(a,1);func_003E5438(a,8);func_003E5438(a,1);func_003E5438(a,7);func_003E5438(a,1);func_003E5438(a,20);func_003E5438(a,1);func_003E5438(a,22);func_003E5438(a,1);func_003E5438(a,22);}
