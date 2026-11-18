typedef struct {float x,y,z,w,t;} V5;
typedef struct {V5*b,*e,*c;} A5;
typedef struct {s32*b,*e,*c;} AI;
typedef struct {char pad[0xAC];AI ids;A5 points;} Obj;
typedef struct {char pad[0x50];s32 h;} Entry;
extern s32 func_0021F4B0(void);
extern Entry*func_0021E9C0(s32,s32*);
extern V5*func_00262FF8(s32);
extern void func_001CC488(A5*,V5*,V5*);
extern void func_00155DB0(AI*,s32*,s32*);
void func_001BA7D0(Obj*o,s32*id){Entry*n=func_0021E9C0(func_0021F4B0(),id);if(n){s32 h=n->h;if(h){V5*s=func_00262FF8(h);if(s){A5*a=&o->points;V5*d=a->e;if(d!=a->c){if(d){d->x=s->x;d->y=s->y;d->z=s->z;d->w=s->w;d->t=s->t;}a->e++;}else func_001CC488(a,d,s);{AI*a=&o->ids;s32*d=a->e;if(d!=a->c){if(d)*d=*id;a->e++;}else func_00155DB0(a,d,id);}}}}}
