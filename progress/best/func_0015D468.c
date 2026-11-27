extern void **func_001E6D58(void);
extern void *func_00169408(void *);
extern void *func_0019B668(void *);
extern void *func_001891D0(void *);
extern void *func_0018D9D0(void *);
extern void func_001C4898(void *, void **, void **);
extern void *D_002AD408(s32);

typedef struct {
    void **start;
    void **finish;
    void **end;
} PtrVec;

static inline void PushBack(PtrVec *vec, void *val) {
    void *tmp = val;
    if (vec->finish != vec->end) {
        if (vec->finish != 0) {
            *vec->finish = tmp;
        }
        vec->finish++;
    } else {
        func_001C4898(vec, vec->finish, &tmp);
    }
}

void func_0015D468(void) {
    PtrVec *vec = (PtrVec *)(*func_001E6D58());

    PushBack(vec, func_00169408(D_002AD408(0x68)));
    PushBack(vec, func_0019B668(D_002AD408(0x70)));
    PushBack(vec, func_001891D0(D_002AD408(0x344)));
    PushBack(vec, func_0018D9D0(D_002AD408(0x3C)));
}
