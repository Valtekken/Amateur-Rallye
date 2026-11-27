typedef struct P {float x,y;} P;
typedef struct V {P *begin,*end,*limit;} V;
typedef struct S {int a; float b,c,d,e; V v;} S;
typedef struct Q {float x,y,z;} Q;
extern P *func_001562D0(P *,int,void *,int);
extern void func_001565D0(V *,P *,P *);
extern float func_0015ACB0(void),func_0015AD18(void);
extern void func_00260BE8(Q *,S *,Q *,float);
S *func_00260358(S *a) {
 volatile char pad[8]; int tmp[4]; Q in,out; P p; int i; P *q,*end; V *v=&a->v;
 v->begin=0; a->a=0; a->b=0; a->c=0; a->d=0; a->e=0;
 v->end=0; v->limit=0; v->begin=0; v->end=0; v->limit=v->begin;
 v->end=func_001562D0(v->begin,0,tmp,0);
 a->e=255.0f/(2.0f*func_0015ACB0());
 end=v->end; q=v->begin; if(q<end) { q++; do { q++; } while(q<end); }
 { int bytes=(char*)end-(char*)v->begin; v->end=(P*)((char*)end-bytes); }
 for(i=0;i<360;i++) {
 in.x=0; in.y=0; in.z=1.0f;
 func_00260BE8(&out,a,&in,(float)i*func_0015AD18());
 p.x=out.x;p.y=out.z;
 if(v->end!=v->limit) {if(v->end) {v->end->x=p.x;v->end->y=p.y;} v->end++;}
 else func_001565D0(v,v->end,&p);
 } return a;
}
