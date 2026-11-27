typedef struct {
    s32 f0;
    s32 f4;
    u32 cnt;
    void *cb;
    char buf[16];
} Pool;
extern Pool D_0040E658;
extern char D_00477110[], D_00477120[], D_00477060[];
extern s32 D_0040E618[];
extern s32 func_001D4010(s32 *);
extern s32 func_00151A28(char **, s32, u32, const char *, s32);
extern void func_001D4040(s32 *, const char *);
extern void func_002B2028(void *);

s32 func_001E96D8(s32 arg0, s32 arg1) {
    const char *key1 = D_00477110;
    char *s, *tmp;
    char **ps = &s;
    s32 v, len, rc;
    const char *out;
    s32 *h;

    if (D_0040E658.cb != 0) {
        tmp = (char *)func_00151930(&D_0040E658);
    } else {
        tmp = D_0040E658.buf;
        D_0040E658.cnt++;
    }
    s = tmp;
    func_00151A28(ps, 0, 0xFFFFFFFFu, key1, func_003FA9B8(key1));
    v = func_001D4010((s32 *)arg1);
    func_00151A28(ps, *(s32 *)(*ps - 0x10), 0, (const char *)v, func_003FA9B8(v));
    func_00151A28(ps, *(s32 *)(*ps - 0x10), 0, D_00477120, func_003FA9B8(D_00477120));
    len = *(s32 *)(*ps - 0x10);
    if (len == 0) {
        out = D_00477060;
    } else {
        (*ps)[len] = 0;
        out = *ps;
    }
    func_001D4040((s32 *)arg0, out);
    h = (s32 *)(*ps - 0x10);
    rc = --h[2];
    if (rc == 0) {
        if (h[1] + 0x10 != 0) {
            func_002B2028(h);
        } else {
            s32 head = D_0040E618[-1];
            h[4] = head;
            D_0040E618[-1] = (s32)h;
        }
    }
    return arg0;
}
