extern s32 func_0023BFF0(s32, s32, s32);

typedef struct { s32 unk0; s32 **arr; s32 **end; } S;

void func_0023BF28(s32 arg0, s32 arg1, s32 arg2, S *arg3) {
    s32 i = arg2 + 1;
    s32 n, item, off, offi;

    off = arg2 << 2;
    *(s32 **)((char *)arg3->arr + off) = 0;
    n = ((s32)arg3->end - (s32)arg3->arr) >> 2;
    if (i < n) {
        do {
            offi = i << 2;
            item = *(s32 **)((char *)arg3->arr + offi);
            if (item != 0) {
                if (func_0023BFF0(arg0, item, arg1) != 0)
                    *(s32 **)((char *)arg3->arr + offi) = NULL;
            }
            i++;
        } while (i < n);
    }
}
