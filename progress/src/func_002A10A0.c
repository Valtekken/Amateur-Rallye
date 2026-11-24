extern void *D_002AD408(int); extern void func_001D3310(void *); extern void func_001D3378(void *, void *, int, int); extern void func_001E3150(int, void *); extern void func_002A14A0(void *, void *, void *); extern u8 D_0047C6F8[];
typedef struct {char pad[20]; void *v; int x,y;} Obj;
void func_002A10A0(void *a, int *b, int c, int d) {
 int sp[4]; Obj *obj; int x,y;
 *(int *)((char *)a+12)=c; sp[0]=0; func_002A14A0(a,b,sp);
 func_001E3150(func_001E4280(),b); obj=D_002AD408(32); func_001D3310(obj);
 y=*b; x=*(int *)((char *)a+12);
 obj->v=D_0047C6F8; obj->x=y; obj->y=x;
 func_001D3378(obj,sp,1,d);
}
