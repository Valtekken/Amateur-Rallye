extern u32 D_0040E618[];
extern void func_002B2028(void *);
extern void **func_00151A28(void **, const void *, u32);

typedef struct { s32 len; s32 cap; s32 refcount; s32 fieldC; } Hdr;

void **func_001539A0(void **dst, s32 flag, u32 minlen, void **src, u32 pos, u32 n) {
    u32 slen = *(u32 *)((char *)*src - 0x10);
    char *d;
    Hdr *h;
    char *s;
    u32 rem;

    if (flag == 0) {
        d = (char *)*dst;
        if (minlen >= *(u32 *)(d - 0x10)) {
            h = (Hdr *)(d - 0x10);
            if (pos == 0 && n >= slen - pos) {
                if (src != dst) {
                    if (--h->refcount == 0) {
                        if (h->cap + 0x10 != 0) func_002B2028(h);
                        else { *(u32 *)(d - 0x10) = D_0040E618[-1]; D_0040E618[-1] = (u32)(d - 0x10); }
                    }
                    s = (char *)*src;
                    h = (Hdr *)(s - 0x10);
                    if (h->fieldC != 0) s = (char *)func_00151930(h);
                    else h->refcount++;
                    *dst = s;
                }
                return dst;
            }
        }
    }
    rem = slen - pos;
    rem = rem < n ? rem : n;
    return func_00151A28(dst, (char *)*src + pos, rem);
}
