extern s32 func_002B62E0(void),func_002B6018(s32,s32),func_002B6360(s32),func_002B8290(s32),func_002B83F0(void);
extern void func_002B8800(s32*),func_002BC0E0(s32,void*,s32,s32,s32,s32),func_003F9698(void*);
extern u8 D_00428868[],D_0047F8B8[],D_0047F8E0[];
typedef struct{u32 size;u8 flag;u8 pad[3];} OpenInfo;
s32 func_002B85A8(s32*p,s32 name,s32 a,s32 b,s32 force){s32 result=0;s32 cap;OpenInfo info;s32 fs;
if(p[7]||!p[3])p[3]=func_002B6018(func_002B62E0(),name);
fs=p[3];if(fs){u8*v=*(u8**)(fs+8);result=((s32(*)(s32,s32,void*,void*,void*,s32,s32,void*))*(void**)(v+52))(fs+*(s16*)(v+48),name,p+5,D_00428868,p+6,a,b,&info);
if(result){s32*q;if(force||info.flag)func_002BC0E0(p[4],&info,p[6],p[3],p[5],1);else func_002BC0E0(p[4],0,p[6],p[3],p[5],0);q=(s32*)p[4];if(q[0]){cap=*(u16*)((u8*)q+18);p[6]=info.size;}else{if(func_002B6360(p[3])==7)goto big;{s32 kind=func_002B6360(p[3]);cap=8192;if(kind!=1)goto ready;}big:cap=0x10000u;ready:;}{s32 x=func_002B8290(func_002B83F0());p[10]=cap;p[11]=0;p[12]=0;p[13]=0;p[9]=x;func_002B8800(p);}}else{p[6]=0;func_003F9698(D_0047F8B8);}}else func_003F9698(D_0047F8E0);return result;}
