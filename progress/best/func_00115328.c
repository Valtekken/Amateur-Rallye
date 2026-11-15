extern void func_0040B328(s32);
s32 func_001000D0(void){return ((s32(*)(s32))func_0040B328)(0);}
extern void *func_0021F4B0(void);
extern void *func_0021E9C0(void*,void*);
extern void func_0029FA58(void*,s32,s32);
extern void func_0029FA68(void*,s32,void*);
extern void func_0011C760(void*,s32,s32);
void func_00115328(register u8 *a,register s32 b){
f32 color[4];void *p,*q;s32 t;
color[3]=1.0f;color[0]=1.0f;color[1]=1.0f;color[2]=1.0f;
p=func_0021E9C0(func_0021F4B0(),a+0x68);
if(p){q=*(void**)((u8*)p+4);if(q){t=*(s32*)((u8*)q+4);
if(t==*(s32*)(a+0x54)){func_0029FA58(q,*(s32*)(a+0x78),b);func_0029FA68(q,*(s32*)(a+0x78),color);}
else if(t==*(s32*)(a+0x58))func_0011C760(q,*(s32*)(a+0x78),b);}}}
extern void func_001E2460(void*,s32);
extern void func_001E2A48(void*,const char*,void*);
extern void func_001E2470(void*,const char*,void*);
extern const char D_00446938[],D_00446978[],D_00446980[];
static inline __attribute__((always_inline)) void *init(void *p,s32 a){func_001E2460(p,a);return p;}
void func_00115EE8(register u8 *a,register s32 b,register s32 c){u8 buf[16];init(buf,c);func_001E2A48(buf,D_00446938,a+12);func_001E2A48(buf,D_00446978,a+24);func_001E2470(buf,D_00446980,a+36);}
extern void func_00116D50(void);
extern void func_00116F88(void*),func_00117AF0(void*),func_00118600(void*),func_00118908(void*);
extern u8 D_0044DBF8[];
void *func_00116ED0(register u8*a){register s32 i;register u8*p=a;*(void**)(a+0xc98)=D_0044DBF8;
i=28;do{--i;func_00118600(p);p+=52;}while(i!=-1);
p=a+0x5e4;i=38;do{--i;func_00118908(p);p+=44;}while(i!=-1);
func_00116D50();func_00116F88(a);func_00117AF0(a);return a;}
