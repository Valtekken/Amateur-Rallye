typedef struct { float x,y,z; } Vec3;
typedef struct { void **begin,**end,**cap; } Arr;
typedef struct { int x; Arr free,used; } Pool;
typedef struct { int a,b; char pad[16]; int c,d; void *self; int f; } Node;
typedef struct { void *vt; char pad[20]; int a,b; Arr arr; } Obj;
extern Pool D_00426548,D_004265E8;
extern void func_00234558(void*,Vec3*,Vec3*),func_00234958(void*,int),func_00236F80(void*,void*,void*),func_003F93CC(void*,void*,int),func_001CB098(void*,void*,void*),func_002731D0(void*,void*,void*);
int func_00243490(Obj *o, void *other, int flag, Vec3 *a, Vec3 *b) {
 Vec3 x,y; char tmp[48]; void **start,**end; int result; void *item; Node *node; Arr *v=&o->arr;
 x.x=a->x; x.y=a->y; x.z=a->z; y.x=b->x; y.y=b->y; y.z=b->z; func_00234558(tmp,&x,&y);
 start=v->begin; end=v->end; func_003F93CC(start,end,0); v->end=(void**)((char*)v->end-((char*)end-(char*)start));
 if(other) { char *vt=*(char**)other; ((void(*)(void*,void*,void*))*(void**)(vt+44))((char*)other+*(short*)(vt+40),tmp,v); }
 else if(o->a && o->b) func_00236F80(o,tmp,v);
 result=((char*)v->end-(char*)v->begin)!=0;
 if(flag) {
  while(D_00426548.used.end!=D_00426548.used.begin) { item=*--D_00426548.used.end; if(D_00426548.free.end!=D_00426548.free.cap) { if(D_00426548.free.end) *D_00426548.free.end=item; D_00426548.free.end++; } else func_001CB098(&D_00426548.free,D_00426548.free.end,&item); }
  while(D_004265E8.used.end!=D_004265E8.used.begin) { node=*--D_004265E8.used.end; node->a=0; node->b=0; node->c=0; node->d=0; node->self=node; node->f=0; if(D_004265E8.free.end!=D_004265E8.free.cap) { if(D_004265E8.free.end) *D_004265E8.free.end=node; D_004265E8.free.end++; } else func_002731D0(&D_004265E8.free,D_004265E8.free.end,&node); }
 }
 start=v->begin;end=v->end;func_003F93CC(start,end,0);v->end=(void**)((char*)v->end-((char*)end-(char*)start));func_00234958(tmp,2);return result;
}
