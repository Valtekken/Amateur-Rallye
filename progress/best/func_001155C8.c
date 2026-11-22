typedef struct {float x,y,z,w;} V;
typedef struct {V r[4];} M;
typedef struct {char pad[0x20]; M mat;} Obj;
typedef struct {char pad[0x50]; Obj *obj;} B;
float func_003F3140(float); float func_003F2F50(float);
void func_00152108(M*,M*,M*); void func_001525D8(M*,M*,float);
s32 func_00115AC0(void*);
#define F(p,o) (*(float*)((char*)(p)+(o)))
static inline __attribute__((always_inline)) V *vi(V*p,float x,float y,float z,float w){p->x=x;p->y=y;p->z=z;p->w=w;return p;}
static inline void vc(V*p,const V*q){p->x=q->x;p->y=q->y;p->z=q->z;p->w=q->w;}
static inline void vp(V*p,V*q){p->x=q->x;p->y=q->y;p->z=q->z;p->w=1;}
static inline void qa(V*q,V*axis,float angle){float h=angle*0.5f;float s=func_003F3140(h);q->x=s*axis->x;q->y=s*axis->y;q->z=s*axis->z;q->w=func_003F2F50(h);}
static inline M *qm(M*m,V*q){float x2=q->x+q->x,y2=q->y+q->y,z2=q->z+q->z;
float xx=x2*q->x,yy=y2*q->y,zz=z2*q->z;
float xy=y2*q->x,xz=z2*q->x,yz=z2*q->y,wx=x2*q->w,wy=y2*q->w,wz=z2*q->w;
vi(&m->r[0],1-(yy+zz),xy-wz,xz+wy,0);
vi(&m->r[1],xy+wz,1-(xx+zz),yz-wx,0);
vi(&m->r[2],xz-wy,yz+wx,1-(xx+yy),0);
vi(&m->r[3],0,0,0,1);return m;}
static inline void identity(M*dst,V*qptr){char*obj=(char*)dst-32;vi(qptr,1,0,0,0);vc((V*)(obj+32),qptr);vi(qptr,0,1,0,0);vc((V*)(obj+48),qptr);vi(qptr,0,0,1,0);vc((V*)(obj+64),qptr);vi(qptr,0,0,0,1);vc((V*)(obj+80),qptr);}
void func_001155C8(void *a, B *b) {
    V q, axis; M mx,my,mz; M *dst; char *o;
    s32 v3 = 0;
    if (*(s32*)((char*)a+0x2C)) F(a,0x20) += 0.0349f;
    if (*(s32*)((char*)a+0x30)) v3 = func_00115AC0(a);
    if (v3 || *(s32*)((char*)a+0xC) || *(s32*)((char*)a+0x2C)) {
        dst = &b->obj->mat;
        identity(dst, &axis);
        vi(&axis,1,0,0,0); qa(&q,&axis,F(a,0x1C)); func_00152108(dst,qm(&mx,&q),dst);
        vi(&axis,0,1,0,0); qa(&q,&axis,F(a,0x20)); func_00152108(dst,qm(&my,&q),dst);
        vi(&axis,0,0,1,0); qa(&q,&axis,F(a,0x24)); func_00152108(dst,qm(&mz,&q),dst);
        func_001525D8(dst,dst,F(a,0x28));
        o = (char*)b->obj;
        vp((V*)(o+0x50),(V*)((char*)a+0x10));
        *(s32*)((char*)a+0xC) = 0;
    }
}
