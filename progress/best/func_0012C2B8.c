extern void func_00154E78(void*,u32,int,int,int),func_0012AD70(void*,void*,int,float),func_0012D208(void*,int),func_001D4040(void*,const char*),func_001E3D10(int,void*,int);
extern char D_004477F0[];
typedef struct {float x,y,z;} V;
typedef struct {s8 id; char pad[11]; V pos; float f;} Item;
typedef struct {char pad[16]; Item *items; char pad2[0x20]; char *dst; char pad3[8]; char *list;} Obj;
static inline void cp(V *d,V *s){d->x=s->x;d->y=s->y;d->z=s->z;}
void func_0012C2B8(Obj *a,int i,int flag) {
 int id,key; V pos; Item *p;
 if(*(u32*)(a->list-16)<12) {
  { int off=i*28; id=*(s8*)((char*)a->items+off); }
  func_00154E78(&a->list,*(u32*)(a->list-16),0,1,id);
  p=&a->items[i]; cp(&pos,&p->pos);
  { char *dst=a->dst+((*(int*)(a->list-16)-1)<<5); func_0012AD70(dst,&pos,id,p->f); }
  if(*(int*)(a->list-16)==12) func_0012D208(a,0x26);
  if(flag) {key=func_001E4280();func_001D4040(&pos,D_004477F0);func_001E3D10(key,&pos,1);}
 }
}
