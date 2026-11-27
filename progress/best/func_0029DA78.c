extern char D_0047C0F8[],D_0047C108[];
extern void func_001D4040(void*,const char*);
extern f32 func_001E3610(s32,void*);
extern void func_002624A0(s32,void*,f32,f32);
extern s32 func_00262838(void); extern void func_0029DBB0(void*);
static inline void *init(void *p,const char *s){func_001D4040(p,s); return p;}
typedef struct {char pad[28]; s32 limit; f32 value; char pad2[24]; char *name;} Obj;
void func_0029DA78(Obj *p,s32 delta) {
 s32 a[4],b[4],c[4]; s32 x,y; f32 f;
 if((s32)p->value < p->limit) {
 p->value += (f32)delta;
 x=func_00262838(); func_001D4040(a,D_0047C0F8); y=func_001E4280(); func_002624A0(x,a,func_001E3610(y,init(b,p->name)),1.0f);
 f=(f32)p->limit; if(f<p->value) p->value=f;
 func_0029DBB0(p);
 } else {
 x=func_00262838(); func_001D4040(a,D_0047C108); y=func_001E4280(); func_002624A0(x,a,func_001E3610(y,init(c,p->name)),1.0f);
 }
}
