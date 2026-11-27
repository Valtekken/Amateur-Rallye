extern void *D_002AD408(int);
extern void func_001D4040(void *, const char *);
extern void func_001DF2B0(void *, int, int);
extern void func_002208A8(void *);
extern int *func_00222CF8(void);
extern int func_00222E60(int, void *);
extern void func_0027B878(void *, int);
extern int D_0044DD18;
extern char D_00479038[];
void *func_00222D40(int arg0) {
 int buf[4]; char tmp[0x170]; int *p; int n, off; int *v; int *q;
 v=D_002AD408(0x24);
 v[2]=0; v[4]=(int)&D_0044DD18; v[3]=0; v[1]=0; v[0]=0; q=v+5; v[5]=0; q[1]=0; q[2]=0; v[8]=0;
 func_001D4040(buf,D_00479038); v[8]=buf[0];
 p=func_00222CF8(); n=(int)((unsigned)(p[1]-p[0])*0xE9BD37A7u)>>4;
 if(n<=0) return 0;
 func_002208A8(tmp);
 { int i; for(i=0;i<n;i++) { func_0027B878(tmp,*func_00222CF8()+i*0x170); func_001DF2B0(v,func_00222E60(arg0,tmp),0); } }
 return v;
}
