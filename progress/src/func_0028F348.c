typedef struct {float x,y,z,w;} V;
typedef struct {V r[4];} M;
void func_001525D8(M*, M*, float);
void func_0028F2E0(void*, void*);
static inline V *vi(V*p,float x,float y,float z,float w){p->x=x;p->y=y;p->z=z;p->w=w;return p;}
static inline void vc(V*p,const V*q){p->x=q->x;p->y=q->y;p->z=q->z;p->w=q->w;}
static inline void vp(V*p,V*q){p->x=q->x;p->y=q->y;p->z=q->z;p->w=1;}
static inline void identity(M*dst,V*qptr){char*obj=(char*)dst-32;vi(qptr,1,0,0,0);vc((V*)(obj+32),qptr);vi(qptr,0,1,0,0);vc((V*)(obj+48),qptr);vi(qptr,0,0,1,0);vc((V*)(obj+64),qptr);vi(qptr,0,0,0,1);vc((V*)(obj+80),qptr);}
typedef struct {char pad[0x20]; M mat;} Obj;
typedef struct {char pad[0x4C]; Obj* obj;} B;
void func_0028F348(void*a, B*b){
    V saved; V q; Obj*o; V *r3;
    if (*(int*)((char*)a+0xC)==0) func_0028F2E0(a,b);
    o = b->obj;
    if (o!=NULL){
        r3 = &o->mat.r[3];
        saved.x = o->mat.r[3].x;
        saved.y = r3->y;
        saved.z = r3->z;
        identity(&o->mat,&q);
        func_001525D8(&o->mat,&o->mat,*(float*)((char*)a+0x10));
        vp(&o->mat.r[3],&saved);
    }
}
