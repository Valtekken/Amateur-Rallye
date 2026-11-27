extern void *D_002AD408(int); extern void *func_002444E0(void *); extern void func_00244760(void *,int); extern int func_003A4C98(void *,char *); extern void func_003A5C60(void *,float); extern void func_003A5C90(void *,float); extern void func_003F9698(char *); extern char D_004879C0[],D_00487A18[];
typedef struct { short off; short pad; void (*fn)(void *,float *); } V;
void func_003947B0(char *a) {
 struct { float x,y; void *p; } volatile z; char *o; V *v;
 o=*(char **)a; v=(V *)(*(char **)(o+8)+0x80); v->fn(o+v->off,(float *)&z.x);
 o=*(char **)a; v=(V *)(*(char **)(o+8)+0x80); v->fn(o+v->off,(float *)&z.y);
 z.p=func_002444E0(D_002AD408(0x74));
 func_003A5C60(z.p,z.x); func_003A5C90(z.p,z.y);
 if(func_003A4C98(a+12,D_004879C0)==-1) { if(z.p) func_00244760(z.p,3); func_003F9698(D_00487A18); } else *(void **)(*(char **)(a+4)+0x38)=z.p;
}
