extern s32 func_002BA330(void*,s32,void*,void*);extern void*func_002B1FC0(s32);
s32 func_002BA390(void**out,void*f,void*ap){s32 r=func_002BA330(0,0,f,ap);s32 n=r+1;if(r>0){void*p=func_002B1FC0(n);*out=p;if(p)return func_002BA330(p,n,f,ap);return -1;}return r;}
typedef void(*Fn)(void);extern Fn*D_00426ABC;
void func_002AD620(void){Fn*p=D_00426ABC;if(*p){do{Fn*n=D_00426ABC+1;D_00426ABC=n;(*(Fn*)((char*)n-4))();}while(*D_00426ABC);}}
extern Fn D_00441FDC[];
void func_002AD678(void){s64 i=(s32)D_00441FDC[0];if(i==-1){for(i=0;D_00441FDC[(s32)(i+1)]!=0;i++);} {s32 n=(s32)i;if(n){Fn*p=D_00441FDC+n;do{Fn f=*p;n--;p--;f();}while(n);}}}
extern void func_002AC8C0(f32*,s32*);
u32 func_002AD250(f32 a){f32 x=a;s32 p[4];s32 v,e;func_002AC8C0(&x,p);v=p[0];if((v^2)==0)return 0;if((u32)v<2)return 0;if(p[1])return 0;e=p[2];if((v^4)==0)return 0xffffffffu;if(e<0)return 0;if(e>=32)return 0xffffffffu;if(e<31)return (u32)p[3]>>(30-e);return (u32)p[3]<<(e-30);}
