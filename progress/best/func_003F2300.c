extern char D_000FFFFF;
extern int D_0043E710,D_0043E72C,D_0043E744,D_0049D810;
extern char D_0043F900[],D_0048B5E0[],D_0048B5F0[],D_0048B610[],D_0049D7D0[];
extern int PollSema_2(int),func_003F1E40(int),func_00405CC0(void *,int,int),func_00405E90(void *,int,int,void *,int,void *,int,int,int);
extern void SignalSema_2(int),func_003F1668(void),func_00404EA8(char *),func_004055A0(void *,int),func_00405650(int);
int func_003F2300(int a) {
 int i,r;
 if(D_0043E710>0) func_00404EA8(D_0048B5E0);
 func_003F1668();
 if(PollSema_2(D_0043E72C)!=D_0043E72C) return 6;
 if(func_003F1E40(1)) goto fail;
 func_00405650(0);
 if(D_0043E744<0) {
  do {
   if(func_00405CC0(D_0049D7D0,0x8000059a,0)<0) {
    if(D_0043E710>0) func_00404EA8(D_0048B5F0);
    for(i=0x100000;--i!=-1;) { }
   } else if(*(int *)(D_0049D7D0+0x24)) break;
   else { for(i=0x100000;--i!=-1;) {} }
  } while(1);
  D_0043E744=0;
 }
 D_0049D810=a; func_004055A0(&D_0049D810,4);
 if(func_00405E90(D_0049D7D0,0,0,&D_0049D810,4,D_0043F900,4,0,0)<0) goto fail;
 if(D_0043E710>0) func_00404EA8(D_0048B610);
 r=*(int *)((u32)D_0043F900|0x20000000); SignalSema_2(D_0043E72C); return r;
fail: SignalSema_2(D_0043E72C); r=6; if(a==8) r=-1; return r;
}
