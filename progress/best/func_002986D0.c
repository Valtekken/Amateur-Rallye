extern void *D_002AD408(int);
extern int D_0044DD18;
extern char D_0047BBE0[];
extern int func_001E2460(void *, void *);
extern int func_001E2C78(void *, const char *, int);
static inline void z(int *p) { p[0]=0; p[2]=0; p[1]=0; }
void *func_002986D0(int *a) {
 int *p = D_002AD408(0x24); char t[32];
 p[2]=0; p[4]=(int)&D_0044DD18; p[3]=0; p[1]=0; p[0]=0;
 p[5]=p[7]=p[6]=p[8]=0;
 func_001E2460(t+16,p); func_001E2C78(t+16,D_0047BBE0,a[3]); return p;
}
