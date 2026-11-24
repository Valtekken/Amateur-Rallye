extern void func_003D7E50(s32*);

void func_003D8B60(s32 *a, s32 *b) {
    s32 f, v, tmp;
    
    a[1] = (s32)b;
    f = b[0];
    if (f & 0x800) {
        func_003D7E50(b);
        f = b[0];
    }
    tmp = b[1];
    if (f & 0x100) {
        v = tmp - b[2];
    } else {
        v = tmp - b[3];
    }
    a[2] = v;
    a[0] = b[12];
    b[12] = (s32)a;
}
