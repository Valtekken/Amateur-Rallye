typedef struct {int len,cap,refs,other; char data[4];} S;
extern S D_0040E658; extern char D_0040E618[], D_004798E0[], D_00479C58[], D_00479C80[];
extern void func_00151A28(char **,int,unsigned,const char *,int);
extern char *func_001D4010(void *); extern void func_001D4040(void *,const char *);
extern void func_002B2028(void *); extern int func_003FA9B8(const char *);
void *func_00265E80(void *out,char *arg) {
 char *p,*t,*v,*initial; register char **pp=&p; register char *prefix=D_00479C58; S *h;
 if(D_0040E658.other) initial=(char*)func_00151930(&D_0040E658); else {D_0040E658.refs++;initial=D_0040E658.data;} p=initial;
 func_00151A28(pp,0,0xffffffffu,prefix,func_003FA9B8(prefix));
 t=func_001D4010(arg+0x5c);func_00151A28(&p,((S*)(p-16))->len,0,t,func_003FA9B8(t));
 func_00151A28(pp,((S*)(p-16))->len,0,D_00479C80,func_003FA9B8(D_00479C80));
 h=(S*)(p-16);if(!h->len)v=D_004798E0;else {p[h->len]=0;v=p;}func_001D4040(out,v);
 h=(S*)(p-16);if(--h->refs==0){if(h->cap+16)func_002B2028(h);else {{register char *pool=D_0040E618;h->len=*(int*)(pool-4);*(S**)(pool-4)=h;}}}
 return out;
}
