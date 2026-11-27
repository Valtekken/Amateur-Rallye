typedef struct {char pad[0x18]; int key, val;} A; typedef struct {char pad[8]; int key,val;} B;
typedef struct {void **begin,**end;} V; typedef struct {char pad[16]; V a; int x; V b;} Obj;
extern int func_0021F4B0(void); extern int func_0021E9C0(int,void *); extern void func_003F93CC(void *,void *,int);
void func_002E2D70(Obj *o) { unsigned i=0; V *v=&o->a;
if(v->end-v->begin) do { A *p=(A*)*(void **)((char*)v->begin+(i<<2)); if(!p->val) {p->val=func_0021E9C0(func_0021F4B0(),&p->key); if(!p->val) { void **d=v->begin+i,**s=d+1; if(s!=v->end) func_003F93CC(d,s,((int)((char*)v->end-(char*)s)>>2)*4); --v->end; }} ++i; }while(i<(unsigned)(v->end-v->begin));
v=&o->b; i=0;
if(v->end-v->begin) do { B *p=(B*)*(void **)((char*)v->begin+(i<<2)); if(!p->val) {p->val=func_0021E9C0(func_0021F4B0(),&p->key); if(!p->val) { void **d=v->begin+i,**s=d+1; if(s!=v->end) func_003F93CC(d,s,((int)((char*)v->end-(char*)s)>>2)*4); --v->end; }} ++i; }while(i<(unsigned)(v->end-v->begin));
}
