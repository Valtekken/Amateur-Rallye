typedef struct {unsigned short n; char pad[6];} E;
typedef struct {char pad[24]; int total; int x; int size; char pad2[80]; E *begin,*end;} A;
typedef struct {char pad[12]; int size;} Data;
typedef struct O {int refs; char *vt; int x,type; Data *a,*b; int max; int z; int v[4]; int y[4];} O;
extern char D_004854F0[];
extern void *D_002AD408(unsigned);
extern void func_00327D08(void *,int,void *);
static inline void init(O *o) {int *v=o->v;
 o->refs=0;o->x=0;o->a=0;o->b=0;
 o->type=2; o->vt=D_004854F0; o->max=0x7fffffff;
 v[0]=0;v[3]=0;v[1]=0;v[2]=0;o->y[2]=0;
 func_00327D08(o,0x7fffffff,v);
}
void func_0031F2F8(char *self,int arg,A *a) {
 O *o=D_002AD408(64),*p; E *it; int n,sum; char *vt;
 init(o); p=o;if(o)o->refs++;
 it=a->begin;n=a->end-it;sum=0;
 if(n>0) do {unsigned x=it->n; n--;it++;sum+=x;} while(n);
 a->total=sum;a->size=(sum/30)*2;
 vt=*(char**)(self+0x148);
 (*(void (**)(void*,O**,int,A*))(vt+0x7c))(self+*(short*)(vt+0x78),&p,arg,a);
 a->total=p->a->size;a->size=(p->b->size+3)>>2;
 if(p && --p->refs==0){vt=p->vt;(*(void (**)(void*,int))(vt+0xc))((char*)p+*(short*)(vt+8),3);}
}
