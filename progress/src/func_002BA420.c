typedef void*va_list;
#define va_start(ap,last) (ap=(char*)__builtin_next_arg(last)-48)
#define va_end(ap) ((void)0)
extern void func_003F94D0(void*,s32,s32);extern s32 func_002BDB28(void);extern void*func_002BD648(s32,s32,s32,s32);extern void func_002BD590(s32,void*,s32);
s32 func_002B7CB8(void*a,s32 b,void**out,s32 d,s32*size,s32 f,s32 g,void*info){s32 ctx,h,v;void*p;char*t;if(info)func_003F94D0(info,0,8);t=*(char**)((char*)a+8);ctx=(*(s32(**)(void*,s32))(t+124))((char*)a+*(s16*)(t+120),b);h=func_002BDB28();p=func_002BD648(h,ctx,1,0);func_002BD590(h,p,1);v=0;if(p)v=*(s32*)((char*)p+4);*size=v;*out=p;return 1;}
extern void func_002BA390(s32*,const char*,va_list);
void func_002BA420(s32*a,const char*b,...){va_list ap;va_start(ap,b);*a=0;func_002BA390(a,b,ap);va_end(ap);}
static inline u32 findch(char*p,u32 n,char*c){u32 j=0;for(;j<n;j++){if(p[j]==*c)return j;}return 0xFFFFFFFFu;}
u32 func_002B5220(char**a,char*set,u32 pos,u32 count){char*p=*a;u32 len=*(u32*)(p-16),i,j,found;volatile char tmp;if(len){i=len-1;if(pos<i)i=pos;i++;if(i){i--;do{u8 c=p[i];tmp=c;j=0;found=0xFFFFFFFFu;if(count){do{if(set[j]==(s8)c){found=j;break;}j++;}while(j<count);}if(found!=0xFFFFFFFFu)return i;}while(i--);}}return 0xFFFFFFFFu;}
extern void func_002B2028(void*);
void func_002BAFB0(s32*a){s32 n=a[0],i;if(n){i=0;if(n>0){do{s32 off=i<<5;char*vt=*(char**)(a+4);void(*fn)(void*,s32)=*(void(**)(void*,s32))(vt+44);i++;fn((char*)a+*(s16*)(vt+40),*(s32*)(a[2]+off+8));}while(i<a[0]);}func_002B2028((void*)a[2]);a[0]=0;a[1]=0;a[2]=0;a[3]=0;}}
