extern void *D_002AD408(u32);
extern void func_001D4040(void *, const char *);
extern void func_001DF2B0(void *,void *,int);
extern void *func_002937E0(void *,void *,int *);
extern char D_0044DD18[],D_0047B7F0[];
typedef struct { void **begin,**end; } V;
extern V *func_00293668(void);
typedef struct { u32 a,b; struct {u32 begin,end;} list; char *vt; u32 v[3]; u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p){base(p);p->vt=D_0044DD18;vec(p->v);p->key=0;return p;}
void *func_002936B0(void *a){int key[4];Obj *p=D_002AD408(0x24);V *v;void **it;
ctor(p);func_001D4040(key,D_0047B7F0);p->key=key[0];v=func_00293668();{void **start=v->begin; int n=v->end-start; it=start; if(n==0)return 0;}
while(it!=v->end){void *entry=*it;if(entry){void *x;key[0]=it-v->begin;x=func_002937E0(a,entry,key);if(!x){if(p){char *vt=p->vt;void (*fn)(void *,int)=*(void (**)(void *,int))(vt+12);fn((char*)p+*(s16 *)(vt+8),3);}return 0;}func_001DF2B0(p,x,0);}it++;}return p;}
