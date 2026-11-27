typedef struct { s32 f0, f4, cnt; void *cb; char buf[16]; } Pool;
extern Pool D_0040E658;
extern char D_0044FD20[], D_0044E918[], D_0044E838[];
extern s32 D_0040E618[];
extern s32 func_001D4010(s32 *);
extern s32 func_00151930(Pool *);
extern void func_00151A28(char **, s32, u32, const char *, s32);
extern void func_003FA310(char *, const char *, s32);
extern void func_001D4040(void *, const char *);
extern void func_002B2028(void *);
extern s32 func_003FA9B8(const char *);

s32 func_001789A8(s32 *arg0, s32 *arg1, s32 arg2) {
    volatile char pad[0xE0];
    char *s, *tmp;
    char **ps = &s;
    s32 v, len, rc;
    const char *out;
    char sp10[16];

    v = func_001D4010(arg1);
    if (D_0040E658.cb) tmp = (char *)func_00151930(&D_0040E658);
    else { tmp = D_0040E658.buf; D_0040E658.cnt++; }
    s = tmp;
    func_00151A28(ps, 0, 0xFFFFFFFFu, D_0044FD20, func_003FA9B8(D_0044FD20));
    func_00151A28(ps, *(s32 *)((u32)s - 0x10), 0, (const char *)v, func_003FA9B8((const char *)v));
    func_003FA310(sp10, D_0044E918, arg2);
    func_00151A28(ps, *(s32 *)((u32)s - 0x10), 0, sp10, func_003FA9B8(sp10));
    len = *(s32 *)((u32)s - 0x10);
    if (len == 0) out = D_0044E838;
    else { s[len] = 0; out = s; }
    func_001D4040((void *)arg0, out);
    {
        s32 *h = (s32 *)((u32)s - 0x10);
        rc = --h[2];
        if (rc == 0) {
            if (h[1] + 0x10 != 0) func_002B2028(h);
            else { s32 head = D_0040E618[-1]; h[4] = head; D_0040E618[-1] = (s32)h; }
        }
    }
    return (s32)arg0;
}
