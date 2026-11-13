typedef struct {float x,y,z,w;} V;
typedef struct {s32 a,b; s32 pad[2]; V v[4];} Marker;
typedef struct {Marker *begin,*end,*cap;} Arr;
extern void func_001E2460(void*);
extern s32 func_001E28F8(void*,const char*,s32*);
extern s32 func_001E2A48(void*,const char*,V*);
extern s32 func_001D4010(s32*);
extern void func_001D4810(void*,s32);
extern s32 func_001FDE60(void*);
extern Arr* func_001FDBA8(s32,s32);
extern void func_002150C8(Arr*,Marker*,Marker*);
extern char D_004783B8[],D_004783C8[],D_004783D8[];
extern float sqrtf(float);
static inline __attribute__((always_inline)) void cp(V*d,V*s){d->x=s->x;d->y=s->y;d->z=s->z;d->w=s->w;}
static inline __attribute__((always_inline)) void identity(Marker*m,V*t){t->x=1;t->y=0;t->z=0;t->w=0;cp(&m->v[0],t);t->x=0;t->y=1;t->z=0;t->w=0;cp(&m->v[1],t);t->x=0;t->y=0;t->z=1;t->w=0;cp(&m->v[2],t);t->x=0;t->y=0;t->z=0;t->w=1;cp(&m->v[3],t);}
static inline __attribute__((always_inline)) void norm(V*p){float q=p->x*p->x+p->y*p->y+p->z*p->z;if(q<=1.1920929e-7f){p->x=p->y=p->z=0;}else{float r=1.0f/sqrtf(q);p->x*=r;p->y*=r;p->z*=r;}}
s32 func_001FF7A8(s32 arg){
struct {Marker m;V pos,dir; s32 kind; s32 pad[3];V tmp,side,up,forward,translation,worldup,temp;s32 reader[4];} l; Arr*a; Marker*d;
#define m l.m
#define pos l.pos
#define dir l.dir
#define kind l.kind
#define tmp l.tmp
#define side l.side
#define up l.up
#define forward l.forward
#define translation l.translation
#define worldup l.worldup
#define temp l.temp
#define reader l.reader

m.a=0;m.b=0;identity(&m,&pos);func_001E2460(reader);kind=0;
if(!func_001E28F8(reader,D_004783B8,&kind))return 0;
func_001D4810(&m,func_001D4010(&kind));
if(!func_001E2A48(reader,D_004783C8,&pos)||!func_001E2A48(reader,D_004783D8,&dir))return 0;
tmp.x=dir.x;tmp.y=dir.y;tmp.z=dir.z;
worldup.x=0;worldup.y=1;worldup.z=0;
m.v[3].x=pos.x;m.v[3].y=pos.y;m.v[3].z=pos.z;m.v[3].w=1;
translation.x=m.v[3].x;translation.y=m.v[3].y;translation.z=m.v[3].z;
up.x=worldup.x;up.y=worldup.y;up.z=worldup.z;
forward.x=tmp.x;forward.y=tmp.y;forward.z=tmp.z;
side.x=worldup.y*tmp.z-tmp.y*worldup.z;side.y=tmp.x*worldup.z-worldup.x*tmp.z;side.z=worldup.x*tmp.y-worldup.y*tmp.x;
norm(&side);
up.x=forward.y*side.z-forward.z*side.y;up.y=forward.z*side.x-forward.x*side.z;up.z=forward.x*side.y-forward.y*side.x;norm(&up);
identity(&m,&temp);
m.v[0].x=side.x;m.v[0].y=side.y;m.v[0].z=side.z;m.v[0].w=0;
m.v[1].x=up.x;m.v[1].y=up.y;m.v[1].z=up.z;m.v[1].w=0;
m.v[2].x=forward.x;m.v[2].y=forward.y;m.v[2].z=forward.z;m.v[2].w=0;
m.v[3].x=translation.x;m.v[3].y=translation.y;m.v[3].z=translation.z;m.v[3].w=1;
a=func_001FDBA8(func_001FDE60(&m),arg);if(!a)return 0;
d=a->end;if(d!=a->cap){if(d){d->a=m.a;d->b=m.b;cp(&d->v[0],&m.v[0]);cp(&d->v[1],&m.v[1]);cp(&d->v[2],&m.v[2]);cp(&d->v[3],&m.v[3]);}a->end++;}else func_002150C8(a,d,&m);return 1;
}
