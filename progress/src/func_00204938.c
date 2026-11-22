/* identical to func_001D4420 (matched), with its names changed by decompdecomp */
extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);
extern void *func_00152D28(u32);
extern void func_002B2028(void *);
extern void func_003F93CC(void *, void *, u32);
extern u32 D_0040E618[];
typedef struct { char *begin; char *cur; char *end; } Vec;
static inline void *alloc(u32 bytes) {
    void *p;
    if (bytes) { p = func_002B1FC0(bytes); if (p) return p; return func_003D2910(bytes); }
    else { void *head = (void *)D_0040E618[-1]; if (!head) return func_00152D28(0); D_0040E618[-1] = *(u32 *)head; return head; }
}
void func_00204938(Vec *v, u32 n) {
    char *begin = v->begin;
    u32 cap = (u32)(((s32)v->end - (s32)begin) >> 2);
    if (cap < n) {
        char *cur = v->cur;
        u32 index = (u32)(((s32)cur - (s32)begin) >> 2);
        u32 bytes; void *p;
        if (n) { bytes = n << 2; p = alloc(bytes); } else { p = 0; bytes = 0; }
        func_003F93CC(p, begin, (u32)(((s32)cur - (s32)begin) >> 2) << 2);
        { char *old = v->begin; u32 oldcap = (u32)(((s32)v->end - (s32)old) >> 2);
          if (oldcap) { if (oldcap << 2) func_002B2028(old); else { *(u32 *)old = D_0040E618[-1]; D_0040E618[-1] = (u32)old; } } }
        v->cur = (char *)p + (index << 2);
        v->begin = (char *)p;
        v->end = (char *)p + bytes;
    }
}
