extern char D_004464E0[],D_004464F8[];
extern void *D_00428F24;
extern void func_003F9698(char*,char*);
extern s32 func_002C20D0(void),func_002C2EE0(void);
extern void func_002C39D8(s32),func_00110098(void),func_00110478(s32);
extern s32 D_0048D748[];
typedef struct Entry {s16 delta,pad;void (*call)();} Entry;
void func_00110238(s32 unused,s32 id){
void *o;
func_003F9698(D_004464E0,D_004464F8);
func_002C39D8(func_002C20D0());
if(!D_00428F24)func_002C39D8(func_002C2EE0());
o=D_00428F24;
if(id>=46)id=0;
{Entry *v=*(Entry**)o;((s32 (*)(void*,s32))v[7].call)((char*)o+v[7].delta,1);}
func_00110098();func_00110098();func_00110098();func_00110098();
{Entry *v=*(Entry**)o;((s32 (*)(void*))v[2].call)((char*)o+v[2].delta);}
{Entry *v=*(Entry**)o;((s32 (*)(void*,s32,s32,s32))v[4].call)((char*)o+v[4].delta,D_0048D748[id],512,512);}
if((u32)(id-42)<4){
{Entry *v=*(Entry**)o;((s32 (*)(void*,s32))v[6].call)((char*)o+v[6].delta,0);}
}else{
{Entry *v=*(Entry**)o;((s32 (*)(void*,s32))v[6].call)((char*)o+v[6].delta,1);}
}
func_00110478(id);
}
