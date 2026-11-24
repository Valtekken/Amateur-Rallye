typedef struct {float x,y,z;} V;
extern float func_001CF4C0(V*);
extern float D_004265E4,D_00478468;
int func_00232DA8(int unused,V *a,V *b,V *c){
 V x,y,z; float n,t,p,q,r;
 x.x=a->x-b->x; x.y=a->y-b->y; x.z=a->z-b->z;
 do { n=func_001CF4C0(&x); } while(0); if(n<D_00478468){x.x=0;x.y=0;x.z=0;}else{x.x/=n;x.y/=n;x.z/=n;}
 y.x=a->x-c->x; y.y=a->y-c->y; y.z=a->z-c->z;
 n=func_001CF4C0(&y); if(n<D_00478468){y.x=0;y.y=0;y.z=0;}else{y.x/=n;y.y/=n;y.z/=n;}
 z.z=b->z-c->z; z.x=b->x-c->x; z.y=b->y-c->y;
 n=func_001CF4C0(&z); if(n<D_00478468){z.x=0;z.y=0;z.z=0;}else{z.x/=n;z.y/=n;z.z/=n;}
 t=1.0f-D_004265E4; p=__builtin_fabsf(x.x*y.x+x.y*y.y+x.z*y.z);q=__builtin_fabsf(x.x*z.x+x.y*z.y+x.z*z.z);r=__builtin_fabsf(y.x*z.x+y.y*z.y+y.z*z.z);
 return t<p && t<q && t<r;
}
