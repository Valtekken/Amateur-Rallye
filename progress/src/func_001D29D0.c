typedef void *va_list;
#define va_start(ap,last) ((ap)=__builtin_next_arg(last))
#define va_end(ap) ((void)0)
extern s8 D_0048E1E8[];
extern s32 func_003FDAF0(s8*,const char*,va_list);
extern void func_001D2900(s32,s8*);
extern void D_002AD530(s32); extern s32 D_002AD5A8(s32);
extern void func_003FA8A4(s32,s32); extern s32 func_003FA9B8(s32);
void func_001D29D0(s32 a,const char*f,...){va_list ap;va_start(ap,f);func_003FDAF0(D_0048E1E8,f,(char*)ap-48);func_001D2900(a,D_0048E1E8);va_end(ap);}
void func_001D2CD8(s32*p,s32 s){s32 t;if(*p)D_002AD530(*p);if(s){t=D_002AD5A8(func_003FA9B8(s)+1);*p=t;func_003FA8A4(t,s);}else *p=0;}
void func_001D2D48(s32*p,s32 a,long b){s32 n,i,start;if(!*p)return;n=func_003FA9B8(*p);b=n<b?n:b;start=a>-1?a:0;if(start<b)for(i=start;i<b;i++){u8 c=((u8*)*p)[i];if((u32)(c-65)<26)((u8*)*p)[i]=c+32;}}
extern char D_00475CF0[];extern s32 func_001CE2F8(void);extern s32 func_001D2728(s32*,s32,s32,s32);extern void func_001D2A40(s32*,s32,s32);extern void D_002AD390(s32);
void func_001D3048(s32*p){s32 d,v,n;if(*p){d=(s32)D_00475CF0;v=func_001D2728(p,0,func_001CE2F8(),d);if(v==-1){D_002AD390(*p);*p=0;}else{v++;if(*p)n=func_003FA9B8(*p);else n=0;func_001D2A40(p,v,n);}}}
