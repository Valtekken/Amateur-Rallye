typedef struct{float x,y,z,w,r;}V5;typedef struct{V5*b,*e,*c;}A5;typedef struct{char pad[20];s32*ids;char pad18[8];V5*begin,*end,*cap;}Obj;typedef struct{char pad[80];char*h;}Entry;
extern s32 func_0021F4B0(void);extern Entry*func_0021E9C0(s32,s32*);
static inline V5*copy5(V5*d,V5*s){d->x=s->x;d->y=s->y;d->z=s->z;d->w=s->w;d->r=s->r;return d;}
static inline s32 count(A5*a){return a->e-a->b;}
static inline int inside(V5*s,float*p,float*t){V5 v;float x,y,z;copy5(&v,s);v.x+=t[0];v.y+=t[1];v.z+=t[2];v.w+=1.0f;x=p[0]-v.x;y=p[1]-v.y;z=p[2]-v.z;s32 yes=1;if(!(x*x+y*y+z*z<=v.r))yes=0;return yes;}
f32 func_001BAE20(Obj*o,char*b){A5*a;float*p;u32 i;s32 off;if(b)goto begin;goto done;hit:return 0.0f;begin:{a=(A5*)((char*)o+32);p=(float*)(b+164);i=0;if((s32)(a->e-o->begin)){off=0;do{s32*id=o->ids+i;Entry*n=func_0021E9C0(func_0021F4B0(),id);if(n){char*h=n->h;if(h){if(inside((V5*)((char*)o->begin+off),p,(float*)(h+80)))goto hit;}}i++;off+=20;}while(i<(u32)(a->e-o->begin));}}done:return 0.5f;}
