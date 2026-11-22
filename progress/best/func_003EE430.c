extern void *D_0040E618[];
extern s32 D_0040E658[];
extern void func_002B2028(void*);
extern void func_003ED0B8(void*);
extern s32 D_0049D4A0;
extern void *D_0049D4C0;

void func_003EE430(s32 arg0, s32 arg1) {
    s32 n;
    void **p;
    void *q;
    void **base;
    void **end;
    void **cur;
    void *t;
    void *u;
    s32 c;
    if (arg1 != 0xFFFF) return;
    if (arg0 != 0) {
        n = 0x18;
        func_003ED0B8(&D_0049D4A0);
        p = &D_0049D4C0;
        do {
            if (D_0040E658[3] != 0) {
                q = (void*)func_00151930(&D_0040E658);
            } else {
                q = (void*)((char*)&D_0040E658 + 0x10);
                D_0040E658[2] = D_0040E658[2] + 1;
            }
            *p = q;
            n = n - 1;
            p = p + 1;
        } while (n != -1);
        return;
    }
    base = &D_0049D4C0;
    end = base + 0x64/4;
    if (base == 0) return;
    if (end == base) return;
    cur = end - 1;
    do {
        t = *cur;
        u = (char*)t - 0x10;
        c = *(s32*)((char*)u + 8) - 1;
        *(s32*)((char*)u + 8) = c;
        if (c == 0) {
            if (*(s32*)((char*)u + 4) + 0x10 == 0) {
                *(void**)((char*)t - 0x10) = D_0040E618[-1];
                D_0040E618[-1] = u;
            } else {
                func_002B2028(u);
            }
        }
        cur = cur - 1;
    } while (cur != base);
}
