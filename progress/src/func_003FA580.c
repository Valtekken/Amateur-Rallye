extern u8 D_0048BD29[];
static __inline__ s32 low(s32 c){s32 r=c+32;if(!(D_0048BD29[c]&1))r=c;return r;}
s32 func_003FA580(s8*a,s8*b){s8*p=a,*q=b;while(*p){s32 c=(s8)*(u8*)p,d=*q; s32 x=low(c),y=low(d);if(x!=y)break;p++;q++;}return low((u8)*p)-low((u8)*q);}
