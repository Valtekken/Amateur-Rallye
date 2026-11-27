extern void *D_002AD408(u32);
extern void func_001D4040(void*,const char*);
extern volatile unsigned short func_001E2460(void*,void*);
extern void func_001E2E38(void*,const char*,void*);
extern void func_001E2C78(void*,const char*,s32);
extern void func_001E2B98(void*,const char*,u32);
extern char D_00444D00[],D_00444E58[],D_004465C0[],D_00445D48[],D_00445D60[],D_004465C8[],D_004465D8[],D_004465E0[],D_004465F0[],D_00446600[],D_00446610[],D_0044DD18[];
typedef struct {u32 a,b; struct {u32 begin,end;} list; void *vt; u32 v[3];u32 key;} Obj;
static inline Obj *base(Obj *p){p->list.begin=0;p->list.end=0;p->b=0;p->a=0;return p;}
static inline Obj *ctor(Obj *p,u32 k){base(p);p->vt=D_0044DD18;volatile u32 *v=p->v;v[0]=0;v[2]=0;v[1]=0;p->key=k;return p;}
void *func_00110958(void *arg0) {
 u32 key[4];u32 pad[4];u32 reg[4];Obj *p=(Obj*)D_002AD408(0x24);
 func_001D4040(key,D_00444E58);
 {u32 k=key[0];ctor(p,k);func_001E2460(reg,p);}
 func_001E2C78(reg,D_00444D00,0);
 func_001E2B98(reg,D_004465C0,*(u32*)((char*)arg0+0x10));
 func_001E2C78(reg,D_00445D48,0);
 func_001E2C78(reg,D_00445D60,0);
 func_001E2E38(reg,D_004465C8,(char*)arg0+0x18);
 func_001E2E38(reg,D_004465D8,(char*)arg0+0x1c);
 func_001E2E38(reg,D_004465E0,(char*)arg0+0x20);
 func_001E2E38(reg,D_004465F0,(char*)arg0+0x24);
 func_001E2E38(reg,D_00446600,(char*)arg0+0x28);
 func_001E2B98(reg,D_00446610,*(u32*)((char*)arg0+0x2c)); return p;
}
