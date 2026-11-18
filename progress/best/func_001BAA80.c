typedef struct {float x,y,z;} V;
typedef struct {char pad[164]; V p,d; float a,b,c; int padC8; int flag;int flag2;} Obj;
typedef struct {int vt; Obj *a,*b;float duration,t;char pad[24];int flag;} Blend;
extern void func_001B28C0(Obj*,V*,int);extern void func_001B25D8(Obj*,V*,int);
extern void func_001B2B90(Obj*,int,float);extern void func_001B2DD0(Obj*,int,float);extern void func_001B2E18(Obj*,int,float);
extern float sqrtf(float);extern float sqrtf(float);
static inline void diffv(V*r,V*a,V*b){r->x=a->x-b->x;r->y=a->y-b->y;r->z=a->z-b->z;}
static inline void scalev(V*r,V*a,float t){r->x=a->x*t;r->y=a->y*t;r->z=a->z*t;}
static inline void sumv(V*r,V*a,V*b){r->x=a->x+b->x;r->y=a->y+b->y;r->z=a->z+b->z;}
static inline void norm(V*p){float x=p->x*p->x+p->y*p->y+p->z*p->z;if(x>.0001f){float len=__builtin_sqrtf(x);float inv=1.f/len;p->x*=inv;p->z*=inv;p->y*=inv;}else{p->x=0.f;p->z=1.f;p->y=0.f;}}
void func_001BAA80(Blend*s,Obj*out){
V v,tmp,delta,tmp2,delta2;Obj *a;register Obj*b;V *pa,*pb,*da,*db;float t,x;int flag,flag2;
if(s->t>=.999f){s->t=1.f;{Obj *end=s->b;if(end){flag=end->flag;pb=&end->p;if(flag)out->flag=1;func_001B28C0(out,&end->d,flag);func_001B25D8(out,pb,flag);func_001B2B90(out,flag,((float*)pb)[6]);func_001B2DD0(out,flag,((float*)pb)[7]);func_001B2E18(out,flag,((float*)pb)[8]);return;}}}
else s->t=s->t+1.f/(s->duration*30.f);
a=s->a;if(!a)return;b=s->b;if(!b)return;
flag2=0;if(a->flag||b->flag||s->flag)flag2=1;
if(flag2){out->flag=1;pb=&b->p;func_001B28C0(out,&b->d,1);func_001B25D8(out,pb,1);func_001B2B90(out,1,((float*)pb)[6]);func_001B2DD0(out,1,((float*)pb)[7]);func_001B2E18(out,1,((float*)pb)[8]);return;}
pa=&a->p;pb=&b->p;da=&a->d;db=&b->d;t=s->t;
diffv(&delta,db,da);scalev(&tmp,&delta,t);sumv(&v,da,&tmp);
norm(&v);
func_001B28C0(out,&v,0);
diffv(&delta2,pb,pa);scalev(&tmp2,&delta2,t);sumv(&tmp,pa,&tmp2);func_001B25D8(out,&tmp,0);
x=((float*)pa)[6];func_001B2B90(out,0,x+t*(((float*)pb)[6]-x));x=((float*)pa)[7];func_001B2DD0(out,0,x+t*(((float*)pb)[7]-x));x=((float*)pa)[8];func_001B2E18(out,0,x+t*(((float*)pb)[8]-x));}
