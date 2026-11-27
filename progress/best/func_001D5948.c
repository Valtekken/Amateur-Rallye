typedef struct { int *a,*b,*c; int n; } V;
extern void *func_00152D28(int); extern void func_001D5A80(V*); extern void *func_002B1FC0(int); extern void func_002B2028(void*); extern void *func_003D2910(int); extern void func_003F93CC(void*,int,int); extern char D_0040E618[];
V *func_001D5948(V *v,int n) {
 int *p; int size; int count; volatile char pad[16];
 v->a=0; v->b=0; v->c=0;
 if(n) {
  if(n) {size=n*4; if(size) {p=func_002B1FC0(size); if(!p) p=func_003D2910(size);} else {p=*(int **)(D_0040E618-4); if(p) *(int **)(D_0040E618-4)=(int*)*p; else p=func_00152D28(0);}} else {p=0;size=0;}
  func_003F93CC(p,0,0);
  count=v->c-v->a;
  if(count) {if(count*4) func_002B2028(v->a); else {*(int**)v->a=*(int**)(D_0040E618-4); *(int**)(D_0040E618-4)=v->a;}}
  v->c=(int*)((char*)p+size); v->a=p; v->b=p;
 }
 v->n=n>0?n:1; func_001D5A80(v); return v;
}
