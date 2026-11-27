typedef struct Ref Ref; typedef struct VT { int a,b; short off; short pad; void (*destroy)(void *,int); } VT; struct Ref { int count; VT *vt; };
extern void func_0024F6E0(Ref **,Ref *);
extern void func_0022E210(void *,Ref **);
extern void func_0024F440(Ref *,Ref **);
extern void func_0024F510(Ref *,Ref **);
static inline void release(Ref *p) { if(p && --p->count==0) p->vt->destroy((char *)p+p->vt->off,3); }
void func_0022E0E8(char *obj, Ref **arg) {
 struct { Ref *p; int pad[3]; } slot; Ref *q;
 func_0024F6E0(&slot.p,*arg);
 q=slot.p; if(slot.p) slot.p->count++;
 func_0022E210(obj,&q);
 if(slot.p!=*(Ref **)(obj+0x38)) {
 q=*(Ref **)(obj+0x38); if(q) q->count++;
 func_0024F440(*arg,&q);
 q=slot.p; if(slot.p) slot.p->count++;
 func_0024F510(*arg,&q);
 }
 release(slot.p); release(*arg);
}
