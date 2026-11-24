extern void func_002069F0(void *);
extern void func_0021DC88(s32, void *);
extern void func_00218E50(void *, s32, void *);
extern void func_002B2028(void *);
extern u32 D_0040E618[];

void *func_002063F0(void *arg0, s32 arg1, s32 *arg2) {
    s32 *list;
    s32 cur, end;
    char *item;
    s32 n;
    char sp[0x34];
    f32 *p, *q;
    s32 n2;
    char *item2;

    list = (s32 *)((char *)arg0 + 4);
    cur = list[0];
    end = list[1];
    n = ((s32)((u32)(end - cur) * 0xC4EC4EC5u) >> 2) - 1;
    item = (char *)(0x34 * n + cur);

    if (arg1 == 0 || (((*(s32 *)(item + 4) - *(s32 *)(item + 0)) >> 1) == 0)) {
        *arg2 = 0;
        return item;
    }

    func_002069F0(sp);
    *(s32 *)(sp + 0xC) = *(s32 *)(item + 0xC);
    p = (f32 *)(item + 0x10);
    q = (f32 *)(item + 0x1C);
    *(f32 *)(sp + 0x10) = p[0];
    *(f32 *)(sp + 0x14) = p[1];
    *(f32 *)(sp + 0x18) = p[2];
    *(f32 *)(sp + 0x1C) = q[0];
    *(f32 *)(sp + 0x20) = q[1];
    *(f32 *)(sp + 0x24) = q[2];
    *(f32 *)(sp + 0x28) = q[3];
    *(u16 *)(sp + 0x2C) = *(u16 *)(item + 0x2C);

    if (list[0] == list[1]) {
        func_0021DC88(list[0], sp);
        list[0] = list[0] + 0x34;
    } else {
        func_00218E50(list, list[0], sp);
    }
    *arg2 = 1;

    cur = list[0];
    end = list[1];
    n2 = (*(s32 *)(sp + 0xC) - *(s32 *)(sp + 0)) >> 1;
    item2 = (char *)((((s32)((u32)(end - cur) * 0xC4EC4EC5u) >> 2) - 1) * 0x34 + cur);

    if (n2 != 0) {
        if ((n2 * 2) != 0) {
            func_002B2028(sp);
        } else {
            *(s32 *)sp = D_0040E618[-1];
            D_0040E618[-1] = (u32)sp;
        }
    }
    return item2;
}
