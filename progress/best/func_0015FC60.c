extern void *D_002AD408(int);
extern void func_001D4040(char *, const char *);
extern void func_003FA310(char *, const char *, s32);
extern void func_0021E748(void *, char *);
extern void func_0021E620(void *, s32, void *);
extern void *func_0021E290(void *);
extern void *func_00160658(void *, s32);
extern s32 D_0040E890, D_0040E894, D_0040E898;
extern char D_0044ECE8[], D_0044ECF8[], D_0044ED08[], D_0044ED20[];
extern char D_0048DD58[], D_0048DD60[], D_0048DD68[];

typedef struct { char pad[0xC]; s32 fC, f10; } Obj;
typedef struct { s32 flags; } Other;

void func_0015FC60(Obj *a, Other *b) {
    char buf[32], name[16];
    s32 i, n;
    void *obj1, *obj2;
    if (D_0040E890 == 0) {
        func_001D4040(D_0048DD58, D_0044ECE8);
        D_0040E890 = 1;
    }
    i = 0;
    n = func_001E3650(func_001E4280(), (s32)D_0048DD58);
    if (n > 0) {
        do {
            func_003FA310(buf, D_0044ECF8, i);
            obj1 = func_0021E290(D_002AD408(0x7C));
            func_001D4040(name, buf);
            func_0021E748(obj1, name);
            obj2 = func_00160658(D_002AD408(0xC0), i);
            i++;
            func_0021E620(obj1, 0, obj2);
        } while (i < n);
    }
    if (D_0040E894 == 0) {
        func_001D4040(D_0048DD60, D_0044ED08);
        D_0040E894 = 1;
    }
    if (D_0040E898 == 0) {
        func_001D4040(D_0048DD68, D_0044ED20);
        D_0040E898 = 1;
    }
    a->fC = *(s32 *)D_0048DD60;
    a->f10 = *(s32 *)D_0048DD68;
    b->flags &= ~1;
}
