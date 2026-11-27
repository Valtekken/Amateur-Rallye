typedef struct { float x,y,z; } V;
typedef struct { char pad[28]; int idx[3]; char tail[12]; } Tri;
typedef struct { Tri *begin,*end; } Arr;
typedef struct { char pad[56]; V **vertices; } Mesh;
typedef struct { float x,y,z,r,r2; } Sphere;
extern float sqrtf(float);
void func_001F9568(Arr *a, Mesh *m, Sphere *o) {
 Tri *p; int i; V sum, *v; float f, max, dx,dy,dz,d;
 if (((s32)((u32)((char*)a->end-(char*)a->begin)*0xC4EC4EC5u)>>2)!=0) {
 sum.x=sum.y=sum.z=0.0f;
 for(p=a->begin;p!=a->end;p++) for(i=0;i<3;i++) {v=*m->vertices+p->idx[i]; sum.x+=v->x; sum.y+=v->y; sum.z+=v->z;}
 f=1.0f/(float)(u32)(((s32)((u32)((char*)a->end-(char*)a->begin)*0xC4EC4EC5u)>>2)*3);
 sum.x*=f; sum.y*=f; sum.z*=f; max=0.0f;
 for(p=a->begin;p!=a->end;p++) for(i=0;i<3;i++) {v=*m->vertices+p->idx[i]; dx=v->x-sum.x; dy=v->y-sum.y; dz=v->z-sum.z; d=dx*dx+dy*dy+dz*dz; if(max<d) max=d;}
 f=__builtin_sqrtf(max); o->x=sum.x; o->y=sum.y; o->z=sum.z; o->r=f; o->r2=f*f;
 }
}
