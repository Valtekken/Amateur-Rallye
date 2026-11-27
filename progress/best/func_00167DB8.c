extern void *func_00168378(s32);
extern f32 func_003F3978(f32,f32);
extern f32 sqrtf(f32);
typedef struct { f32 x,y,z; } V;
f32 func_00167DB8(s32 a,V *b,V *c) {
 V p,q,r; f32 n,t,d,k;
 p.x=b->x; p.y=0.0f; p.z=b->z;
 n=p.x*p.x+p.y*p.y+p.z*p.z;
 if(n<=1.1920929e-7f) { p.x=0; p.z=0; }
 else { { f32 one=1.0f; t=sqrtf(n); one=one/t; t=one; } p.x*=t;p.y*=t;p.z*=t; }
 q.x=c->x;q.y=0.0f;q.z=c->z;
 n=q.x*q.x+q.y*q.y+q.z*q.z;
 if(n<=1.1920929e-7f) { q.x=0;q.z=0; }
 else { t=1.0f/sqrtf(n);q.x*=t;q.y*=t;q.z*=t; }
 r.x=p.z;r.y=0;r.z=-p.x;
 k=r.x*q.x+r.y*q.y+r.z*q.z;
 d=p.x*q.x+p.y*q.y+p.z*q.z;
 t=func_003F3978(__builtin_fabsf(k),*(f32*)((char*)func_00168378(a)+0x14));
 if(d<0) t+=1.0f;
 if(k<0) t=-t;
 return t;
}
