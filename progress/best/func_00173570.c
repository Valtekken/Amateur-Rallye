extern void func_0016E010(void*),func_00198070(void*),func_00179B38(void*),func_00179D88(void*,void*),func_00179C98(void*,int),func_00177B70(void*,int);
extern int func_0021F4B0(void),func_0021E9C0(int,void*),func_003F93CC(void*,void*,int);
typedef struct {char pad[0x14]; void **a,**ae; int x; void **b,**be; char p[12]; void *c; char q[24]; void *d;} Obj;
typedef struct {char p[0x1c]; int key; int val;} A;
typedef struct VT {char p[8]; short off; short pad; void (*fn)(void*,int);} VT;
typedef struct {char p[0x14]; VT *vt; char q[0x1b8]; int key; int val;} B;
void func_00173570(register Obj *o){
 register unsigned i=0; char tmp[20]; register A *a; register B *b; void **p; register void **end;
 func_0016E010(o->c); func_00198070(o->d);
 if(o->ae-o->a) do {
 a=(A*)o->a[i];
 if(!a->val) {a->val=func_0021E9C0(func_0021F4B0(),&a->key); if(!a->val){
 func_00179B38(tmp); func_00179D88(tmp,a);
 p=o->a+i; end=o->ae; if(p+1!=end) func_003F93CC(p,p+1,(end-(p+1))*4);
 o->ae--; if(a) func_00177B70(a,3); func_00179C98(tmp,2);
 }} i++;
 }while(i<(unsigned)(o->ae-o->a));
 i=0; if(o->be-o->b) do {
 b=(B*)o->b[i]; if(!b->val){b->val=func_0021E9C0(func_0021F4B0(),&b->key); if(!b->val){
 p=o->b+i; end=o->be; if(p+1!=end) func_003F93CC(p,p+1,(end-(p+1))*4);
 o->be--; if(b) b->vt->fn((char*)b+b->vt->off,3);
 }} i++;
 }while(i<(unsigned)(o->be-o->b));
}
