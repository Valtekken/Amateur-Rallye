extern void func_003F94D0(void*,s32,s32);extern s32 func_002BDB28(void);extern s32*func_002BD648(s32,s32,s32,s32);extern void func_002BD590(s32,void*,s32);
s32 func_002B7CB8(u8*p,s32 name,void**out,s32 d,s32*size,s32 f,s32 g,void*info){s32 h,ctx;s32*r;u8*v;if(info)func_003F94D0(info,0,8);v=*(u8**)(p+8);h=((s32(*)(void*,s32))*(void**)(v+124))(p+*(s16*)(v+120),name);ctx=func_002BDB28();r=func_002BD648(ctx,h,1,0);func_002BD590(ctx,r,1);*size=r?r[1]:0;*out=r;return 1;}

extern s64 func_002ABF88(s64,s64);
void func_002B9BE0(s32 n){s64 v=(s64)0xffc0<<46;if(n){do{n--;v=func_002ABF88(v,(s64)0x8048<<47);}while(n);}}
extern s32 D_00428888;extern u8 D_0047EEB8[];
void*func_002B5D78(u8*p){*(void**)(p+84)=D_0047EEB8;if(!D_00428888){s32 i=0; s32*a=(s32*)(p+4),*b=(s32*)(p+44);D_00428888=1;*(s32*)p=0;do{*a=i;*b=0;i++;b++;a++;}while(i<10);}return p;}
extern s64 func_0040C4D0(void),func_0040C758(s64),func_002ABF20(s64,s64);extern s32 func_002AC4B0(s64,s64);
s64 func_002B9C30(s64 a){s64 v=func_0040C4D0();return func_002AC4B0(func_002ABF20(a,func_0040C758(v)),(s64)0xff80<<46)<0?v:v+1;}
