extern char D_00446528[],D_00446540[];
extern void *D_00428F24;
extern void func_003F9698(char*,char*);
extern s32 func_002C20D0(void),func_002C2EE0(void);
extern void func_002C39D8(s32),func_00110098(void);
typedef struct Entry {s16 delta,pad;void (*call)();} Entry;
static inline void dispatch(void *o,int n){Entry *v=*(Entry**)o;v[n].call((char*)o+v[n].delta);}
void func_00110378(void){
void *o;Entry *v;
func_003F9698(D_00446528,D_00446540);
func_002C39D8(func_002C20D0());
if(!D_00428F24)func_002C39D8(func_002C2EE0());
o=D_00428F24;v=*(Entry**)o;
((s32 (*)(void*,s32))v[7].call)((char*)o+v[7].delta,1);
func_00110098();func_00110098();
dispatch(o,5);dispatch(o,3);
}
