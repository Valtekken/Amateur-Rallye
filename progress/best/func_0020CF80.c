typedef struct {float x,y,z;} V;
typedef struct { V v[3]; float plane[4]; int id; } Tri;
typedef struct {int id; V pos,n; float t,d;} Hit;
typedef struct {int *begin,*end;} List;
typedef struct {Hit *begin,*end,*cap; List **grid; char pad[0x30]; float size; int nx,nz; float x,y,z; char pad2[0x34]; Tri *tris;} Obj;
extern float func_003F3058(float);
extern float func_0020C458(float*,V*);
extern int func_002AD350(float),func_002AC4B0(int,int),func_002ABF20(int,int);
extern void func_0021B498(Obj*,Hit*,Hit*),func_0021C180(Hit*,Hit*,int,int),func_0021C700(Hit*,Hit*);
typedef struct {Hit *p; int n;} Result;
Result func_0020CF80(Obj *o,float x,float z) {
 Hit *it,*start,*end; int ix,iz,count=0,*p,k,n,depth,q; List *list; Tri *t,copy; V up,origin,dir; Hit h; float dot; Result result;
 it=o->begin; end=o->end; while(it<end) it++; o->end=o->begin;
 ix=(int)func_003F3058((x-o->x)/o->size); iz=(int)func_003F3058((z-o->z)/o->size);
 if(ix<0)ix=0; else if(ix>=o->nx)ix=o->nx-1;
 if(iz<0)iz=0; else if(iz>=o->nz)iz=o->nz-1;
 list=o->grid[iz*o->nx+ix];
 if(list) for(p=list->begin;p!=list->end;p++) {
  k=*p; t=&o->tris[k]; copy=*t;
  up.x=0;up.y=1;up.z=0;
  if(t->plane[0]*up.x+t->plane[1]*up.y+t->plane[2]*up.z<0) {copy.v[0]=t->v[2];copy.v[1]=t->v[1];copy.v[2]=t->v[0];}
  if((copy.v[1].z-copy.v[0].z)*(copy.v[0].x-x)<=(copy.v[1].x-copy.v[0].x)*(copy.v[0].z-z) &&
     (copy.v[2].z-copy.v[1].z)*(copy.v[1].x-x)<=(copy.v[2].x-copy.v[1].x)*(copy.v[1].z-z) &&
     (copy.v[0].z-copy.v[2].z)*(copy.v[2].x-x)<=(copy.v[0].x-copy.v[2].x)*(copy.v[2].z-z)) {
    origin.x=x;origin.y=0;origin.z=z;dir.x=0;dir.y=-1;dir.z=0;
    dot=t->plane[0]*dir.x+t->plane[1]*dir.y+t->plane[2]*dir.z;
    q=func_002AD350(dot); if(func_002AC4B0(q,0)<0)q=func_002ABF20(0,q);
    if(func_002AC4B0(q,0)!=0) {
      h.t=-func_0020C458(t->plane,&origin)/dot;
      h.pos.x=origin.x+dir.x*h.t;h.pos.y=origin.y+dir.y*h.t;h.pos.z=origin.z+dir.z*h.t;
      h.id=k;h.d=__builtin_fabsf(h.t);h.n.x=t->plane[0];h.n.y=t->plane[1];h.n.z=t->plane[2];
      if(o->end<o->cap){if(o->end)*o->end=h;o->end++;}else func_0021B498(o,o->end,&h);
      count++;
    }
  }
 }
 if(count>0){start=o->begin;end=o->end;if(start!=end){n=end-start;depth=0;while(n!=1){n>>=1;depth++;}func_0021C180(start,end,0,depth*2);func_0021C700(start,end);}result.p=o->begin;}
 result.n=count;return result;
}
