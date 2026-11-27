extern void *D_002AD408(u32);
extern void func_001D4040(void *, const char *);
extern void func_00155DB0(void *, void *, void *);
extern void func_0026EC28(void *, void *, void *);
extern void func_00225960(void *, void *);
extern void func_00225518(void *, s32);
extern char D_00479738[], D_00479740[], D_00479748[];

typedef struct { void *b, *e, *cap; } V;

#define PUSH(val) do { \
    if (vec.e != vec.cap) { if (vec.e) *(void **)vec.e = (val); vec.e = (void **)((char *)vec.e + 4); } \
    else func_0026EC28(&vec, &vec.e, &slot); \
} while (0)

#define PUSHKEY(val) do { \
    V *v = (V *)(val); \
    if (v->e != v->cap) { if (v->e) *(void **)v->e = key; v->e = (void **)((char *)v->e + 4); } \
    else func_00155DB0(v, v->e, key); \
    PUSH(val); \
} while (0)

void func_00225C70(void) {
    V vec; s32 pad[3]; s32 key[8]; V *slot; s32 res;
    vec.b = 0; vec.e = 0; vec.cap = 0;
    pad[0]=0; pad[1]=0; pad[2]=0;
    key[0]=0; key[1]=0;
    slot = (V *)D_002AD408(0xC);
    slot->b = 0; slot->e = 0; slot->cap = 0;
    func_001D4040(key, D_00479738);
    PUSHKEY(slot);
    PUSH(slot);
    slot = (V *)D_002AD408(0xC);
    slot->b = 0; slot->e = 0; slot->cap = 0;
    PUSH(slot);
    slot = (V *)D_002AD408(0xC);
    slot->b = 0; slot->e = 0; slot->cap = 0;
    func_001D4040(key, D_00479740);
    PUSHKEY(slot);
    func_001D4040(key, D_00479748);
    PUSHKEY(slot);
    PUSH(slot);
    func_00225960(&res, &vec);
    func_00225518(&vec, 2);
}
