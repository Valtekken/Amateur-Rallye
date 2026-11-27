extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2B98(void*,const char*,s32);
extern void func_001E2C08(void*,const char*,f32);
extern void func_001E2F18(void*,const char*,void*);
extern char D_0044DD18[];
extern char D_0047AF40[],D_0047B480[],D_0047B498[],D_0047B4A8[],D_0047B4B0[],D_0047B4C0[],D_0047B4D0[],D_0047B4E0[],D_0047B4F8[],D_0047B508[],D_0047B518[];

typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}

void *func_0028CAF8(void *arg0) {
    u32 key[4];u32 pad[4];u32 reg[4];Obj *p=(Obj*)D_002AD408(0x24);
    func_001D4040(key,D_0047B480);
    {u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
    func_001E2B98(reg,D_0047B498,*(s32*)((u8*)arg0+0x84));
    func_001E2C08(reg,D_0047B4A8,*(f32*)((u8*)arg0+0x14));
    func_001E2C08(reg,D_0047B4B0,*(f32*)((u8*)arg0+0x18));
    func_001E2C08(reg,D_0047B4C0,*(f32*)((u8*)arg0+0x1C));
    func_001E2C08(reg,D_0047B4D0,*(f32*)((u8*)arg0+0x20));
    func_001E2F18(reg,D_0047B4E0,(void*)((u8*)arg0+0x30));
    func_001E2F18(reg,D_0047AF40,(void*)((u8*)arg0+0x3C));
    func_001E2F18(reg,D_0047B4F8,(void*)((u8*)arg0+0x48));
    func_001E2F18(reg,D_0047B508,(void*)((u8*)arg0+0x6C));
    func_001E2F18(reg,D_0047B518,(void*)((u8*)arg0+0x78));
    return p;
}
