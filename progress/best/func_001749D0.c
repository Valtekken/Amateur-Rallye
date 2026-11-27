extern void D_002AD530(void *);
extern void func_00175AD0(void *, int);
extern void func_00268150(void *, void *);
extern void func_002B2028(void *);
extern char D_00473920[];
extern char D_0040E618[];

void func_001749D0(void *arg0, void *arg1) {
    char *p;
    char *end;
    char *it;
    char **v174;
    char *cur, *last;
    s32 count;
    s32 size;

    *(void **)((char *)arg0 + 0x14) = D_00473920;

    p = *(char **)((char *)arg0 + 0xB0);
    if (p != 0) {
        int n = *(int *)(p - 0x10);
        end = p + n * 12;
        if (p != end) {
            it = end - 12;
            do {
                it -= 12;
            } while (p != it);
        }
        D_002AD530(p - 0x10);
    }

    p = *(char **)((char *)arg0 + 0xB4);
    if (p != 0) {
        int n = *(int *)(p - 0x10);
        end = p + n * 12;
        if (p != end) {
            it = end - 12;
            do {
                it -= 12;
            } while (p != it);
        }
        D_002AD530(p - 0x10);
    }

    p = *(char **)((char *)arg0 + 0xB8);
    if (p != 0) {
        D_002AD530(p);
    }

    v174 = (char **)((char *)arg0 + 0x174);
    cur = v174[0];
    last = v174[1];
    if (cur < last) {
        do {
            func_00175AD0(cur, 2);
            cur += 0x30;
        } while (cur < last);
    }

    {
        char *base = v174[0];
        count = (s32)((u32)(v174[2] - base) * 0xAAAAAAABu) >> 4;
        if (count != 0) {
            size = count * 0x30;
            if (size != 0) {
                func_002B2028(base);
            } else {
                *(void **)base = *(void **)((char *)D_0040E618 - 4);
                *(void **)((char *)D_0040E618 - 4) = base;
            }
        }
    }

    func_00268150(arg0, arg1);
}
