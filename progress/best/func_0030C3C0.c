extern volatile int D_0042D5A0; extern int D_0042D664; extern volatile unsigned D_0042D660;
extern char D_00484970[],D_00484990[],D_004849D0[],D_004849E8[];
extern unsigned short D_004A33C0[],D_004A3BC0[];
extern void func_003F9698(const char *);
void func_0030C3C0(void) {
 unsigned i,n; unsigned short *p;
 if(D_0042D664==-1) {
  func_003F9698(D_00484970); func_003F9698(D_00484990); func_003F9698(D_004849D0); return;
 }
 n=D_0042D660;
 if((unsigned)(D_0042D5A0+n+3)>=1024) {func_003F9698(D_004849E8); return;}
 D_004A33C0[D_0042D5A0+1]=D_0042D664;
 D_004A33C0[D_0042D5A0+2]=D_0042D660;
 p=D_004A3BC0;
 for(i=0;i<n;i++) D_004A33C0[D_0042D5A0+i+3]=*p++;
 n=D_0042D660; D_0042D664=-1; D_0042D5A0+=2; D_0042D660=0; D_0042D5A0+=n; D_004A33C0[0]++;
}
