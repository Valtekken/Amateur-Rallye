typedef struct { int *begin,*end; } V;
extern void func_003F93CC(void *,void *,int),func_00273D18(V *,void *),func_0023C1A0(V *,void *,int,int *,int *),func_0023C298(V *,void *,int,int,int),func_0023C668(V *,void *);
void func_0023C080(V *v,char *a) {
 int x,y,z; void *p=a+16;
 { int *b=v->begin,*e=v->end; func_003F93CC(b,e,0); v->end=(int *)((char*)v->end-((char*)e-(char*)b)); }
 func_00273D18(v,a+4);
 if(v->begin!=v->end) do { int *end=v->end; x=end[-1]; v->end=end-1; y=-1; z=-1; func_0023C1A0(v,p,x,&y,&z); func_0023C298(v,p,x,y,z); } while(v->begin!=v->end);
 func_0023C668(v,p);
 { int *b=v->begin,*e=v->end; func_003F93CC(b,e,0); v->end=(int *)((char*)v->end-((char*)e-(char*)b)); }
}
