typedef struct H {int len,cap,refs,x;} H;
typedef struct G {int x,y,refs,flag; char buf[4];} G;
extern G D_0040E658;
extern char D_0040E618[],D_00426030[],D_004798E0[],D_00479C58[],D_00479C68[];
extern void func_00265E80(void *),func_001D4040(void *,const char *);
extern int func_001E38C8(int,void *); extern void func_001E3F50(int,void *,void *);
extern void func_00151A28(char **,int,int,char *,int);
extern char *func_001D4010(void *); extern int func_003FA9B8(char *);
extern void func_002B2028(void *);
void func_00265B58(char *a,char *b) {
 char *p,*str; H *h; int n;
 func_00265E80(&p); *(int *)(a+12)=(int)p;
 if(!func_001E38C8(func_001E4280(),a+12)) func_001E3F50(func_001E4280(),a+12,D_00426030);
 if(D_0040E658.flag) p=(char *)func_00151930(&D_0040E658);
 else { D_0040E658.refs++; p=D_0040E658.buf; }
 func_00151A28(&p,0,-1,D_00479C58,func_003FA9B8(D_00479C58));
 str=func_001D4010(b+92);
 func_00151A28(&p,*(int *)(p-16),0,str,func_003FA9B8(str));
 func_00151A28(&p,*(int *)(p-16),0,D_00479C68,func_003FA9B8(D_00479C68));
 n=*(int *)(p-16); if(!n) str=D_004798E0; else {p[n]=0;str=p;}
 func_001D4040(a+16,str);
 h=(H *)(p-16); if(--h->refs==0) {if(h->cap+16) func_002B2028(h); else {h->len=*(int *)(D_0040E618-4); *(H **)(D_0040E618-4)=h;}}
}
