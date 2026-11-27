typedef struct {char *v[6];} S;
extern S D_00482470;
extern char D_00482488[],D_004824B8[],D_004824E0[],D_004824E8[],D_004824F0[],D_004824F8[];
extern void func_003F9698(const char *,...);
void func_002CA280(void *arg) {
 S names; int i; signed char *p=(signed char*)arg;
 names=D_00482470; func_003F9698(D_00482488);
 for(i=0;i<24;i++,p++) {
  if(p[0x84]) {
   int q=i/6;
   func_003F9698(D_004824B8,p[0x84],i,(q&1)?D_004824E0:D_004824E8,(q&2)?D_004824F0:D_004824E8,names.v[i%6]);
  }
 }
 func_003F9698(D_004824F8);
}
