typedef struct {float x,y,z;} V;
typedef struct {char pad[0x20]; float mass; char pad2[0x1a4]; int active;} Body;
typedef struct {char pad[12]; V normal; char pad2[0x34]; Body *a,*b;} Contact;
extern float func_00241FB0(void *,Contact *);
extern void func_0023E668(Contact *,V *);
extern void func_0023E6A0(Contact *,V *);
void func_00241AD8(void *a, Contact *c) {
 Body *b=c->a,*d=c->b; register V *n=&c->normal;
 float x=func_00241FB0(a,c), y=func_00241FB0(a,c), u,v;
 V p,q,r;
 if(b->active) {if(d->active) {float k=1.0f/(b->mass+d->mass);v=x*d->mass*k;u=y*b->mass*k;} else {v=x;u=0;}}
 else {u=0;if(d->active)u=y;v=0;}
 q.x=n->x*v;q.y=n->y*v;q.z=n->z*v;p.x=q.x;p.y=q.y;p.z=q.z;func_0023E668(c,&p);
 r.x=n->x*u;r.y=n->y*u;r.z=n->z*u;p.x=-r.x;p.y=-r.y;p.z=-r.z;func_0023E6A0(c,&p);
}
