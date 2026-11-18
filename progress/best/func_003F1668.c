typedef struct { char x[48]; } E; typedef struct {E *b,*e,*c;} V;
E *func_003AEFD0(V*);
s32 func_003AF008(register V*a){return a->c-func_003AEFD0(a);}

typedef struct {s32 x,initial,max,other[3];} Sema;
s32 CreateSema_2(Sema*);s32 DeleteSema_2(s32);s32 SignalSema_2(s32);s32 func_00405298(u32);s32 func_0040AF58(void);void func_0040AFA0(void);
extern volatile s32 D_0043E714,D_0043E720,D_0043E728,D_0043E72C,D_0043E730,D_0043E754;
void func_003F1668(void){Sema s;if(D_0043E728==-1 || D_0043E72C==-1){s.other[2]=0;s.max=1;s.initial=1;D_0043E728=CreateSema_2(&s);D_0043E72C=CreateSema_2(&s);s.max=0;D_0043E720=CreateSema_2(&s);D_0043E730=0;}}
void func_003F1700(void){if(D_0043E714){D_0043E754=-1;SignalSema_2(D_0043E720);}DeleteSema_2(D_0043E728);DeleteSema_2(D_0043E72C);DeleteSema_2(D_0043E720);func_0040AF58();func_00405298(0x80000012);func_0040AFA0();}
extern s32 D_0043E724,D_0049D588;extern s32 (*D_0049D584)(s32);
void func_003F17F0(void){if(D_0049D584 && D_0043E724==0)D_0049D584(D_0049D588);}
