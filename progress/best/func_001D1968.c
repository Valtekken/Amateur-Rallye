extern void func_003F9698(char*,...),func_001D4040(void*,char*),func_00200250(void*);
extern int *func_001E3700(int,void*); extern float func_001E3610(int,void*); extern void *func_001D4010(void*);
typedef struct {float a; int b,c,d,e,f,g,h,i; float vol;} Sound;
extern Sound *func_002003C0(void);
extern char D_0044ED08[],D_0046FD30[],D_0046FD90[],D_0046FDD8[],D_0046FDE8[];
void func_001D1968(void) {
 int sp0[4],sp10[4]; void *q; int a; Sound *p;
 func_003F9698(D_0046FD30,D_0046FD90,0x36);
 a=func_001E4280(); func_001D4040(sp10,D_0046FDD8); q=sp10; sp0[0]=*func_001E3700(a,q);
 p=func_002003C0(); a=func_001E4280(); func_001D4040(q,D_0044ED08); p->vol=func_001E3610(a,q);
 func_003F9698(D_0046FDE8,func_001D4010(sp0),0x3fecccccc0000000ULL,D_0046FD90,0x3a);
 func_002003C0()->a=0.9f; func_002003C0()->e=sp0[0]; func_002003C0()->d=1; func_002003C0()->g=0; func_00200250(func_002003C0());
}
