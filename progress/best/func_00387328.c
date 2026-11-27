extern void func_00386948(void *, int); extern void func_00387478(void *, void *); extern void func_0038CA10(void *, void *, void *); extern void func_0038CFB8(void *, void *);
typedef struct { int x; int y; char rest[64]; } Item;
typedef struct { void *a; char *end; char *limit; } Vec;
void func_00387328(char *a, Vec *v) {
 int count, i; Item item; char *obj=*(char **)(a+16); char *vt=*(char **)(obj+8);
 (*(void (**)(void *,int *))(vt+0x94))(obj+*(s16 *)(vt+0x90), &count);
 i=0; if(count>0) do {
 item.x=-1; item.y=0;
 int j; j=2; do { j--; } while(j!=-1); j=2; do { j--; } while(j!=-1); j=1; do { j--; } while(j!=-1);
 func_00387478(a,&item);
 if(v->end!=v->limit) { if(v->end) func_0038CFB8(v->end,&item); v->end+=0x48; }
 else func_0038CA10(v,v->end,&item);
 func_00386948(&item,2);
 i++;
 } while(i<count);
}
