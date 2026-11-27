extern s32 D_002AD5A8(s32, u32);
extern void D_002AD530(s32);
extern void func_003F931C(s32, s32, s32);
extern s32 D_0043C000;

void func_0031E190(void *arg0, s32 arg1) {
    void *s = *(void **)((char *)arg0 + 0x14);
    s32 c = *(s32 *)((char *)s + 0xC);

    if ((*(s32 *)((char *)s + 8) - c) < 4) {
        u32 need = c + 0x24;
        s32 v = 0;

        D_0043C000 = *(s32 *)((char *)s + 0x10);
        while ((u32)(1 << v) < need) {
            v++;
        }
        {
            s32 size = 1 << v;
            s32 cap = size - 0x20;
            s32 alloc = D_002AD5A8(size * 4, need);
            s32 aligned = (alloc + 0x7F) & 0xFFFFFF80;
            s32 count = *(s32 *)((char *)s + 0xC);

            if (count > 0) {
                func_003F931C(aligned, *(s32 *)((char *)s + 0), count * 4);
            }
            if (*(s32 *)((char *)s + 4) != 0) {
                D_002AD530(*(s32 *)((char *)s + 4));
            }
            *(s32 *)((char *)s + 4) = alloc;
            *(s32 *)((char *)s + 0) = aligned;
            *(s32 *)((char *)s + 8) = cap;
            D_0043C000 = 0;
            c = *(s32 *)((char *)s + 0xC);
        }
    }

    {
        s32 *base = *(s32 **)((char *)s + 0);
        s32 idx = c;
        s32 n1 = idx + 1;
        s32 n2;
        s32 n3;
        s32 masked = arg1 & 0x0FFFFFFF;

        base[idx] = 0x20000000;
        *(s32 *)((char *)s + 0xC) = n1;
        n2 = n1 + 1;
        n3 = n1 + 2;
        base = *(s32 **)((char *)s + 0);
        base[n1] = masked;
        idx = n1 + 3;
        *(s32 *)((char *)s + 0xC) = n2;
        base = *(s32 **)((char *)s + 0);
        base[n2] = 0;
        *(s32 *)((char *)s + 0xC) = n3;
        base = *(s32 **)((char *)s + 0);
        base[n3] = 0;
        *(s32 *)((char *)s + 0xC) = idx;
    }
}
