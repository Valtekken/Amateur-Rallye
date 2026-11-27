extern void func_003F9698(char*,char*),func_0023F370(void*,int),func_002B2028(void*),D_002AD530(void*);
extern char D_0047A908[],D_0047A9E0[],D_0040E618[];
typedef struct {short adj,pad; void (*fn)(void*);} V;
typedef struct { V *vt; char *a,*b,*c,*d,*e,*f; char **begin,**end,**cap; } S;
void func_0027A198(S *s) {
 volatile char snapshot[0x40]; V *v; char *p,*q; char **a,**c; char *x,*z,*y,*w; int n;
 func_003F9698(D_0047A908,D_0047A9E0);
 v=s->vt+1; v->fn((char*)s+v->adj); v=s->vt+2; v->fn((char*)s+v->adj);
 { struct vec {char **begin,**end,**cap;} *vct; if(s->begin!=s->end) { vct=(struct vec*)&s->begin; do { p=vct->end[-1]; vct->end--; if(p){ q=p+*(int*)(p-16)*56; while(p!=q){q-=56;func_0023F370(q,0);} D_002AD530(p-16); } } while(s->begin!=vct->end); } }
 a=s->begin;c=s->cap;x=s->a;z=s->c;y=s->d;w=s->f; *(char **)(snapshot+4)=s->b; *(char **)(snapshot+20)=s->e; *(char ***)(snapshot+32)=s->begin; *(char ***)(snapshot+36)=s->end; *(char ***)(snapshot+40)=s->cap; *(char **)(snapshot+0)=x; *(char **)(snapshot+8)=z; *(char **)(snapshot+16)=y; *(char **)(snapshot+24)=w;
 s->a=s->b=s->c=s->d=s->e=s->f=0;s->begin=s->end=s->cap=0;
 n=(c-a); if(n){if(n*4)func_002B2028(a);else {*(void**)a=*(void**)((char*)((char**)D_0040E618-1));*(void**)(D_0040E618-4)=a;}}
 y=*(char **)(snapshot+16); w=*(char **)(snapshot+24); n=(w-y)>>2;if(n){if(n*4)func_002B2028(y);else {*(void**)y=*(void**)(D_0040E618-4);*(void**)(D_0040E618-4)=y;}}
 x=*(char **)(snapshot+0); z=*(char **)(snapshot+8); n=(z-x)>>2;if(n){if(n*4)func_002B2028(x);else {*(void**)x=*(void**)(D_0040E618-4);*(void**)(D_0040E618-4)=x;}}
}
