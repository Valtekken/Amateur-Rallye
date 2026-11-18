extern void *func_002AFEB8(s32,void*);
typedef struct {u8 b[24];} Block24;
void *func_003A61F0(register void *a,register void *b){Block24 *p=func_002AFEB8(24,a);if(p)*p=*(Block24*)b;return p;}
extern u32 D_0043C3B0[];
void func_003F0B48(u32 a){D_0043C3B0[4]=a;}
extern void func_003F0FD4(void);
s32 func_003F0F58(void){volatile u32 *p=(void*)0x80000000;u32 t=(u32)func_003F0FD4|0x80000000;do{if(*p==t){u32 v=p[-1];if(v&&v==p[-2]&&v==p[-3]){*p=v;return 0;}}p++;}while((u32)p!=0x80008000);return 0;}
extern s32 CreateSema_2(void*);
extern s32 SetAlarm_2(u16,void*,s32);
extern s32 WaitSema_2(s32),DeleteSema_2(s32);
extern void func_003F12A8(void);
void func_003F12D0(u32 a){s32 p[6];s32 s;a &=65535;p[1]=1;p[2]=0;p[5]=0;s=CreateSema_2(p);SetAlarm_2(a&65535,func_003F12A8,s);WaitSema_2(s);DeleteSema_2(s);}
