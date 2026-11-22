extern int func_003F9698(const char *, ...);
extern const char D_00475E50[];
extern const char D_00475E60[];

typedef struct BucketEA0 {
    char *base;
    char *cur;
} BucketEA0;

typedef struct VecEA0 {
    BucketEA0 **begin;
    BucketEA0 **cur;
} VecEA0;

void func_001D3EA0(void *arg0) {
    VecEA0 *v = (VecEA0 *)arg0;
    BucketEA0 **it;

    func_003F9698(D_00475E50);
    it = v->begin;
    if (it != v->cur) {
        do {
            BucketEA0 *b = *it;
            int idx = (int)(it - v->begin);
            int size = (int)(b->cur - b->base);
            it++;
            func_003F9698(D_00475E60, idx, size);
        } while (it != v->cur);
    }
}
