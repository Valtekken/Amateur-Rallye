extern void func_002AC8C0(f32*,s32*);
u32 func_002AD250(f32 a){f32 x=a;s32 p[4];s32 v,e;func_002AC8C0(&x,p);v=p[0];if((v^2)==0)return 0;if((u32)v<2)return 0;if(p[1])return 0;e=p[2];if((v^4)==0)return 0xffffffffu;if(e<0)return 0;if(e>=32)return 0xffffffffu;if(e>=31)return (u32)p[3]<<(e-30);return (u32)p[3]>>(30-e);}
