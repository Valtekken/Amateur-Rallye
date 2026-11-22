typedef struct {float x,y,z;} V3;
typedef struct {float a[8];} Out;
extern void func_001D7428(void*,void*,V3*,float);
extern float func_001E3610(int,int);
extern int func_001E38C8(int,int);
extern float sqrtf(float) __attribute__((alias("func_003F3E80")));
static inline void cp(V3*d,V3*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline void norm(V3*p){float n=p->x*p->x+p->y*p->y+p->z*p->z;if(n<=1.1920929e-7f){p->x=p->y;p->z=p->y;}else{float r=1.f/__builtin_sqrtf(n);p->x*=r;p->y*=r;p->z*=r;}}
void func_001A0F58(char*a,char*b,char*c,char*d,int e,int f){
V3 v,w;Out out;float t,s;void *pos=d+44;
cp(&v,(V3*)(*(char**)(c+8)+24));w.x=v.z;w.y=0.f;w.z=-v.x;norm(&w);
t=0.f;if(func_001E38C8(e,f))t=func_001E3610(e,f)*.25f;
s=.1f;w.x*=s;w.y*=s;w.z*=s;
func_001D7428(&out,pos,&w,t);
if(t>0.f && !(*(float*)(d+68)>0.f)){char*vt=*(char**)(b+12);(*(void(**)(void*,void*,void*))(vt+20))(b+*(short*)(vt+16),&out,a+12);}
else {char*vt=*(char**)(b+12);(*(void(**)(void*,void*,void*))(vt+28))(b+*(short*)(vt+24),&out,a+12);}
}
