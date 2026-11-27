typedef struct { float x,y,z; } V;
typedef struct E { char pad[64]; V p; char pad2[4]; } E;
typedef struct { E *start,*end; } L;
typedef struct { float y; L *list; } A;
extern float D_0047834C;
V *func_001FEC80(V *out,A *a,V *v,E **result) {
 E *p,*best; float dist=D_0047834C; V *q; volatile char pad[32];
 for(p=a->list->start;p!=a->list->end;p++) {
  V d; volatile V t; float x,y,z,length;
  q=&p->p;
  x=q->x; t.x=x; y=q->y; t.y=y; z=q->z; t.z=z;
  x-=v->x; y-=v->y; z-=v->z; d.x=x; d.y=y; d.z=z;
  length=__builtin_sqrtf(x*x+y*y+z*z);
  {int c=length<dist; if(c) {
   x=q->x; t.x=x; y=q->y; t.y=y; z=q->z; t.z=z;
   x-=v->x; y-=v->y; z-=v->z; d.x=x; d.y=y; d.z=z;
   dist=__builtin_sqrtf(x*x+y*y+z*z);
   best=p; a->y=q->y;
  }}
 }
 *result=best; out->x=best->p.x; out->y=best->p.y; out->z=best->p.z; return out;
}
