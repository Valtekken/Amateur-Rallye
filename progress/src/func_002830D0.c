extern void func_001D4040(void*,const char*);extern u8 func_00289698(void*);extern char D_0047AD68[],D_0047AF08[],D_0047AF18[],D_0047D3F8[];
typedef struct {float x,y,z;} Vec;
static inline void initv(Vec *v){v->x=0;v->y=0;v->z=0;}
static inline void initv1(Vec *v){v->x=1.0f;v->y=0;v->z=0;}
static inline void copyv(Vec *d,Vec*s){d->x=s->x;d->y=s->y;d->z=s->z;}
void *func_002830D0(char *p){s32 key[4];Vec v;char *sub=p+0xC,*last=p+0x74,*child=p+0x14;func_001D4040(key,D_0047AF08);*(void**)(p+8)=D_0047D3F8;*(s32*)sub=0;*(s32*)p=-1;*(s32*)(p+4)=key[0];func_00289698(child);*(s32*)last=0;func_001D4040(sub,D_0047AF18);initv(&v);copyv((Vec*)(p+0x5C),&v);initv1(&v);copyv((Vec*)(p+0x68),&v);*(float*)(p+0x54)=1.0f;*(s32*)(p+0x58)=0;func_001D4040(last,D_0047AD68);return p;}
