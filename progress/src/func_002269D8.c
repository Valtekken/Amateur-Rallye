typedef struct { float x,y,z; } V;
typedef struct { int *begin,*end; int unk; V a,b; } S;
extern void func_00226C10(S *),func_0022A708(int,V *);
void func_002269D8(S *s,V *out) {
 V t, sum; V *a,*b; int i,n;
 func_00226C10(s); a=&s->a; b=&s->b;
 sum.y=a->y+b->y; sum.z=a->z+b->z; sum.x=a->x+b->x;
 out->z=sum.z*0.5f; out->y=sum.y*0.5f; out->x=sum.x*0.5f;
 t.x=out->x; t.y=out->y; t.z=out->z; n=s->end-s->begin;
 for(i=0;i<n;i++) { int *p=s->begin; int x; p+=i; x=*p; t.x=-out->x; t.y=-out->y; t.z=-out->z; func_0022A708(x,&t); }
}
