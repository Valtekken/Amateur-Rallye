typedef struct {float x,y,z;} V;
typedef struct {int id; float r;} O;
typedef struct R {int refs; char *vt; char pad[12]; V *v;} R;
extern void func_00233CA8(O *); extern void func_0024F6E0(R **,int);
int func_00234118(O *a,O *b){V x; union { V y; R *r; } u; R *r2,*t1,*t2; V *v; float dx,dy,dz,t;
func_00233CA8(a);func_00233CA8(b);
func_0024F6E0(&u.r,a->id);t1=u.r;v=t1->v;x.x=v->x;x.y=v->y;x.z=v->z;
if(t1 && --t1->refs==0){char *vt=t1->vt; ((void (*)(void *,int))*(void **)(vt+12))((char *)t1+*(short *)(vt+8),3);}
func_0024F6E0(&r2,b->id);t2=r2;v=t2->v;u.y.x=v->x;u.y.y=v->y;u.y.z=v->z;
if(t2 && --t2->refs==0){char *vt=t2->vt; ((void (*)(void *,int))*(void **)(vt+12))((char *)t2+*(short *)(vt+8),3);}
dx=x.x-u.y.x;dy=x.y-u.y.y;dz=x.z-u.y.z;t=a->r+b->r;
return dx*dx+dy*dy+dz*dz<t*t;
}
