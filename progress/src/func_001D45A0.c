typedef struct { s32 *b,*e,*c; } Vec;
extern void func_001D8358(Vec*,s32*,s32*);
int func_001D45A0(void *arg0,s32 v){Vec*a=(Vec*)arg0; if(a->e!=a->c){if(a->e)*a->e=v; a->e++;} else func_001D8358(a,a->e,&v); return (a->e-a->b)-1;}
