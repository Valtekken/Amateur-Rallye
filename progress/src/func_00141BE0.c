extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2F18(void*,const char*,void*);
extern void func_001E2C78(void*,const char*,s32);
extern void func_001E2C08(void*,const char*,f32);
extern char D_00446958[],D_0044BC38[],D_0044BCD8[],D_0044BCF0[],D_0044BD00[],D_0044BD10[],D_0044BD18[],D_0044BD30[],D_0044DD18[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline void vec(u32 *p){p[0]=0;p[1]=0;p[2]=0;}
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;vec(p->v);p->key=k;return p;}
void *func_00141BE0(void *arg0) {
 u32 key[4],pad[4],reg[4];Obj *p=(Obj*)D_002AD408(0x24);
 func_001D4040(key,D_0044BCD8);
 {u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
 func_001E2C78(reg,D_0044BC38,*(s32*)((u8*)arg0+0xc));
 func_001E2F18(reg,D_0044BCF0,(u8*)arg0+0x68);
 func_001E2F18(reg,D_0044BD00,(u8*)arg0+0x74);
 func_001E2F18(reg,D_0044BD10,(u8*)arg0+0x80);
 func_001E2C08(reg,D_00446958,*(f32*)((u8*)arg0+0xbc));
 func_001E2C78(reg,D_0044BD18,*(s32*)((u8*)arg0+0xb0));
 func_001E2C78(reg,D_0044BD30,*(s32*)((u8*)arg0+0xc0));
 return p;
}
