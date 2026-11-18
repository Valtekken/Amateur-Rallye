void func_003B9520(void*a){s32 n=--*(s32*)((char*)a+20);if(n==0 && a){void*t=*(void**)((char*)a+16);((void(*)(void*,s32,void*))(*(void**)((char*)t+12)))((char*)a+*(s16*)((char*)t+8),3,a);}}
extern s32 func_003CC348(s32,s32,void*,s32);extern s32 D_004361F0;
s32 func_003CC480(s32 a,s32 b,void*c){s32 r=func_003CC348(a,b,c,64);if(!r)D_004361F0=11;return r;}
extern s32 PollSema_2(s32);extern s32 SignalSema_2(s32);extern s32 func_00405E90(void*,s32,s32,void*,s32,void*,s32,s32,s32);
extern s32 D_004361F4;typedef struct Rpc8{s32 w[10];}Rpc8;extern Rpc8 D_0049BC40;extern s32 D_0049BCC0[],D_0049D200[];
s32 func_003CC4B8(s32 a){s32 r;if(PollSema_2(D_004361F4)<0)return -200;if(!D_0049BC40.w[9]){SignalSema_2(D_004361F4);return -100;}D_0049BCC0[0]=a;r=func_00405E90(&D_0049BC40,3,1,D_0049BCC0,48,D_0049D200,4,0,0);if(!r)D_004361F0=3;else SignalSema_2(D_004361F4);return r;}
void func_003CC648(void*a){s32*p=(s32*)((u32)a|0x20000000);s32 i;u8*d;if(p[0]){d=(u8*)p[2];for(i=0;i<p[0];i++)*d++=((u8*)p+16)[i];}if(p[1]){d=(u8*)p[3];for(i=0;i<p[1];i++)*d++=((u8*)p+80)[i];}}
