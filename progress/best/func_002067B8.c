typedef struct { u64 *b,*e,*c; } V8;
typedef struct { s32 *b,*e,*c; } V4;
extern void func_00219B10(void*);
extern void D_002AD390(void*);
extern void func_002B2028(void*);
extern u32 D_0040E618[];

void func_002067B8(void *arg0, s32 arg1) {
    char *o = arg0;
    V8 *v8 = (V8*)(o + 0x14);
    u64 *p, *bb;
    s32 n, *b4;
    if ((u32)v8->b < (u32)v8->e) {
        p = v8->b + 1;
        while ((u32)p < (u32)v8->e) p++;
    }
    bb = v8->b;
    n = v8->c - bb;
    if (n) {
        if (n * 8) func_002B2028(bb);
        else { *(u32*)bb = D_0040E618[-1]; D_0040E618[-1] = (u32)bb; }
    }
    func_00219B10(arg0);
    b4 = ((V4*)(o + 0x4))->b;
    n = ((V4*)(o + 0x4))->c - b4;
    if (n) {
        if (n * 4) func_002B2028(b4);
        else { *(u32*)b4 = D_0040E618[-1]; D_0040E618[-1] = (u32)b4; }
    }
    if (arg1 & 1) D_002AD390(arg0);
}
