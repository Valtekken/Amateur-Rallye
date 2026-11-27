typedef struct {char data[28];} A; typedef struct {char data[44];} B;
typedef struct {char pad[4]; void *vt; char pad2[32]; B *b,*be,*bc; A *a,*ae,*ac;} O;
extern char D_0040E618[],D_00473A18[],D_00474288[]; extern void func_002B2028(void*); extern void D_002AD390(void*);
void func_001CF150(O *o,int flags) {
 A *a; B *b; int n;
 o->vt=D_00473A18; a=o->a; if(a<o->ae) do { a++; } while(a<o->ae);
 n=o->ac-o->a; if(n) {if(n*28) func_002B2028(o->a); else {*(void**)o->a=*(void**)(D_0040E618-4); *(void**)(D_0040E618-4)=o->a;}}
 b=o->b; while(b<o->be) b++;
 n=o->bc-o->b; if(n) {if(n*44) func_002B2028(o->b); else {*(void**)o->b=*(void**)(D_0040E618-4); *(void**)(D_0040E618-4)=o->b;}}
 o->vt=D_00474288; if(flags&1) D_002AD390(o);
}
