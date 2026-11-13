extern void func_001D4040(void*,const char*);extern char D_00446920[],D_0044D740[];
typedef struct {float x,y,z;} Vec;
static inline void initv(Vec *v){v->x=0;v->y=0;v->z=0;}
static inline void copyv(Vec *d,Vec*s){d->x=s->x;d->y=s->y;d->z=s->z;}
void *func_001153E8(char *p){s32 key[4];Vec v;func_001D4040(key,D_00446920);*(s32*)(p+4)=key[0];*(s32*)p=-1;*(void**)(p+8)=D_0044D740;*(s32*)(p+12)=1;initv(&v);copyv((Vec*)(p+16),&v);initv(&v);copyv((Vec*)(p+28),&v);*(float*)(p+40)=0;*(s32*)(p+48)=1;*(s32*)(p+44)=0;return p;}
