class ForceCpp {};
extern "C" {
typedef struct E{void*fn;u32 kind;u32 key;void*obj;u32 x,active;struct E*next;u32 y;u64 refs;u32 orig;}E;
extern E**func_002AD838(void);extern E*func_002AE7C0(void);extern int func_002B0648(void*,void*,u32);extern void func_002AEA08(void);extern void func_002AE760(void);extern void func_002AE2F0(void) __attribute__((noreturn));extern void func_002AE718(void) __attribute__((noreturn));extern void*func_002AED98(void);extern void*func_002AE7F8(u32);extern void func_002AE8B0(void*,void*,void*);extern void func_002AED50(void);extern char D_0047D990[],D_0047D9A8[];
}
struct Guard{void*v;Guard(){v=D_0047D990;}~Guard(){v=D_0047D9A8;}};
extern "C" void func_002AEA38(s32 n,void**types){E*e=*func_002AD838();E*cur;int i;void*bad;void**p;
for(i=0;i<n;i++){if(func_002B0648(types[i],e->obj,e->key)){func_002AEA08();func_002AE2F0();}}
try{func_002AE760();func_002AE2F0();}catch(...){
cur=func_002AE7C0();if(e!=cur){e=cur;for(i=0;i<n;i++)if(func_002B0648(types[i],cur->obj,cur->key)){func_002AEA08();func_002AE2F0();}}
bad=func_002AED98();for(i=0;i<n;i++)if(func_002B0648(types[i],bad,e->key)){Guard temp;p=(void**)func_002AE7F8(sizeof(Guard));*p=temp.v;func_002AE8B0(p,((void*(*)(void))(*(void*** )p)[1])(),func_002AED50);func_002AE2F0();}func_002AE718();}
}
