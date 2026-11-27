typedef struct { int a,b,c; } E;
typedef struct { int a; void *vt; int n,m; E *x,*y,*z; } O;
extern char D_0047A590[]; extern void *D_002AD5A8(int); extern void func_002585C0(E *);
O *func_00258688(O *o,int n,int m) {
 int *mem; E *p,*q; int i,k;
 o->a=0; o->n=n; o->vt=D_0047A590; o->m=m;
 mem=D_002AD5A8(n*12+16); p=(E *)(mem+4); *mem=n; i=n-1; q=p;
 if(n) do { q->a=0; i--; q->b=0; q->c=0; q++; } while(i!=-1);
 n=o->n; o->x=p; mem=D_002AD5A8(n*12+16); p=(E *)(mem+4); *mem=n; i=n-1; q=p;
 if(n) do { q->a=0; i--; q->b=0; q->c=0; q++; } while(i!=-1);
 n=o->m; o->y=p; i=n-1; mem=D_002AD5A8(n*12+16); p=(E *)(mem+4); *mem=n; q=p;
 if(n) do { i--; func_002585C0(q); q++; } while(i!=-1);
 o->z=p; return o;
}
