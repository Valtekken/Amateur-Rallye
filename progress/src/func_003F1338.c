typedef struct { char x[48]; } E; typedef struct {E *b,*e,*c;} V;
E *func_003AEFD0(V*);
s32 func_003AF008(register V*a){return a->c-func_003AEFD0(a);}
s64 func_003F1DA0(s32); s32 func_0040AF58(void); void func_0040AFA0(void);
extern s32 D_0049D580;
s32 func_003F1338(s32 a){s32 old; s32 r;if(func_003F1DA0(1)==0){func_0040AF58();old=D_0049D580;D_0049D580=a;func_0040AFA0();r=old;}else return 0;return r;}
s32 iSignalSema_2(s32); extern volatile s32 D_0043E714,D_0043E720,D_0043E728,D_0043E730,D_0043E754,D_0043E758;
void func_003F1390(volatile s32*a){D_0043E754=*a;D_0043E758=D_0043E754;if(D_0043E754==11){D_0043E754=0;D_0043E730=0;return;}iSignalSema_2(D_0043E728);if(D_0043E714 && D_0049D580)iSignalSema_2(D_0043E720);else D_0043E730=0;D_0043E754=0;}
extern u8 D_20000010,D_20000050;
void func_003F15C8(u32 a){s32 *p=(s32*)(a|0x20000000);s32 i;u8*d;u8*src;if(p[0]>0){d=(u8*)p[2];src=(u8*)((u32)p+((u32)&D_20000010-0x20000000));for(i=0;i<p[0];i++)d[i]=src[i];}if(p[1]>0){d=(u8*)p[3];src=(u8*)((u32)p+((u32)&D_20000050-0x20000000));for(i=0;i<p[1];i++)d[i]=src[i];}func_003F1390(&D_0043E754);}
