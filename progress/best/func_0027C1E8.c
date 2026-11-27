typedef struct N { struct N *next,*prev; int x; } N;
typedef struct V { float x,y,z; } V;
typedef struct S { V v[4]; N *a,*b; int x; } S;
typedef struct I { N *p; } I __attribute__((aligned(16)));
extern N *func_002B1FC0(int);
extern N *func_003D2910(int);
extern void func_00271FC8(N **, I *, N *, N *, int, N *);
extern void func_00272330(N **, I *, N *, N *, int, N *);
static inline void cp(V *d,V *s) { d->x=s->x; d->y=s->y; d->z=s->z; }
S *func_0027C1E8(S *d, S *s) {
 N *p; I t,u; N **a=&d->a; volatile char pad[80];
 cp(&d->v[0],&s->v[0]); cp(&d->v[1],&s->v[1]); cp(&d->v[2],&s->v[2]); cp(&d->v[3],&s->v[3]);
 p=func_002B1FC0(12); if(!p) p=func_003D2910(12);
 d->a=p; p->next=p; d->a->prev=d->a;
 t.p=d->a->next; func_00271FC8(a,&t,s->a->next,s->a,0,t.p);
 p=func_002B1FC0(12); if(!p) p=func_003D2910(12);
 d->b=p; p->next=p; d->b->prev=d->b;
 u.p=d->b->next; func_00272330(&d->b,&u,s->b->next,s->b,0,u.p);
 d->x=s->x; return d;
}
