extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_001D4040(void*, const char*);
extern void func_001E3D10(s32, void*, s32);
extern s32 func_00296530(void*, void*);
extern s32 func_00296710(void);
extern void func_0010CD30(void*, void*);
extern char D_004448F8[], D_00445D98[];

typedef struct {float x,y,z,w;} V4;
static inline void init(V4*p,float x,float y,float z,float w){p->x=x;p->y=y;p->z=z;p->w=w;}
static inline void copy(V4*p,V4*q){p->x=q->x;p->y=q->y;p->z=q->z;p->w=q->w;}
typedef struct {char pad[16];V4 color;char pad2[104];s32 dirty;} Node;
static inline void color(Node*n,V4*v){copy(&n->color,v);n->dirty++;}
void func_0010CBD8(void *arg0, void *arg1) {
    s32 key;
    union {s32 key[4];V4 a;} u; V4 b;
    if (func_00296530((void*)func_00296710(), arg1) != 0) {
        key = func_001E4280();
        func_001D4040(u.key, D_004448F8);
        if (func_001E3650(key, (s32)u.key) == *(s32*)((char*)arg0 + 0xC)) {
            key = func_001E4280();
            func_001D4040(u.key, D_00445D98);
            func_001E3D10(key, u.key, 1);
            func_0010CD30(arg0, arg1);
            Node *p4c = *(Node**)((char*)arg1 + 0x4C);
            init(&b,1.0f,1.0f,1.0f,1.0f);color(p4c,&b);
        } else {
            Node *p4c = *(Node**)((char*)arg1 + 0x4C);
            init(&u.a,0.4f,0.4f,0.4f,0.8f);color(p4c,&u.a);
        }

    }
}
