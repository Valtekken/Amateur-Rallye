typedef struct { float x,y,z; } Vec3;
typedef struct { float x,y,z; } __attribute__((aligned(16))) Vec;
typedef struct { Vec3 n; float d; int id; char pad[12]; Vec normal; } Plane;
typedef struct { void *p0,*p1; } Owner;
extern void *D_002AD408(int);
extern int func_00227850(void *);
extern void *func_00229280(void *);
extern void func_00229B28(void *,Vec *);
extern void func_00229BE0(void *,Vec *);
extern void func_001CF448(Vec *);
extern void func_00229958(void *,Plane *);
extern void func_00226B88(void *,void *);
static inline void cross(Vec *n,Vec *d,Vec *e) { n->z=d->x*e->y-d->y*e->x; n->y=d->z*e->x-d->x*e->z; n->x=d->y*e->z-d->z*e->y; }
void func_0022ABB0(Owner *o,Vec3 *a,Vec3 *b,Vec3 *c) {
 Vec p,q,r; Plane plane; Vec d,e,n; float x,y,z,u,v,w; int id; void *obj;
 id=func_00227850(o->p1);
 p.x=a->x; p.y=a->y; p.z=a->z;
 q.x=b->x; q.y=b->y; q.z=b->z;
 r.x=c->x; r.y=c->y; r.z=c->z;
 obj=func_00229280(D_002AD408(28));
 func_00229B28(obj,&p); func_00229B28(obj,&q); func_00229B28(obj,&r);
 func_00229BE0(obj,&p); func_00229BE0(obj,&q); func_00229BE0(obj,&r);
 plane.n.x=0; plane.n.y=0; plane.n.z=0;
 x=p.x-q.x; y=p.y-q.y; u=p.x-r.x; v=p.y-r.y; z=p.z-q.z; d.x=x; w=p.z-r.z; d.y=y; e.x=u; d.z=z;
 e.y=v; e.z=w; cross(&n,&d,&e);
 func_001CF448(&n);
 plane.id=id; plane.normal.x=n.x; plane.normal.y=n.y; plane.normal.z=n.z;
 plane.n.x=n.x; plane.n.y=n.y; plane.n.z=n.z;
 plane.d=-(n.x*q.x+n.y*q.y+n.z*q.z);
 func_00229958(obj,&plane);
 func_00226B88(o->p1,obj);
}
