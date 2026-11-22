typedef struct { float x,y,z; } V;
typedef struct { V *begin,*end,*cap; } A;
extern int func_002AD350(float);
extern void func_003F9698(const char *, ...);
extern int D_004262B0[];
extern char D_004767D0[],D_00476810[],D_00476818[],D_00476820[];
void func_001DB808(A *a, char *name) {
 V *p;
 if (!name) name=D_00476818;
 func_003F9698(D_004767D0,name,a->end-a->begin,a->cap-a->begin);
 D_004262B0[3]++;
 for(p=a->begin;p!=a->end;p++) {
  int i=p-a->begin;
  int x=func_002AD350(p->x);
  int y=func_002AD350(p->y);
  int z=func_002AD350(p->z);
  func_003F9698(D_00476820,i,x,y,z);
 }
 D_004262B0[3]--;
 func_003F9698(D_00476810);
}
