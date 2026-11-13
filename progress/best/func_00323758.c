typedef struct {float x,y;} Pair;
typedef struct {Pair *begin,*end,*cap;} Vec;
extern Pair *func_00156260(Pair*,Pair*,Pair*,int),*func_002C5A08(Pair*,Pair*,Pair*,int);
extern void *func_002B1FC0(u32),*func_003D2910(u32),*func_00152D28(u32);
extern void func_002B2028(void*);
extern u32 D_0040E618[];
static inline void assign(Pair *d,Pair*s){d->x=s->x;d->y=s->y;}
static inline Pair *copy(Pair *a,Pair*b,Pair*c){s32 n=b-a;for(;n>0;--n){assign(c,a);++a;++c;}return c;}
static inline Pair *back(Pair*a,Pair*b,Pair*c){s32 n=b-a;for(;n>0;--n){--b;--c;assign(c,b);}return c;}
static inline u32 const *maxn(u32 const*a,u32 const*b){return *a<*b?b:a;}
void func_00323758(Vec*v,Pair*pos,Pair*first,Pair*last){
 if(first!=last){
 u32 n;Pair *oldend; n=last-first;oldend=v->end;
 if((u32)(v->cap-oldend)>=n){u32 after=oldend-pos;
 if(after>n){func_00156260(oldend-n,oldend,oldend,0);v->end+=n;back(pos,oldend-n,oldend);copy(first,last,pos);}
 else {Pair*mid=first+after;func_002C5A08(mid,last,oldend,0);v->end+=n-after;func_00156260(pos,oldend,v->end,0);v->end+=after;copy(first,mid,pos);}
 }else{
 u32 size=oldend-v->begin;u32 len=size+*maxn(&n,&size);u32 bytes;Pair *p,*newend,*cur;
 if(len){bytes=len<<3;if(bytes){p=func_002B1FC0(bytes);if(!p)p=func_003D2910(bytes);}else{p=(Pair*)D_0040E618[-1];if(p)D_0040E618[-1]=*(u32*)p;else p=func_00152D28(0);}}
 else {p=0;bytes=0;}
 newend=func_00156260(v->begin,pos,p,0);newend=func_002C5A08(first,last,newend,0);newend=func_00156260(pos,v->end,newend,0);
 for(cur=v->begin;cur<v->end;++cur){}
 size=v->cap-v->begin;if(size){if(size<<3)func_002B2028(v->begin);else{*(u32*)v->begin=D_0040E618[-1];D_0040E618[-1]=(u32)v->begin;}}
 v->end=newend;v->cap=(Pair*)((char*)p+bytes);v->begin=p;
 }}}
