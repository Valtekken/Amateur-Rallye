/* identical to func_0010CD30 (matched), with its names changed by decompdecomp */
extern s32 func_00297500(void),func_002971F8(s32),func_002972E8(s32),func_002972B8(s32),func_00262838(void);
extern void func_001D4040(void*,const char*),func_001E3EC0(s32,void*,s32),func_002623F0(s32,void*);
extern char D_004448F8[],D_00444908[],D_00445DA8[];
#define RUN(N) if((*(s32**)((u8*)obj+16))[N]){s32 h=func_001E4280();func_001D4040(key,D_004448F8);func_001E3EC0(h,key,(*(s32**)((u8*)obj+16))[N]);{s32 h=func_00262838();func_001D4040(key,D_00445DA8);func_002623F0(h,key);}}
void func_0011B220(void *obj){s32 key[4];s32 h,a,b,c;switch(func_002971F8(func_00297500())){case 7:RUN(0);break;case 1:RUN(1);break;case 2:RUN(2);break;case 3:RUN(3);break;}a=func_001E4280();b=func_002972E8(func_00297500());{s32 d=func_001E4280();c=func_002972B8(func_00297500());c=func_001E3650(d,c);func_001E3EC0(a,(void*)b,c);}h=func_001E4280();func_001D4040(key,D_00444908);func_001E3EC0(h,key,0);}
