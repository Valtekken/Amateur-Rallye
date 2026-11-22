extern void func_001D4040(void *, const char *);
extern const char D_0044C558[];
extern char D_0044C6C0[];

void *func_0014E3B8(s32 *p) {
    s32 k;
    s32 vtable;
    func_001D4040(&k, D_0044C558);
    p[1] = k;
    vtable = (s32)D_0044C6C0;
    p[0] = -1;
    p[2] = vtable;
    p[4]=0; p[5]=0; p[6]=0; p[7]=0; p[8]=0;
    p[9]=0; p[10]=0; p[11]=0; p[12]=0;
    return p;
}
