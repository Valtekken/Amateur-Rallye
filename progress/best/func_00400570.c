s32 func_003FF9D8(s32 a,s32*out,u8*s,s32 n){s32 tmp,r;s32*p=out?out:&tmp;if(!s)goto zero;if(n)goto convert;r=-1;goto end;zero:r=0;goto end;convert:*p=*s;r=*s;r=r!=0;end:return r;}
typedef union{ s64 q;struct{s32 lo,hi;}w;} DU;
s64 func_00400570(s64 a,s64 b){register s32 k=((s32)(a>>32)&0x7ff00000)+(s32)0xfcc00000;register DU u;u.q=b;if(k>0){u.w.lo=0;u.w.hi=k;}else{k=(-k)>>20;if(k<20){u.w.lo=0;u.w.hi=0x80000>>k;}else{u.w.hi=0;k-=20;{register s32 t;if(k<31)t=1<<(31-k);else t=1;u.w.lo=t;}}}return u.q;}
s64 func_00400608(void*,s32*);s64 func_002AC230(s64,s64);
s64 func_00400908(s32*a,s32*b){s32 z[2];s64 r=func_00400608(a,&z[0]),s=func_00400608(b,&z[1]);s32 n=(z[0]-z[1])+((a[4]-b[4])<<5);DU u;if(n>0){u.q=r;u.w.hi+=(n<<20);r=u.q;}else{u.q=s;u.w.hi-=(n<<20);s=u.q;}return func_002AC230(r,s);}
extern s64 D_0048C5F0[];s64 func_002ABF88(s64,s64);
s64 func_004009C8(s32 n){s64 v=(s64)0xffc0<<46;if(n<24)return D_0048C5F0[n];if(n>0)do{n--;v=func_002ABF88(v,(s64)0x8048<<47);}while(n>0);return v;}
