extern s32 func_003FA760(char *name, void *arg2);

s32 *func_002F8A38(s32 *out, void *arg1, void *arg2) {
    s32 sp[12];
    s32 i;
    s32 count;

    count = *(s32 *)((char *)arg1 + 0x30);
    sp[0] = 0;
    sp[4] = count;
    if (count == 0) goto notfound;
    {
        s32 step = 0x12C;
        do {
            s32 off;
            void *base;
            i = sp[0];
            base = *(void **)((char *)arg1 + 0x24);
            off = i * step;
            sp[4] = i;
            if (func_003FA760((char *)base + off + 4, arg2) == 0) {
                s32 val;
                s32 *arr;
                s32 idx;
                i = ((volatile s32 *)sp)[0];
                arr = *(s32 **)((char *)arg1 + 0xC);
                idx = i * 4;
                sp[8] = i;
                val = *(s32 *)((char *)arr + idx);
                *out = val;
                sp[4] = val;
                goto done;
            }
            i = sp[0];
            count = *(s32 *)((char *)arg1 + 0x30);
            i = i + 1;
            sp[0] = i;
            sp[4] = count;
        } while (i != count);
    }
notfound:
    *out = *(s32 *)((char *)arg1 + 0x58);
done:
    return out;
}
