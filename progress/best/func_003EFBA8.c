extern int D_002AD408(int), func_00260358(int), func_002AA520(void*, char*, int), func_003FA9B8(char*);
extern void func_00260508(int, int), func_002B2028(void*), func_003F9698(char*, char*);
extern char *func_001D4010(int*); extern int *func_002B4AD8(void);
extern int D_0040E618[], D_0040E658[];
extern char D_0048B370[], D_0048B378[], D_0048B3A0[], D_0048B3D8[];
extern void func_00151A28(char**, int, int, char*, int);

static inline void append_str(char **s, char *p) {
    func_00151A28(s, 0, -1, p, func_003FA9B8(p));
}

int func_003EFBA8(int *self, int *arg) {
    char *str;
    char *p;
    char *path;
    int *o;
    int *vt;
    int n;
    int res;
    char tmp[16];

    if (*arg && *arg == self[2]) return self[1];
    if (self[1]) func_00260508(self[1], 3);
    self[2] = *arg;
    self[1] = func_00260358(D_002AD408(32));
    o = func_002B4AD8();
    vt = (int *)*o;
    p = ((char *(*)(void *))vt[15])((char *)o + *(short *)((char *)vt + 0x38));
    if (D_0040E658[3]) {
        str = (char *)func_00151930(D_0040E658);
    } else {
        str = (char *)&D_0048B370[0];
        D_0040E658[2]++;
    }
    append_str(&str, p);
    p = func_001D4010(arg);
    append_str(&str, p);
    p = D_0048B3D8;
    append_str(&str, p);
    if (*(int *)(str - 16)) {
        str[*(int *)(str - 16)] = 0;
        path = str;
    } else {
        path = D_0048B370;
    }
    if (func_002AA520(tmp, path, self[1])) {
        func_003F9698(D_0048B378, func_001D4010(arg));
    } else {
        func_003F9698(D_0048B3A0, func_001D4010(arg));
    }
    res = self[1];
    p = str - 16;
    *(int *)(p + 8) -= 1;
    n = *(int *)(p + 8);
    if (n == 0) {
        if (*(int *)(p + 4) + 16) {
            func_002B2028(p);
        } else {
            *(int *)p = D_0040E618[-1];
            D_0040E618[-1] = (int)p;
        }
    }
    return res;
}
