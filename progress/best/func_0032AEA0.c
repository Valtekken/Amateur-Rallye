extern void *func_002B1FC0(unsigned);
extern void *func_003D2910(unsigned);
extern void *func_00152D28(unsigned);
extern void func_003F931C(void *, void *, int);
extern u32 D_0040E618[];

static inline void *raw(unsigned size){void *r=func_002B1FC0(size);if(r==0)return func_003D2910(size);return r;}
static inline void *zeroalloc(void){void *p=(void*)D_0040E618[-1];if(p==0)return func_00152D28(0);D_0040E618[-1]=*(u32*)p;return p;}

void *func_0032AEA0(void *arg0) {
    u32 cap = 0x10;
    u32 n = *(u32 *)arg0 + 1;
    u32 sz;
    void *buf;
    s32 len;
    void *result;

    for (; cap < n; cap <<= 1) { }
    sz = cap + 0x10;
    buf = sz ? raw(sz) : zeroalloc();
    *(u32 *)((char *)buf + 4) = cap;
    *(u32 *)((char *)buf + 8) = 1;
    *(u32 *)((char *)buf + 0xC) = 0;
    len = *(s32 *)arg0;
    result = (char *)buf + 0x10;
    if (len != 0) {
        func_003F931C(result, (char *)arg0 + 0x10, len);
    }
    *(s32 *)buf = *(s32 *)arg0;
    return result;
}
