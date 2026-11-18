typedef struct { float x, y, z, w; } V;
typedef struct { V r[4]; } M;
extern void func_0028D208(void *, void *);
extern float func_0015ACB0(void);
extern float func_003F3140(float);
extern float func_003F2F50(float);
extern void func_00152108(M *, M *, M *);
extern void func_001525D8(M *, M *, float);
#define F(p,o) (*(float *)((char *)(p)+(o)))
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
static inline __attribute__((always_inline)) V *vi(V *p, float x, float y, float z, float w) { p->x=x; p->y=y; p->z=z; p->w=w; return p; }
static inline void vc(V *p, const V *q) { p->x=q->x; p->y=q->y; p->z=q->z; p->w=q->w; }
static inline void vs(V *p, float x, float y, float z) { p->x=x; p->y=y; p->z=z; }
static inline void vp(V *p, V *q) { p->x=q->x; p->y=q->y; p->z=q->z; p->w=1.0f; }
static inline void qa(V *q, V *axis, float angle) { float h=angle*0.5f; float s=func_003F3140(h); q->x=s*axis->x; q->y=s*axis->y; q->z=s*axis->z; q->w=func_003F2F50(h); }
static inline M *qm(M *m, V *q) {
    float x2=q->x+q->x, y2=q->y+q->y, z2=q->z+q->z;
    float xx=x2*q->x, yy=y2*q->y, zz=z2*q->z;
    float xy=y2*q->x, xz=z2*q->x, yz=z2*q->y, wx=x2*q->w, wy=y2*q->w, wz=z2*q->w;
    vi(&m->r[0],1.0f-(yy+zz),xy-wz,xz+wy,0.0f);
    vi(&m->r[1],xy+wz,1.0f-(xx+zz),yz-wx,0.0f);
    vi(&m->r[2],xz-wy,yz+wx,1.0f-(xx+yy),0.0f);
    vi(&m->r[3],0.0f,0.0f,0.0f,1.0f);
    return m;
}
static inline void identity(M *dst, V *qptr) {
    char *obj=(char *)dst-0x20;
    vi(qptr,1.0f,0.0f,0.0f,0.0f); vc((V *)(obj+0x20),qptr);
    vi(qptr,0.0f,1.0f,0.0f,0.0f); vc((V *)(obj+0x30),qptr);
    vi(qptr,0.0f,0.0f,1.0f,0.0f); vc((V *)(obj+0x40),qptr);
    vi(qptr,0.0f,0.0f,0.0f,1.0f); vc((V *)(obj+0x50),qptr);
}
void func_0028D260(void *a, void *b) {
    char *t; M *dst; V q, q2; M mx, my, mz;
    if (!I(a,0xC)) func_0028D208(a,b);
    t = P(b,0x4C);
    if (!t) return;
    dst = (M *)(t+0x20);
    if (I(a,0x14) == 1) {
        identity(dst,&q);
        q.x=1.0f; qa(&q2,&q,F(a,0x98)); func_00152108(dst,qm(&mx,&q2),dst);
        vs(&q2,0.0f,1.0f,0.0f); qa(&q,&q2,F(a,0x9C)); func_00152108(dst,qm(&my,&q),dst);
        vs(&q2,0.0f,0.0f,1.0f); qa(&q,&q2,F(a,0xA0)); func_00152108(dst,qm(&mz,&q),dst);
        func_001525D8(dst,dst,F(a,0x24));
        q2.x=F(P(b,0x50),0x50)+(float)I(a,0x10)*32.0f+F(a,0x8C);
        q2.y=F(P(b,0x50),0x54)+F(a,0x90);
        q2.z=F(P(b,0x50),0x58)+F(a,0x94);
        q2.w=1.0f; vp((V *)(t+0x50),&q2);
    } else if (I(a,0x18) == 1) {
        float r1, r2, th;
        identity(dst,&q);
        F(a,0x98)=0.0f; F(a,0x9C)=0.0f;
        r1=func_0015ACB0(); r2=func_0015ACB0();
        F(a,0xA0)=F(a,0x38)-((float)(I(a,0x10)*4)*r1)/90.0f-r2*0.5f;
        vs(&q,1.0f,0.0f,0.0f); qa(&q2,&q,F(a,0x98)); func_00152108(dst,qm(&mx,&q2),dst);
        vs(&q,0.0f,1.0f,0.0f); qa(&q2,&q,F(a,0x9C)); func_00152108(dst,qm(&my,&q2),dst);
        vs(&q,0.0f,0.0f,1.0f); qa(&q2,&q,F(a,0xA0)); func_00152108(dst,qm(&mz,&q2),dst);
        func_001525D8(dst,dst,F(a,0x24));
        th=F(a,0x38)-((float)(I(a,0x10)*4)*func_0015ACB0())/90.0f;
        q.x=F(P(b,0x50),0x50)+func_003F2F50(th)*F(a,0x34);
        q.y=F(P(b,0x50),0x54)-func_003F3140(th)*F(a,0x34);
        q.z=F(P(b,0x50),0x58);
        th=((float)(I(a,0x10)*4)*func_0015ACB0())/90.0f;
        q.x+=F(a,0x8C); q.y+=F(a,0x90); q.z+=F(a,0x94);
        q.w=1.0f; vp((V *)(t+0x50),&q);
        F(a,0x38)+=func_0015ACB0()/45.0f;
    } else if (I(a,0x1C) == 1) {
        float th;
        identity(dst,&q);
        vs(&q,1.0f,0.0f,0.0f); qa(&q2,&q,F(a,0x98)); func_00152108(dst,qm(&mx,&q2),dst);
        vs(&q,0.0f,1.0f,0.0f); qa(&q2,&q,F(a,0x9C)); func_00152108(dst,qm(&my,&q2),dst);
        vs(&q,0.0f,0.0f,1.0f); qa(&q2,&q,F(a,0xA0)); func_00152108(dst,qm(&mz,&q2),dst);
        func_001525D8(dst,dst,F(a,0x24));
        th=F(a,0x38)-((float)(I(a,0x10)*4)*func_0015ACB0())/90.0f;
        q2.x=F(P(b,0x50),0x50)+func_003F2F50(th)*F(a,0x34)+(float)I(a,0x10)*32.0f;
        q2.y=F(P(b,0x50),0x54)-func_003F3140(th)*F(a,0x34);
        q2.z=F(P(b,0x50),0x58);
        q2.x+=F(a,0x8C); q2.y+=F(a,0x90); q2.z+=F(a,0x94);
        q2.w=1.0f; vp((V *)(t+0x50),&q2);
    }
    F(a,0x98)=F(a,0x98)+F(a,0x80);
    F(a,0x9C)=F(a,0x9C)+F(a,0x84);
    F(a,0x8C)=F(a,0x8C)+F(a,0x74);
    F(a,0xA0)=F(a,0xA0)+F(a,0x88);
    F(a,0x90)=F(a,0x90)+F(a,0x78);
    F(a,0x94)=F(a,0x94)+F(a,0x7C);
    if (F(a,0xB0) < F(a,0x8C)) F(a,0x74)=-F(a,0x74);
    if (F(a,0xB4) < F(a,0x90)) F(a,0x78)=-F(a,0x78);
    if (F(a,0xB8) < F(a,0x94)) F(a,0x7C)=-F(a,0x7C);
    if (F(a,0x8C) < 0.0f) F(a,0x74)=-F(a,0x74);
    if (F(a,0x90) < 0.0f) F(a,0x78)=-F(a,0x78);
    if (F(a,0x24) < 0.0f) F(a,0x7C)=-F(a,0x7C);
    F(a,0x24)=F(a,0x24)+F(a,0x30);
    if (F(a,0x2C) <= F(a,0x24)) F(a,0x30)=-F(a,0x30);
    if (F(a,0x24) < F(a,0x28) || F(a,0x24) <= 0.0f) F(a,0x30)=-F(a,0x30);
    q.x=F(a,0x3C)+F(a,0x4C); q.y=F(a,0x40)+F(a,0x50); q.z=F(a,0x44)+F(a,0x54); q.w=F(a,0x48)+F(a,0x58);
    F(a,0x3C)=q.x; F(a,0x40)=q.y; F(a,0x44)=q.z; F(a,0x48)=q.w;
    if (1.0f < q.x) { F(a,0x3C)=q.x-F(a,0x4C); F(a,0x4C)=-F(a,0x4C); }
    if (1.0f < q.y) { F(a,0x40)=q.y-F(a,0x50); F(a,0x50)=-F(a,0x50); }
    if (1.0f < q.z) { F(a,0x44)=q.z-F(a,0x54); F(a,0x54)=-F(a,0x54); }
    if (1.0f < q.w) { F(a,0x48)=q.w-F(a,0x58); F(a,0x58)=-F(a,0x58); }
    if (q.x < 0.0f) { F(a,0x3C)=q.x-F(a,0x4C); F(a,0x4C)=-F(a,0x4C); }
    if (q.y < 0.0f) { F(a,0x40)=q.y-F(a,0x50); F(a,0x50)=-F(a,0x50); }
    if (q.z < 0.0f) { F(a,0x44)=q.z-F(a,0x54); F(a,0x54)=-F(a,0x54); }
    if (q.w < 0.0f) { F(a,0x48)=q.w-F(a,0x58); F(a,0x58)=-F(a,0x58); }
    if (t) { q2.x=F(a,0x3C); q2.y=F(a,0x40); q2.z=F(a,0x44); q2.w=F(a,0x48); vp((V *)(t+0x10),&q2); I(t,0x88)=I(t,0x88)+1; }
}
