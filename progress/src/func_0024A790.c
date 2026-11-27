typedef struct { float x,y,z; } V;
typedef struct { char pad[0xa0]; V pos; char pad2[0x70]; V vel; V ang; } B;
static inline void sub(V *o,V *a,V *b){float x=a->x-b->x,y=a->y-b->y,z=a->z-b->z;o->x=x;o->y=y;o->z=z;}
static inline void cross(V *o,V *a,V *b){float x=a->y*b->z-a->z*b->y,y=a->z*b->x-a->x*b->z,z=a->x*b->y-a->y*b->x;o->x=x;o->y=y;o->z=z;}
static inline void add(V *o,V *a,V *b){float x=a->x+b->x,y=a->y+b->y,z=a->z+b->z;o->x=x;o->y=y;o->z=z;}
extern float D_00478468;
extern float func_001CF4C0(V *);
extern int func_0024AA40(int,int,int,V*,V*,int);
extern void func_002433F8(int,V*,int);
void func_0024A790(int a, V *p, int b, B *c, B *d, int e) {
 V n, v1, t1, r1, t2, r2;
 float len;
 sub(&r1,p,&c->pos); cross(&t1,&c->ang,&r1); add(&v1,&c->vel,&t1);
 sub(&r2,p,&d->pos); cross(&t2,&d->ang,&r2); add(&t1,&d->vel,&t2);
 sub(&n,&v1,&t1);
 len=func_001CF4C0(&n);
 if(len<D_00478468) { n.x=0; n.y=0; n.z=0; } else {n.x/=len; n.y/=len; n.z/=len;}
 v1.x=p->x-n.x; v1.y=p->y-n.y; v1.z=p->z-n.z; t1.x=n.x; t1.y=n.y; t1.z=n.z;
 if(!func_0024AA40(a,b,0,p,&v1,e)) {
 r1.x=p->x+n.x; r1.y=p->y+n.y; r1.z=p->z+n.z; t2.x=n.x; t2.y=n.y; t2.z=n.z;
 if(!func_0024AA40(a,b,0,p,&r1,e)) func_002433F8(b,p,e);
 }
}
