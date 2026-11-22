extern void func_001E2C78(void*,const char*,s32);
extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern void func_001E2B98(void*,const char*,s32);
extern void func_001E2C08(void*,const char*,f32);
extern void func_001E2DC8(void*,const char*,void*);
extern void func_001E2EA8(void*,const char*,void*);
extern char D_0044DD18[],D_0047C548[],D_0047C568[],D_0047C570[],D_0047C578[],D_0047C580[],D_0047C588[];

typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}

void *func_002A2BD8(char *a) {
    u32 key[4];u32 pad[4];u32 reg[4];Obj *p=(Obj*)D_002AD408(0x24);
    func_001D4040(key,D_0047C548);
    {u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
    func_001E2DC8(reg,D_0047C568,(void*)(a+0x10));
    func_001E2EA8(reg,D_0047C570,(void*)(a+0x50));
    func_001E2C08(reg,D_0047C578,*(f32*)(a+8));
    func_001E2E38(reg,D_0047C580,(void*)(a+0x60));
    func_001E2B98(reg,D_0047C588,*(s32*)(a+0xC));
    return p;
}
