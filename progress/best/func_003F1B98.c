extern int D_0043E710,D_0043E71C,D_0043E728,D_0043E738,D_0049D590; extern int D_0043F8D0[], D_0049D598[]; extern char D_0048B510[],D_0048B538[];
extern void func_003F1668(void), ReferThreadStatus_2(int,void *), SignalSema_2(int),func_00404EA8(char *,...),func_00405650(int);
extern int PollSema_2(int),func_003F1DA0(int),func_00405CC0(void *,unsigned int,int);
int func_003F1B98(int a) {
 int i;
 func_003F1668();
 if(PollSema_2(D_0043E728) != D_0043E728) { if(D_0043E710>0) func_00404EA8(D_0048B510,a,D_0043E71C); return 0; }
 D_0043E71C=a; ReferThreadStatus_2(D_0049D590,D_0049D598);
 if(func_003F1DA0(1)) {SignalSema_2(D_0043E728); return 0;}
 func_00405650(0);
 if(D_0043E738<0) { for(;;) { if(func_00405CC0(D_0043F8D0,0x80000595,0)<0) { if(D_0043E710>0) func_00404EA8(D_0048B538); for(i=0x100000;--i!=-1;) {} continue; } if(!D_0043F8D0[9]) {for(i=0x100000;--i!=-1;) {} continue;} D_0043E738=0; break; } }
 return 1;
}
