extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern void func_001E2C08(void*,const char*,f32);
extern void func_001E2C78(void*,const char*,s32);
extern void func_001E2F18(void*,const char*,void*);
extern char D_0044DD18[];
extern char D_0047B3A0[],D_0047B3D8[],D_0047B3F0[],D_0047B400[],D_0047B408[],D_0047B410[],D_0047B418[],D_0047B420[],D_0047B430[],D_0047B440[],D_0047B450[],D_0047B460[],D_0047B470[];

typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}

void *func_0028C0E0(void *arg0) {
    u32 key[4];u32 pad[4];u32 reg[4];Obj *p=(Obj*)D_002AD408(0x24);
    func_001D4040(key,D_0047B3A0);
    {u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
    func_001E2E38(reg,D_0047B3D8,(void*)((u8*)arg0+0xC));
    func_001E2C08(reg,D_0047B3F0,*(f32*)((u8*)arg0+0x34));
    func_001E2C08(reg,D_0047B400,*(f32*)((u8*)arg0+0x38));
    func_001E2C08(reg,D_0047B408,*(f32*)((u8*)arg0+0x3C));
    func_001E2C08(reg,D_0047B410,*(f32*)((u8*)arg0+0x40));
    func_001E2C08(reg,D_0047B418,*(f32*)((u8*)arg0+0x44));
    func_001E2C08(reg,D_0047B420,*(f32*)((u8*)arg0+0x48));
    func_001E2F18(reg,D_0047B430,(void*)((u8*)arg0+0x50));
    func_001E2F18(reg,D_0047B440,(void*)((u8*)arg0+0x5C));
    func_001E2F18(reg,D_0047B450,(void*)((u8*)arg0+0x68));
    func_001E2C78(reg,D_0047B460,*(s32*)((u8*)arg0+0x74));
    func_001E2C78(reg,D_0047B470,*(s32*)((u8*)arg0+0x78));
    return p;
}
