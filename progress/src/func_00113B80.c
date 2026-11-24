extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern void func_001E2C78(void*,const char*,s32);
extern void func_001E2C08(void*,const char*,f32);
extern void func_001E2B98(void*,const char*,s32);
extern char D_00444D00[],D_00445D48[],D_00445D60[],D_004465C8[],D_004465D8[],D_004465E0[],D_00446718[],D_00446728[],D_00446730[],D_00446738[],D_00446838[],D_00446890[],D_004468A0[],D_004468B0[],D_004468C0[],D_004468D8[],D_004468F0[];
extern char D_0044DD18[];

typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}

void *func_00113B80(void *arg0) {
    u32 key[4];u32 pad[4];u32 reg[4];Obj *p=(Obj*)D_002AD408(0x24);
    func_001D4040(key,D_00446838);
    {u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
    func_001E2C78(reg,D_00444D00,0);
    func_001E2E38(reg,D_00446718,(void*)((u8*)arg0+0x5C));
    func_001E2C78(reg,D_00445D48,0);
    func_001E2C78(reg,D_00445D60,0);
    func_001E2E38(reg,D_004465C8,(void*)((u8*)arg0+0x3C));
    func_001E2E38(reg,D_004465D8,(void*)((u8*)arg0+0x40));
    func_001E2E38(reg,D_004465E0,(void*)((u8*)arg0+0x44));
    func_001E2E38(reg,D_00446728,(void*)((u8*)arg0+0x60));
    func_001E2C78(reg,D_00446730,*(s32*)((u8*)arg0+0x20));
    func_001E2E38(reg,D_00446890,(void*)((u8*)arg0+0x64));
    func_001E2E38(reg,D_004468A0,(void*)((u8*)arg0+0x68));
    func_001E2C78(reg,D_00446738,*(s32*)((u8*)arg0+0x1C));
    func_001E2C08(reg,D_004468B0,*(f32*)((u8*)arg0+0x88));
    func_001E2C08(reg,D_004468C0,*(f32*)((u8*)arg0+0x8C));
    func_001E2C08(reg,D_004468D8,*(f32*)((u8*)arg0+0x90));
    func_001E2B98(reg,D_004468F0,*(s32*)((u8*)arg0+0x34));
    return p;
}
