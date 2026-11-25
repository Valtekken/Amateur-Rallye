typedef struct VecBase {
    void *begin;
    void *end;
    void *capacity;
} VecBase;

extern void *D_00473730;
extern void *D_0044DCD8;
extern u32 D_0040E618[];
extern void func_002B2028(void *);
extern void D_002AD390(void *);

void func_0018CC70(void *obj, s32 flags) {
    VecBase *vec = (VecBase *)((char *)obj + 0x10);
    
    *(void **)((char *)obj + 0x8) = &D_00473730;
    
    void *begin = vec->begin;
    void *end = vec->end;
    void *capacity = vec->capacity;
    
    for (; begin < end; begin = (char *)begin + 4) {}
    
    void *p = vec->begin;
    s32 n = ((s32)capacity - (s32)p) >> 2;
    
    if (n != 0) {
        if (n * 4 != 0) {
            func_002B2028(vec->begin);
        } else {
            *(u32 *)vec->begin = D_0040E618[-1];
            D_0040E618[-1] = (u32)vec->begin;
        }
    }
    
    *(void **)((char *)obj + 0x8) = &D_0044DCD8;
    
    if (flags & 1) {
        D_002AD390(obj);
    }
}
