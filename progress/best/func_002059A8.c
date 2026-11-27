typedef struct { float x,y,z; } V;
extern float D_00478468;
extern float func_001CF4C0(V *);
extern float sqrtf(float);
static inline void sub(V *o,V *a,V *b){float x=a->x-b->x,y=a->y-b->y,z=a->z-b->z;o->x=x;o->y=y;o->z=z;}
static inline void add(V *o,V *a,V *b){float x=a->x+b->x,y=a->y+b->y,z=a->z+b->z;o->x=x;o->y=y;o->z=z;}
static inline void scale(V *o,V *a,float b){float x=a->x*b,y=a->y*b,z=a->z*b;o->x=x;o->y=y;o->z=z;}
float func_002059A8(V *a,V *b,V *c,int *count){
 V n,delta,point,scaled; float len,d;
 if(*count==3) return 0;
 ++*count;
 sub(&n,c,b);
 len=func_001CF4C0(&n);
 if(len<D_00478468){n.x=0;n.y=0;n.z=0;}else{n.x/=len;n.y/=len;n.z/=len;}
 sub(&delta,a,b);
 d=delta.x*n.x+delta.y*n.y+delta.z*n.z;
 if(d>=0 && d<=len){
 scale(&scaled,&n,d); add(&point,b,&scaled); sub(&delta,&point,a);
 { float root=sqrtf(delta.x*delta.x+delta.y*delta.y+delta.z*delta.z); return (len*0.5f)*root; }
 }
 return func_002059A8(c,a,b,count);
}
