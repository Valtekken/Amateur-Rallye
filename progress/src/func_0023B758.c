extern void D_002AD390(void*);
extern void func_002B2028(void*);
extern u32 D_0040E618[];

void func_0023B758(void *p, int f) {
    u32 *b = *(u32**)p;
    int n = (int)((char*)*(void**)((char*)p+8) - (char*)b) >> 2;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(b);
        } else {
            *b = D_0040E618[-1];
            D_0040E618[-1] = (u32)b;
        }
    }
    if (f & 1) D_002AD390(p);
}
