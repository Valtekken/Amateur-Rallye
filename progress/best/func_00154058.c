struct V3{float x,y,z;};
struct E{u8 flag;float f;int i;V3 v;float last;};
struct Vec{E *begin,*end,*cap; void func_00154058(E* pos,const E& x);};
extern E *func_00153FE0(E*,E*,E*,int);
extern void *func_002B1FC0(u32),*func_003D2910(u32),*func_00152D28(u32);
extern void func_002B2028(void*);
extern u32 D_0040E618[];
static inline void cp3(V3*d,const V3*s){d->x=s->x;d->y=s->y;d->z=s->z;}
static inline void ctor(E*d,const E*s){d->flag=s->flag;d->f=s->f;d->i=s->i;cp3(&d->v,&s->v);d->last=s->last;}
static inline E *alloc(u32 n){if(n){u32 bytes=n*28;if(bytes){E*p=(E*)func_002B1FC0(bytes);if(!p)p=(E*)func_003D2910(bytes);return p;}else{E*p=(E*)D_0040E618[-1];if(!p)return (E*)func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}}return 0;}
static inline void dealloc(E*p,u32 n){if(n){u32 bytes=n*28;if(bytes)func_002B2028(p);else{*(u32*)p=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
void Vec::func_00154058(E* pos,const E& x){
if(end!=cap){
E tmp;E *old,*d,*s;int n;
if(end)ctor(end,end-1);
old=end;end++;ctor(&tmp,&x);
s=old-1;d=old;n=s-pos;
while(n>0){--d;--s;ctor(d,s);n--;}
V3* pv=&pos->v;
pos->flag=tmp.flag;pos->i=tmp.i;pv->x=tmp.v.x;pos->f=tmp.f;pv->z=tmp.v.z;pv->y=tmp.v.y;pos->last=tmp.last;
}else{
u32 size=end-begin;u32 len=size?size*2:1;E*p=alloc(len);E*e=func_00153FE0(begin,pos,p,0);E*it;
if(e)ctor(e,&x);e++;
E* xe=func_00153FE0(pos,end,e,0);
for(it=begin;it<end;it++){}
dealloc(begin,cap-begin);
begin=p;end=xe;cap=p+len;
}
}
