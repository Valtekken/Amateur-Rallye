typedef struct {float x,y,z;} V;
extern float sqrtf(float);
static inline V* cross(V*r,V*a,V*b){float ax=a->x,ay=a->y,az=a->z,bx=b->x,by=b->y,bz=b->z;r->x=ay*bz-az*by;r->y=az*bx-ax*bz;r->z=ax*by-ay*bx;return r;}
static inline V* add(V*r,V*a,V*b){r->x=a->x+b->x;r->y=a->y+b->y;r->z=a->z+b->z;return r;}
static inline V* sub(V*r,V*a,V*b){r->x=a->x-b->x;r->y=a->y-b->y;r->z=a->z-b->z;return r;}
static inline V* mul(V*r,V*a,float f){r->x=a->x*f;r->y=a->y*f;r->z=a->z*f;return r;}
static inline float dot(V*a,V*b){return a->x*b->x+a->y*b->y+a->z*b->z;}
V *func_0023DBA0(V*out,void*unused,void*p){
V zero,a,b,c,f,d,e,g;float n;
*(u32*)&zero.x=0;*(u32*)&zero.y=0;*(u32*)&zero.z=0;
if(*(int*)((char*)p+40)==0){cross(out,(V*)((char*)*(void**)((char*)p+80)+296),(V*)((char*)p+12));}
else {V *axis=(V*)((char*)p+12),*u=(V*)((char*)p+44),*v=(V*)((char*)p+56);V *av=(V*)((char*)*(void**)((char*)p+76)+296),*bv=(V*)((char*)*(void**)((char*)p+80)+296);cross(&a,u,v);cross(&b,av,u);cross(&c,bv,v);cross(&e,&b,v);cross(&d,u,&c);add(&f,&d,&e);mul(&g,axis,dot(axis,&f));sub(&d,&f,&g);n=sqrtf(dot(&a,&a));out->x=d.x/n;out->y=d.y/n;out->z=d.z/n;d.x=out->x;d.y=out->y;d.z=out->z;}
return out;
}
