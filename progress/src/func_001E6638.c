typedef struct {void *begin,*end,*cap;} Vec;
typedef struct {float x;void *value;s32 type;u32 flags;} Arg;
typedef struct {u8 pad[0x14];Vec vec;} Res;
extern void D_002AD390(void*);
extern void func_001D2488(void*,void*,...);
extern void func_001D2CD8(void*,const char*);
extern void func_001D4040(void*,const char*);
extern void func_001E00E8(void*);
extern Res *func_001E16B8(void*,Arg*,s32),*func_001E1868(void*,Arg*,s32),*func_001E1940(void*,Arg*,s32),*func_001E1A00(void*,Arg*,s32),*func_001E1AC0(void*,Arg*,s32),*func_001E1C10(void*,Arg*,s32),*func_001E1E88(void*,Arg*,s32),*func_001E1F88(void*,Arg*,s32),*func_001E2090(void*,Arg*,s32),*func_001E21B0(void*,Arg*,s32);
extern Res *func_001E1778(void*,Arg*,float),*func_001E1CD0(void*,Arg*,void*);
extern s32 func_001E4D70(Arg*,void*),func_001E4D90(Arg*),func_001E4DC8(Arg*),func_001E5CC0(Arg*),func_001E5D00(Arg*),func_001E5D38(Arg*),func_001E5D70(Arg*),func_001E5DA8(Arg*);
extern void func_001EAE78(Vec*,void*,void*);
extern char D_004769C0[],D_00476A40[],D_00476A78[],D_00476A88[],D_00476DF0[];
static inline __attribute__((always_inline)) u32 *init_key(u32 *p,const char*s){func_001D4040(p,s);return p;}
static inline u32 *pair_init(u32*p,u32 key,const char*t){p[1]=0;p[0]=key;func_001D2CD8(p+1,t);return p;}
static inline void append(Vec*v,u32*p){u32 end=(u32)v->end;if(end!=(u32)v->cap){if(end){*(u32*)end=p[0];func_001D2488((char*)end+4,p+1);}v->end=(char*)v->end+8;}else func_001EAE78(v,(void*)end,p);}
Res *func_001E6638(void *unused,Arg *a){
u8 work[0xD0];u32 tmp[12];
Res *r;const char *text;Vec *v;
if((a->type ^ 12)==0)return 0;
r=0;func_001E00E8(work);
switch(a->type){
case 0:{s32 n=0;if(a->type==0)n=*(s32*)a->value;r=func_001E16B8(work,a,n);break;}
case 1:{float n;if(a->type==1)n=*(float*)a->value;else n=0;r=func_001E1778(work,a,n);break;}
case 2:{s32 n=0;if(a->type==2)n=*(s32*)a->value;r=func_001E1868(work,a,n);break;}
case 8:r=func_001E1940(work,a,func_001E5CC0(a));break;
case 11:r=func_001E1A00(work,a,func_001E5DA8(a));break;
case 3:r=func_001E1AC0(work,a,func_001E4D90(a));break;
case 4:r=func_001E1C10(work,a,func_001E4DC8(a));break;
case 9:{void *n=0;if(a->type==9)n=a->value;r=func_001E1CD0(work,a,n);break;}
case 5:r=func_001E21B0(work,a,func_001E5D70(a));break;
case 6:r=func_001E2090(work,a,func_001E5D38(a));break;
case 7:r=func_001E1F88(work,a,func_001E5D00(a));break;
case 10:r=func_001E1E88(work,a,func_001E4D70(a,init_key(&tmp[0],D_00476DF0)));break;
}
if(r){
init_key(tmp,D_00476A78);
text=((a->flags>>2)&1)?D_00476A40:D_004769C0;
pair_init(tmp+4,tmp[0],text);append(&r->vec,tmp+4);
D_002AD390((void*)tmp[5]);
init_key(tmp+8,D_00476A88);
text=((a->flags>>1)&1)?D_00476A40:D_004769C0;
pair_init(tmp,tmp[8],text);append(&r->vec,tmp);D_002AD390((void*)tmp[1]);
}return r;}
