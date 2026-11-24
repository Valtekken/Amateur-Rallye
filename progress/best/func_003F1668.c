typedef struct {s32 x,initial,max,other[3];} Sema;
s32 CreateSema_2(Sema*);
extern s32 D_0043E728; extern volatile s32 D_0043E720,D_0043E72C,D_0043E730;
void func_003F1668(void){Sema s;if(D_0043E728==-1 || D_0043E72C==-1){s.other[2]=0;s.max=1;s.initial=1;D_0043E728=CreateSema_2(&s);D_0043E72C=CreateSema_2(&s);s.max=0;D_0043E720=CreateSema_2(&s);D_0043E730=0;}}
