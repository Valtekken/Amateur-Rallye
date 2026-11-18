typedef struct{s32 value;u8 pad[12];} Str;
typedef struct {s32 name;u8 pad[32];} Desc;
extern void func_002D0C80(void*);
extern char *func_001D4010(s32*);
extern void func_003F9698(const char*,const char*);
extern char D_00483B40[];
extern void *func_002D0D00(const char*);
extern void *func_003F94D0(void*,s32,u32);
extern void *func_003F931C(void*,const void*,u32);
extern void *D_002AD408(u32);
extern void *func_002D1398(void*);
extern void func_001D4040(Str*,s32);
extern void func_002D1448(void*,Str*,s32);
static inline Str *make_str(Str *p,s32 name){func_001D4040(p,name);return p;}
static inline u32 desc_count(u32 bytes,u32 size){return bytes/size;}
void func_002D0D78(register void *a,register s32 *b){Str tmp;s32 i=0;void **out=(void**)((u8*)a+0x220);s32 *name=(s32*)((u8*)a+0x11c);Desc *start=(Desc*)((u8*)a+0x190),*p=start;u32 bytes=144;void *data;*(s32*)((u8*)a+0x11c)=*b;func_002D0C80(a);func_003F9698(D_00483B40,func_001D4010(name));data=func_002D0D00(func_001D4010(name));func_003F94D0(start,0,144);func_003F931C(start,data,144);*(s32*)((u8*)a+0x230)=desc_count(bytes,36U);do{if(p->name){*out=func_002D1398(D_002AD408(56));func_002D1448(*out,make_str(&tmp,p->name),512);}i++;out++;p++;}while(i<*(s32*)((u8*)a+0x230));*(s32*)((u8*)a+0x118)=0;*(s32*)((u8*)a+0x11c)=*b;}
