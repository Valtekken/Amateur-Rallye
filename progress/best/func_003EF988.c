extern void *D_002AD408(int);
extern void *func_00260DD0(void *);
extern void *func_002B4AD8(void);
extern char *func_001D4010(void *);
extern int func_003FA9B8(char *);
extern void func_00151A28(char **,int,int,char *,int);
extern int func_002AA2C0(void *,char *,void *);
extern void func_003F9698(char *,char *);
extern void func_002B2028(void *);
extern char D_0040E618[], D_0048B368[], D_0048B370[], D_0048B378[], D_0048B3A0[];
extern int D_0040E658[];
typedef struct {void *vt; int a,b; void *p; int id;} Obj;
void *func_003EF988(Obj *o,int *id) {
 register char *s,*v,*p; void *x,*result; register int n; char tmp[16];
 if (*id && *id==o->id) return o->p;
 if(o->p) { char *q=o->p; char *vt=*(char **)(q+0x20); ((void (*)(void *,int,void *))(*(void **)(vt+12)))(q+*(short *)(vt+8),3,q); }
 o->id=*id; o->p=func_00260DD0(D_002AD408(0x24));
 x=func_002B4AD8(); {char *vt=*(char **)x; v=((char *(*)(void *))(*(void **)(vt+0x3c)))((char *)x+*(short *)(vt+0x38));}
 if(D_0040E658[3]) s=func_00151930(D_0040E658); else {s=(char *)&D_0040E658[4]; D_0040E658[2]++;}
 func_00151A28(&s,0,-1,v,func_003FA9B8(v));
 v=func_001D4010(id); func_00151A28(&s,*(int *)(s-16),0,v,func_003FA9B8(v));
 v=D_0048B368; func_00151A28(&s,*(int *)(s-16),0,v,func_003FA9B8(v));
 n=*(int *)(s-16); if(n) {s[n]=0;p=s;} else p=D_0048B370;
 if(func_002AA2C0(tmp,p,o->p)) func_003F9698(D_0048B378,func_001D4010(id)); else func_003F9698(D_0048B3A0,func_001D4010(id));
 result=o->p; p=s-16; if(--*(int *)(p+8)==0) {if(*(int *)(p+4)+16) func_002B2028(p); else {*(int *)p=*(int *)(D_0040E618-4); *(char **)(D_0040E618-4)=p;}}
 return result;
}
