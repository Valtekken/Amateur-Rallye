extern void func_00179EE0(void *, void *, void *);

void func_0017BE38(void *arg0, f32 unused, f32 divisor) {
    f32 sp[3];
    f32 t;
    char *pCC = (char *)arg0 + 0xCC;
    char *pC0 = (char *)arg0 + 0xC0;
    void *p18 = *(void **)((char *)arg0 + 0x18);
    void *fc = *(void **)((char *)p18 + 0xC);
    char *obj = *(char **)((char *)fc + 4);
    char *q = obj + 0xE0;
    sp[0] = *(f32 *)pC0 - *(f32 *)pCC;
    sp[1] = *(f32 *)(pC0 + 4) - *(f32 *)(pCC + 4);
    sp[2] = *(f32 *)(pC0 + 8) - *(f32 *)(pCC + 8);
    t = (sp[0] * *(f32 *)(obj + 0xE0) + sp[1] * *(f32 *)(q + 4) + sp[2] * *(f32 *)(q + 8)) / divisor;
    func_00179EE0(sp, arg0, p18);
    *(f32 *)((char *)arg0 + 0xF0) = -(sp[0] * *(f32 *)(obj + 0xE0) + sp[1] * *(f32 *)(q + 4) + sp[2] * *(f32 *)(q + 8)) + t;
}
