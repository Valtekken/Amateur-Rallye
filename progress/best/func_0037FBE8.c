extern void func_002B2028(void*);
extern void D_002AD390(void*);
extern void func_00152720(void*,void*,void*);
extern u32 D_0040E618[], D_0040E658[],D_00486D18[];
typedef struct {u32 str; s32 refs;} Entry;
typedef struct {s32 *map; s32 p1,p2; s32 *reverse; s32 p4,p5; s32 *begin,*end,*cap; Entry *entries; s32 p10,p11,count;} Registry;
extern Registry D_004262D0;
typedef struct {char pad[8]; s16 adjust; s16 pad2; void (*destroy)(void*,s32);} Vtable;
typedef struct {char pad[16]; Vtable *vt; s32 refs;} Ref;
typedef struct {s32 id,p1,p2;void *vt;Ref *ref;} Obj;
static inline void drop(u32 value){u32 *p=(u32*)value-4;if(--p[2]==0){if(p[1]+16)func_002B2028(p);else{u32 old=D_0040E618[-1];p[0]=old;D_0040E618[-1]=(u32)p;}}}
static inline u32 copy(u32 value){u32 *p=(u32*)value-4;if(p[3])return func_00151930(p);p[2]++;return value;}
static inline void assign(Entry *dst,const Entry *src){if(src!=dst){drop(dst->str);dst->str=copy(src->str);}dst->refs=src->refs;}
static inline void entryinit(Entry *t){u32 v;if(D_0040E658[3])v=func_00151930(D_0040E658);else{D_0040E658[2]++;v=(u32)D_0040E658+16;}t->str=v;t->refs=0;}
static inline void append(s32 **v,s32 *value){if(v[1]!=v[2]){if(v[1])*v[1]=*value;v[1]++;}else func_00152720(v,v[1],value);}
void func_0037FBE8(Obj *self,s32 flags){

 if(self->ref){Ref *ref=self->ref;if(--ref->refs==0){Vtable *v=ref->vt;v->destroy((char*)ref+v->adjust,3);}}
 self->vt=D_00486D18;
 if(self->id>=0){
 Registry *r=&D_004262D0;
 s32 offset=self->id << 2; s32 *p=(s32*)((char*)r->map+offset); Entry *e=r->entries+*p;
 if(--e->refs==0){
 s32 oldid=self->id;
 s32 idx=r->map[oldid];
 s32 last=r->count-1;
 r->count=last;
 if(idx!=last){
 s32 moved=*(s32*)((char*)r->reverse+(last<<2));
 Entry *dst=(Entry*)((char*)r->entries+(idx<<3)); Entry *src=(Entry*)((char*)r->entries+(last<<3));
 assign(dst,src);
 {s32 *p=r->map+moved;*p=idx;}{s32 *p=r->reverse+idx;*p=moved;}
 }
 {Entry *dst=&r->entries[r->count];Entry temp;
 entryinit(&temp);assign(dst,&temp);drop(temp.str);}
 append(&r->begin,&oldid);
 }
 self->id=-1;
 }
 if(flags&1)D_002AD390(self);
}
