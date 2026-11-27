extern int PollSema_2(int), ReferThreadStatus_2(int,void *), SignalSema_2(int);
extern void func_003F1668(void),func_00405650(int); extern int func_003F1E40(int),func_00405CC0(void *,int,int); extern void func_00404EA8(char *,...);
extern int D_0043E710,D_0043E718,D_0043E72C,D_0043E748,D_0049D590; extern char D_00440148[],D_0048B570[],D_0048B598[],D_0049D598[];
int func_003F1EB0(int a) { int i;
 func_003F1668(); if(D_0043E72C!=PollSema_2(D_0043E72C)){if(D_0043E710>0)func_00404EA8(D_0048B570,a,D_0043E718);return 0;}
 D_0043E718=a;ReferThreadStatus_2(D_0049D590,D_0049D598);if(func_003F1E40(1)){SignalSema_2(D_0043E72C);return 0;}
 func_00405650(0);if(D_0043E748<0){do {while(func_00405CC0(D_00440148,0x80000593,0)<0){if(D_0043E710>0)func_00404EA8(D_0048B598); for(i=0x100000;--i!=-1;){} } if(*(int*)(D_00440148+0x24))break; for(i=0x100000;--i!=-1;){} }while(1); D_0043E748=0;}return 1;}
