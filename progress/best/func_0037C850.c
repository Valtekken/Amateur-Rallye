extern u32 D_0040E618[],D_0040E658[]; extern void func_002B2028(void*); extern s32 func_00151930(void*); extern void func_00152720(void*,void*,void*);
typedef struct {char *name; int refs;} Item;
typedef struct {int *map; int a[2]; int *reverse; int pad[5]; Item *items; int p[2]; int count;} Manager;
extern Manager D_004262D0;
static void drop(char *s){int *p=(int*)s-4;if(--p[2]==0){if(p[1]+16)func_002B2028(p);else{p[0]=D_0040E618[-1];D_0040E618[-1]=(u32)p;}}}
static char *acquire(char *s){int *p=(int*)s-4;if(p[3])return (char*)func_00151930(p);p[2]++;return s;}
static void remove_id(int id){Manager *m=&D_004262D0;int n=m->map[id],last,rev;Item *a,*b;if(id<0)return;if(--m->items[n].refs)return;last=--m->count;if(n!=last){a=&m->items[n];b=&m->items[last];rev=m->reverse[last];if(a!=b){drop(a->name);a->name=acquire(b->name);}a->refs=b->refs;m->map[rev]=n;m->reverse[n]=rev;} }
void func_0037C850(int *a,int *b){if(*a==*b)return;{remove_id(*a);*a=*b;if(*a>=0)D_004262D0.items[D_004262D0.map[*a]].refs++;remove_id(*b);*b=-1;}}
