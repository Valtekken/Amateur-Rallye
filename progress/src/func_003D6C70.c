extern s32 func_003D8118(void*);
s32 func_003D6C70(s32*a,s32 n){s32 left=n;do{s32 k=a[2]-a[1];if(k>0){k=left<k?left:k;a[1]+=k;left-=k;}if(!left)break;}while(func_003D8118(a)!=-1);return n-left;}
