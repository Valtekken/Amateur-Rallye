extern s32 D_0043C0EC;
extern void *D_004A9950[];
extern char D_0048A930[];
extern void func_003F9698(char *);

static inline void settag(u32 *p, u32 bits) {
    u32 v = *p;
    *p = (v & 0x3FFFFFFF) | (((v >> 30) | bits) << 30);
}
static inline void setlow(u32 *p, u32 v) {
    *p = (*p & 0xC0000000) | (v & 0x3FFFFFFF);
}

void func_003EEF60(void *arg0) {
    u8 *h, *base, *end, *slot, *p, *q;
    u32 tag, off, magic, mask, v, v2;
    s32 n, i, found;

    if (arg0 == 0) goto check;
    h = (u8 *)arg0 - 0xC;
    tag = *(u32 *)arg0;
    off = *(u32 *)(h + 4);
    magic = *(u32 *)(h + 8);
    mask = tag & 0x3FFFFFFF;
    base = h - mask;
    end = h + off;
    if (magic != 0xDEADF00D) { for (;;) { } }
    switch (tag >> 30) {
    case 1:
        *(u32 *)(base + 4) += off;
        *(u32 *)(h + 8) = 0;
        h = base;
        *(u32 *)h &= 0x3FFFFFFF;
        v = *(u32 *)end;
        *(u32 *)end = (v & 0x3FFFFFFF) | (((v >> 30) | 1) << 30);
        setlow((u32 *)end, *(u32 *)(h + 4));
        break;
    case 2:
        found = 0; i = 0; n = D_0043C0EC;
        if (n > 0) {
            p = (u8 *)&D_004A9950[0];
            q = p;
            do {
                i++;
                if (*(void **)p == end) {
                    found = 1;
                    n--;
                    D_0043C0EC = n;
                    *(void **)q = D_004A9950[n];
                    break;
                }
                p += 4;
                q += 4;
            } while (i < n);
        }
        if (!found) { do { for (;;) { } } while (!found); }
        v = *(u32 *)(h + 4);
        v2 = *(u32 *)end;
        *(u32 *)(base + 4) = v + v2;
        *(u32 *)h &= 0x3FFFFFFF;
        slot = (u8 *)&D_004A9950[D_0043C0EC];
        n = D_0043C0EC + 1;
        settag((u32 *)base, 2);
        v = *(u32 *)(h + 4);
        end = h + v;
        settag((u32 *)end, 2);
        *(u32 *)(h + 8) = 0xDEAFBEEF;
        *(void **)slot = h;
        D_0043C0EC = n;
        break;
    case 3:
        found = 0; i = 0; n = D_0043C0EC;
        if (n > 0) {
            p = (u8 *)&D_004A9950[0];
            q = p;
            do {
                i++;
                if (*(void **)p == end) {
                    found = 1;
                    n--;
                    D_0043C0EC = n;
                    *(void **)q = D_004A9950[n];
                    break;
                }
                p += 4;
                q += 4;
            } while (i < n);
        }
        if (!found) { do { for (;;) { } } while (!found); }
        v = *(u32 *)end;
        v2 = *(u32 *)base;
        *(u32 *)(base + 4) = *(u32 *)(h + 4) + v + v2;
        h = base;
        *(u32 *)h &= 0x3FFFFFFF;
        v = *(u32 *)(h + 4);
        setlow((u32 *)(h + v), v);
        h = base;
        *(u32 *)(h + 8) = 0xDEAFBEEF;
        break;
    default:
        settag((u32 *)base, 2);
        slot = (u8 *)&D_004A9950[D_0043C0EC];
        n = D_0043C0EC + 1;
        settag((u32 *)end, 1);
        *(u32 *)(h + 8) = 0xDEAFBEEF;
        *(void **)slot = h;
        D_0043C0EC = n;
        break;
    }
check:
    if (D_0043C0EC == 0) func_003F9698(D_0048A930);
}
