/* identical to func_00243D68 (matched), with its names changed by decompdecomp */
extern float D_00479B60;
typedef struct V {float x,y,z;} V; typedef struct S {V *a,*b;} S;
static inline float dist(V *a,V *b) {float x=a->x-b->x,y=a->y-b->y,z=a->z-b->z; return x*x+y*y+z*z;}
float func_00242210(void *unused,S *a,S *b) {float d=D_00479B60,t; {float q=dist(a->a,b->a);if(q<d)d=q;} t=dist(a->a,b->b);if(t<d)d=t; {float q=dist(a->b,b->a);if(q<d)d=q;} t=dist(a->b,b->b);if(t<d)d=t; return d;}
