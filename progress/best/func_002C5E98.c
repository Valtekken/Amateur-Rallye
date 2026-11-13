typedef struct { u16 unk0; u16 pad; s32 unk4; } E;
typedef struct { E *unk0; E *unk4; E *unk8; } Vec;
extern E *func_002C5D58(E *first, E *last, E *result);
extern void func_002C5DC8(E *p, E *e, E *v);
extern E *func_002C5E28(E *p, s32 n, E *v);
extern void func_002C6AF8(E *dst, E *src);
extern void func_002C67F8(void *a, s32 b);
extern void func_002B2028(void *p);
extern void *func_002B1FC0(s32 size);
extern void *func_003D2910(s32 size);
extern void *func_00152D28(u32 size);
extern u32 D_0040E618[];

static inline void dealloc(E *p, u32 count) {
    if (count) {
        if (count * 8) func_002B2028(p);
        else { *(u32 *)p = D_0040E618[-1]; D_0040E618[-1] = (u32)p; }
    }
}
static inline const u32 *maxref(const u32 *a, const u32 *b) { return *a < *b ? b : a; }
static inline E *alloc(u32 len) {
    u32 bytes = len * 8; E *p;
    if (len) {
        if (bytes) { E *q = func_002B1FC0(bytes); if (q) return q; return func_003D2910(bytes); }
        else { p = (E *)D_0040E618[-1]; if (!p) return func_00152D28(0); D_0040E618[-1] = *(u32 *)p; return p; }
    } else p = 0;
    return p;
}

void func_002C5E98(Vec *v, E *pos, u32 n, const E *value) {
    E *old; E x; u32 after; E *src; E *dst; s32 count;
    u32 size; u32 len; u32 bytes; E *p; E *end;
    if (n) {
        if ((u32)(v->unk8 - v->unk4) >= n) {
            old = v->unk4;
            x = *value;
            after = old - pos;
            if (n < after) {
                func_002C5D58(old - n, old, old);
                v->unk4 += n;
                src = old - n; dst = old; count = src - pos;
                for (; count > 0; --count) *--dst = *--src;
                func_002C6AF8(pos, &x);
            } else {
                func_002C5DC8(old, n - after, &x);
                v->unk4 += n - after;
                func_002C5D58(pos, old, v->unk4);
                v->unk4 += after;
                func_002C6AF8(pos, old);
            }
        } else {
            size = v->unk4 - v->unk0;
            len = size + *maxref(&size, &n);
            if (len) { bytes = len * 8; p = alloc(len); } else { p = 0; bytes = 0; }
            end = func_002C5D58(v->unk0, pos, p);
            end = func_002C5E28(end, n, &x);
            pos = func_002C5D58(pos, v->unk4, end);
            dealloc(v->unk0, v->unk8 - v->unk0);
            v->unk0 = p; v->unk4 = pos; v->unk8 = p + len;
        }
    }
}
