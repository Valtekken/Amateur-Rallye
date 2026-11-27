extern void func_002B2028(void *);
extern char D_0048DDE8[];
extern char D_00473A18[];
extern char D_00474288[];
extern char D_0040E618[];

void func_0019AA60(void) {
    char *base;
    char *end;
    char *it;
    s32 count;
    s32 size;
    char **vec;

    *(void **)(D_0048DDE8 + 0x4) = D_00473A18;

    vec = (char **)(D_0048DDE8 + 0x34);
    base = vec[0];
    end = vec[1];
    if (base < end) {
        it = base + 0x1C;
        do {
            it += 0x1C;
        } while (it < end);
    }
    count = (s32)(((u32)(vec[2] - base) * 0xB6DB6DB7u) >> 2);
    if (count != 0) {
        size = count * 0x1C;
        if (size != 0) {
            func_002B2028(base);
        } else {
            *(void **)base = *(void **)(D_0040E618 - 4);
            *(void **)(D_0040E618 - 4) = base;
        }
    }

    vec = (char **)(D_0048DDE8 + 0x28);
    base = vec[0];
    end = vec[1];
    if (base < end) {
        it = base + 0x2C;
        do {
            it += 0x2C;
        } while (it < end);
    }
    count = (s32)(((u32)(vec[2] - base) * 0xBA2E8BA3u) >> 2);
    if (count != 0) {
        size = count * 0x2C;
        if (size != 0) {
            func_002B2028(base);
        } else {
            *(void **)base = *(void **)(D_0040E618 - 4);
            *(void **)(D_0040E618 - 4) = base;
        }
    }

    *(void **)(D_0048DDE8 + 0x4) = D_00474288;
}
