extern void func_00151A28(void *, void *, int, void *, int);
extern void func_003FA310(void *, char *, int);
extern int func_003FA9B8(void *);
extern void func_002B2028(void *);
extern char D_0040E658[];
extern char D_00471298[];
extern char D_0044E918[];
extern char D_0040E618[];

void *func_0018FAF0(void *arg0, void *arg1, int arg2) {
    void *sp0;
    char sp10[0x100];
    void *p;
    void *hdr;
    int val;

    if (*(int *)(D_0040E658 + 0xC) != 0) {
        p = (void *)func_00151930(D_0040E658);
    } else {
        p = D_0040E658 + 0x10;
        *(int *)(D_0040E658 + 0x8) = *(int *)(D_0040E658 + 0x8) + 1;
    }
    sp0 = p;

    func_00151A28(&sp0, 0, -1, D_00471298, func_003FA9B8(D_00471298));

    func_003FA310(sp10, D_0044E918, arg2);
    func_00151A28(&sp0, *(void **)((char *)sp0 - 0x10), 0, sp10, func_003FA9B8(sp10));

    hdr = (char *)sp0 - 0x10;
    if (*(int *)((char *)hdr + 0xC) == 0) {
        *(int *)((char *)hdr + 0x8) += 1;
    } else {
        sp0 = (void *)func_00151930(hdr);
    }

    *(void **)arg0 = sp0;

    hdr = (char *)sp0 - 0x10;
    val = *(int *)((char *)hdr + 0x8) - 1;
    *(int *)((char *)hdr + 0x8) = val;
    if (val == 0) {
        if (*(int *)((char *)hdr + 0x4) + 0x10 != 0) {
            func_002B2028(hdr);
        } else {
            *(void **)((char *)sp0 - 0x10) = *(void **)(D_0040E618 - 4);
            *(void **)(D_0040E618 - 4) = hdr;
        }
    }

    return arg0;
}
