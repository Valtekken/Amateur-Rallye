
typedef struct {s32 x[3];} Item;
typedef struct {Item *begin,*end;u8 pad[68];s32 width;u8 pad2[8];s32 height;} Grid;
Item *func_002EE080(Grid *a,s32 b,s32 c,s32 d){s32 i=c*a->width+b+d*a->height;if(i<0)return 0;if((u32)i<(u32)(a->end-a->begin))return a->begin+i;return 0;}
typedef struct {u32 begin,end,cap;} Vec;
static inline __attribute__((always_inline)) void init(Vec *p){p->begin=0;p->end=0;p->cap=0;}
void *func_002D1E68(void *a){volatile s32 dummy[32];u32 *p=a;(void)dummy;p[0]=0;p[1]=0;p[2]=0;p[3]=0;p[4]=0;p[5]=0;p[6]=0;p[7]=0;p[14]=0;p[15]=0;init((Vec*)((u8*)a+0x40));init((Vec*)((u8*)a+0x4c));p[22]=1;init((Vec*)((u8*)a+0x5c));init((Vec*)((u8*)a+0x68));init((Vec*)((u8*)a+0x74));init((Vec*)((u8*)a+0x80));init((Vec*)((u8*)a+0x8c));init((Vec*)((u8*)a+0x98));return a;}
extern s32 func_003FA580(s32,s32);extern s32 D_00429C00;extern u8 D_00429C04[];
s32 *func_002D0D00(s32 a){s32 *p=&D_00429C00; s32 *r=0;for(;;){s32 v=*p;if(!v)break;if(!func_003FA580(v,a)){r=(s32*)((u8*)p+4);break;}p=(s32*)((u8*)p+148);}if(!r)r=(s32*)D_00429C04;return r;}
extern s32 func_002D13F0(s32,s32);
extern void *func_003F94D0(void*,s32,s32);
static inline int positive(s32 *p,s32 n){return *p>n;}
void func_002D0C80(void *a){s32 i=0;u8 *p;if(positive((s32*)((u8*)a+0x230),0)){p=(u8*)a+0x220;do{s32 v=*(s32*)p;if(v){func_002D13F0(v,3);*(s32*)p=0;}i++;p+=4;}while(i<*(s32*)((u8*)a+0x230));}func_003F94D0((u8*)a+0x190,0,0x90);*(s32*)((u8*)a+0x230)=0;}
