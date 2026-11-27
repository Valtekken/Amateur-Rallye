typedef struct {float x,y;} Pair;
typedef struct { Pair *begin,*end,*cap; void *vt; } Vec;
typedef struct { int a,b,c,d; float scale; Vec v; } Obj;
extern char D_0047A268[];
extern Pair *func_001562D0(Pair *, int, void *, int);
extern void func_001565D0(Vec *, Pair *, Pair *);
extern float func_0015ACB0(void),func_0015AD18(void);
extern void func_002615C0(float *,Obj *,float *,float);
Obj *func_00260DD0(Obj *p) {
 volatile int pad[4]; int tmp[4]; float v[4],out[4]; Pair pair; volatile int pad2[4]; int i; Pair *q,*end; unsigned n;
 Vec *vec=&p->v;
 vec->begin=0; p->v.vt=D_0047A268;
 p->a=0;p->b=0;p->c=0;p->d=0; p->scale=0;
 vec->end=0; vec->cap=0; vec->begin=0; vec->end=0; vec->cap=vec->begin;
 vec->end=func_001562D0(vec->begin,0,tmp,0);
 p->scale=255.0f/(2.0f*func_0015ACB0());
 end=vec->end; q=vec->begin; n=(char*)end-(char*)q;
 while(q<end) {q++;}
 vec->end=(Pair*)((char*)end-n);
 for(i=0;i<360;i++) {v[0]=0;v[1]=0;v[2]=1.0f;
 func_002615C0(out,p,v,i*func_0015AD18());
 pair.x=out[0];pair.y=out[2];
 if(vec->end!=vec->cap) {if(vec->end) {vec->end->x=pair.x;vec->end->y=pair.y;} vec->end++;} else func_001565D0(vec,vec->end,&pair);
 } return p;
}
