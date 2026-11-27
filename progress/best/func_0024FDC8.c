typedef struct N { struct N *next,*prev; int x; } N;
typedef struct { N *a,*b; float x,y,z; int w,id; int v[7]; N *c,*d; } Obj;
extern int func_002B1FC0(int); extern int func_003D2910(int); extern float D_00426508[];
Obj *func_0024FDC8(Obj *o) {
 volatile char pad[0x50]; N *p; float *f; int *v;
 p=(N *)func_002B1FC0(12); if(!p) p=(N *)func_003D2910(12); o->a=p; p->next=p; o->a->prev=o->a;
 p=(N *)func_002B1FC0(12); if(!p) p=(N *)func_003D2910(12); o->b=p; p->next=p; o->b->prev=o->b;
 f=&o->x; v=o->v;
 f[0]=D_00426508[0]; f[1]=D_00426508[1]; o->id=-1; f[2]=D_00426508[2]; o->w=0;
 v[0]=0; v[2]=0; v[1]=0; v[3]=0; v[4]=0; v[5]=0; v[6]=0;
 p=(N *)func_002B1FC0(12); if(!p) p=(N *)func_003D2910(12); o->c=p; p->next=p; o->c->prev=o->c;
 p=(N *)func_002B1FC0(12); if(!p) p=(N *)func_003D2910(12); o->d=p; p->next=p; o->d->prev=o->d;
 return o;
}
