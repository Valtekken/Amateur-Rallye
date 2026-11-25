typedef struct { s32 x, y, z; } Hdr;
extern u32 D_0040E618[];
extern u32 D_0040E658[];
extern char D_004798C8[], D_004798E0[], D_004798E8[], D_004798F8[];
extern s32 func_00151930(void *);
extern s32 func_003FA9B8(void *);
extern void func_00151A28(char **, char *, s32, void *, s32);
extern s32 func_001E4280(void);
extern void func_001D4040(char **, char *);
extern void func_001E3EC0(s32, char **, s32);
extern void func_001E40A0(s32, char **, s32);
extern void func_003FA310(char *, void *, s32);
extern void func_002B2028(void *);

static char *newstr(void) {
    char *p = (char*)&D_0040E658 + 0x10;
    if (*(u32*)((char*)&D_0040E658 + 0xC)) p = (char*)func_00151930(&D_0040E658);
    else *(u32*)((char*)&D_0040E658 + 8) = *(u32*)((char*)&D_0040E658 + 8) + 1;
    return p;
}
static char *term(char *s) {
    s32 off = *(s32*)(s - 0x10);
    if (off != 0) { s[off] = 0; return s; }
    return D_004798E0;
}
static void release(char *s) {
    Hdr *h = (Hdr*)(s - 0x10);
    s32 r = h->z - 1;
    h->z = r;
    if (r == 0) {
        if ((s32)h->y + 0x10 != 0) {
            *(u32*)h = D_0040E618[-1];
            D_0040E618[-1] = (u32)h;
        } else func_002B2028(h);
    }
}
void func_0022B8B8(void *arg1) {
    s32 n = (s32)(((u32)(*(s32*)((char*)arg1+4) - *(s32*)arg1) * 0xAAAAAAABU) >> 2);
    char *s0 = newstr();
    s32 t = func_001E4280();
    s32 i;
    func_00151A28(&s0, 0, -1, D_004798C8, func_003FA9B8(D_004798C8));
    func_001D4040(&s0, term(s0));
    func_001E3EC0(t, &s0, n);
    for (i = 0; i < n; i++) {
        char *s = newstr();
        char fmt[0x110];
        func_00151A28(&s, 0, -1, D_004798E8, func_003FA9B8(D_004798E8));
        func_003FA310(fmt, D_004798F8, i);
        func_00151A28(&s, *(char**)(s-0x10), 0, fmt, func_003FA9B8(fmt));
        t = func_001E4280();
        func_001D4040(&s, term(s));
        func_001E40A0(t, &s, *(s32*)((char*)arg1) + i*0xC);
        release(s);
    }
    release(s0);
}
