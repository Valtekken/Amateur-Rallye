typedef struct {u32 len,cap,refs,locked;char data[4];} SH;
extern SH D_0040E658;
extern u32 D_0040E618[];
extern char D_00483C78[],D_00483C88[],D_00483C90[],D_00483C98[];
extern u32 func_003FA9B8(const char*);
extern void func_00151A28(char**,u32,u32,const char*,u32);
extern void func_001539A0(char**,u32,u32,char**,u32,u32);
extern u32 func_00213B70(char**,const char*,u32,u32);
extern void func_002B2028(void*);
typedef struct {char *p;s32 pad[3];} Str;
static inline char *emptystr(void){if(D_0040E658.locked)return (char*)func_00151930(&D_0040E658);++D_0040E658.refs;return D_0040E658.data;}
static inline void dropstr(char **p){char*s=*p;SH*h=(SH*)(s-16);s32 n=h->refs-1;h->refs=n;if(!n){if(h->cap+16)func_002B2028(h);else{*(u32*)(s-16)=D_0040E618[-1];D_0040E618[-1]=(u32)h;}}}
void **func_002D2910(void **out,s32 unused,void *in){Str a,b,c;char *s;u32 start,end;
a.p=emptystr();s=*(char**)((char*)in+0x54);b.p=emptystr();
func_00151A28(&b.p,0,0xFFFFFFFFu,s,func_003FA9B8(s));
start=func_00213B70(&b.p,D_00483C78,0,func_003FA9B8(D_00483C78));
if(start!=0xFFFFFFFFu){end=func_00213B70(&b.p,D_00483C88,start,func_003FA9B8(D_00483C88));if(end!=0xFFFFFFFFu){u32 n=end-start+1;c.p=emptystr();func_001539A0(&c.p,0,0xFFFFFFFFu,&b.p,start,n);func_001539A0(&a.p,*(u32*)(a.p-16),0,&c.p,0,0xFFFFFFFFu);dropstr(&c.p);func_00151A28(&a.p,*(u32*)(a.p-16),0,D_00483C90,func_003FA9B8(D_00483C90));}}
start=func_00213B70(&b.p,D_00483C98,0,func_003FA9B8(D_00483C98));
if(start!=0xFFFFFFFFu){end=func_00213B70(&b.p,D_00483C88,start,func_003FA9B8(D_00483C88));if(end!=0xFFFFFFFFu){u32 n=end-start+1;c.p=emptystr();func_001539A0(&c.p,0,0xFFFFFFFFu,&b.p,start,n);func_001539A0(&a.p,*(u32*)(a.p-16),0,&c.p,0,0xFFFFFFFFu);dropstr(&c.p);func_00151A28(&a.p,*(u32*)(a.p-16),0,D_00483C90,func_003FA9B8(D_00483C90));}}
s=a.p;{SH*h=(SH*)(s-16);if(h->locked)s=(char*)func_00151930(h);else ++h->refs;}*out=s;dropstr(&b.p);dropstr(&a.p);return out;}
