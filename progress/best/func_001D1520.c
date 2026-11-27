extern char D_00472FE0[],D_004731A0[],D_0040E618[];
extern void func_002B2028(void *);
extern void D_002AD390(void *);
typedef struct { char *begin,*end,*cap; } V;
typedef struct { void *vt; char pad[0x34]; V a,b; } O;
void func_001D1520(O *o,int flag) {
 V *v=&o->b; char *p,*end; int n;
 o->vt=D_00472FE0;
 p=v->begin; end=v->end; if(p<end) { do { p+=0x38; } while(p<end); }
 p=v->begin; n=(int)((v->cap-p)*0xB6DB6DB7)>>3;
 if(n) { if(n*0x38) func_002B2028(p); else { *(void**)p=*(void**)(D_0040E618-4); *(void**)(D_0040E618-4)=p; } }
 v=&o->a; p=v->begin; end=v->end; if(p<end) { do { p+=4; } while(p<end); }
 p=v->begin; n=(v->cap-p)>>2;
 if(n) { if(n*4) func_002B2028(p); else { *(void**)p=*(void**)(D_0040E618-4); *(void**)(D_0040E618-4)=p; } }
 o->vt=D_004731A0; if(flag&1) D_002AD390(o);
}
