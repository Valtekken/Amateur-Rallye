typedef struct {s32 *b,*e,*c;} V;
typedef struct {V a,b; s32 x,y;void *vt;} R;
extern u32 D_0040E618[]; extern char D_0044DBA0[];
extern void func_00152688(R*);extern void func_00152720(R*,s32*,s32*);extern void func_00152918(R*,s32*);
extern s32 func_00196E10(),func_00196730(s32,s32),func_00194738(s32),func_00194C40(),func_00196028(),func_00195788(s32,s32),func_001189C0();
extern void **func_0017E620();
extern void func_001D2458(void*,s32),func_001965F0(s32,s32,void*),func_001966C0(s32,s32,s32),func_00196790(s32,s32,s32),func_00196860(s32,s32,s32),func_00196930(s32,s32,float),func_00196A00(s32,s32,float),func_00196AD0(s32,s32,s32),func_00196BA0(s32,s32,s32),func_00196C70(s32,s32,s32),func_00196D40(s32,s32,s32),func_002B2028(void*);
static inline void vi(V*p){p->b=0;p->e=0;p->c=0;}
static inline void init(R*p){p->vt=D_0044DBA0;p->a.b=0;p->a.e=0;p->a.c=0;vi(&p->b);p->y=1;func_00152688(p);}
static inline void push(R*p,s32 *v){if(p->a.e!=p->a.c){if(p->a.e)*p->a.e=*v;p->a.e += 1;}else func_00152720(p,p->a.e,v);}
static inline void destroy(V*p){s32 *b=p->b;s32 n=p->c-b;if(n){if(n*4)func_002B2028(b);else{*b=D_0040E618[-1];D_0040E618[-1]=b;}}}
static inline void rd(R*p){p->vt=D_0044DBA0;destroy(&p->b);destroy(&p->a);}
void func_0010D288(s32 unused,s32 first,s32 count,s32 mode){
R a; s32 str[8];R b;s32 t0,t1,t2,t3,t4,t5,t6,t7,aa,bb; s32 i,j,k,chosen,other=-1,ctx;void **o;char *v;
init(&a);chosen=func_00196730(func_00196E10(),0);if(func_00194738(func_00194C40()))other=func_00196730(func_00196E10(),1);
switch(mode){case 0:i=0;do{if(i!=chosen && (i!=other || i==-1)){t0=i;push(&a,&t0);}++i;}while(i<7);break;
case 1:i=0;do{j=i+7;if((unsigned short)j!=chosen && (j!=other || other==-1)){t1=j;push(&a,&t1);}i += 1;}while(i<8);break;
case 2:case 4:i=0;do{j=i+15;if(j!=chosen && (j!=other || j==-1)){t2=j;push(&a,&t2);}i += 1;}while(i<7);
if(func_00195788(func_00196028(),12)){t3=23;push(&a,&t3);}
if(func_00195788(func_00196028(),13)){t4=24;push(&a,&t4);}
if(func_00195788(func_00196028(),11)){t5=22;push(&a,&t5);}
if(func_00195788(func_00196028(),14)){t6=25;push(&a,&t6);}break;}
init(&b);i=0;do{t7=(unsigned short)i;push(&b,&t7);++i;}while(i<10);
for(i=first;i<first+count;i++){func_00152918(&a,&aa);func_00152918(&b,&bb);o=func_0017E620();v=*o;
func_001D2458(str,((s32(*)(void*,s32,s32))(*(void**)(v+44)))((char*)o+*(s16*)(v+40),57,bb));
func_001965F0(func_00196E10(),i,str);func_001966C0(func_00196E10(),i,aa);ctx=func_00196E10();func_00196790((int)ctx,i,*(s32*)(func_001189C0()+aa*52+4));func_00196860(func_00196E10(),i,bb);func_00196930(func_00196E10(),i,0.f);func_00196A00(func_00196E10(),i,0.f);func_00196AD0(func_00196E10(),i,0);func_00196BA0(func_00196E10(),i,0);func_00196C70(func_00196E10(),i,0);func_00196D40(func_00196E10(),i,0);}
rd(&b);rd(&a);
}
