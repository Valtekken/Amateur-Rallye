typedef struct {char *begin,*end;} O;
extern int func_0026BC78(O *,void *),func_0026BD18(void *,void *,void *,void *,void *);
int func_0026BE98(O *o,void *a,void *b,void *c) {
 unsigned int i; int off; char *p; int tmp[4];
 if(func_0026BC78(o,a)) return 1;
 if(func_0026BC78(o,b)) return 1;
 if(func_0026BC78(o,c)) return 1;
 i=0; if((int)((unsigned)(o->end-o->begin)*0xb6db6db7u)>>2) {
 off=0; do { p=o->begin+off;
 if(!func_0026BD18(p,p,a,b,tmp) || !func_0026BD18(p,p,b,c,tmp) || !func_0026BD18(p,p,c,a,tmp)) return 1;
 i++; off+=28;
 } while(i<(unsigned)((int)((unsigned)(o->end-o->begin)*0xb6db6db7u)>>2));
 } return 0;
}
