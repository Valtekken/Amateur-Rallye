extern void func_002AC8C0(float*,s32*);
s32 func_002AD1C0(float a){s32 p[4];u32 v;func_002AC8C0(&a,p);if(((u32)p[0]^2)==0)return 0;else if((u32)p[0]<2)return 0;if((p[0]^4)==0)goto sat;if(p[2]<0)return 0;if(p[2]<31)goto convert;sat:return p[1]?0x80000000:0x7fffffff;convert:v=(u32)p[3]>>(30-p[2]);return p[1]?-v:v;}
