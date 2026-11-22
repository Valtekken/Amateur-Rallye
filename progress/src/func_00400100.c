extern s32 func_003FFAC0(void *, s32 *);
extern s32 *func_003FFAF0(void *, s32 *, s32, s32);
extern s32 *func_003FFE98(void *, s32);
extern s32 *func_003FFED0(void *, s32 *, s32 *);
extern s32 D_0048C5E0[];

s32 *func_00400100(void *arg0, s32 *arg1, s32 arg2) {
    s32 rem;
    s32 n;
    s32 *result;
    s32 *node;
    s32 *next;
    s32 *newres;
    s32 *tmp;

    n = arg2;
    rem = n & 3;
    result = arg1;
    if (rem != 0) result = func_003FFAF0(arg0, arg1, D_0048C5E0[rem - 1], 0);

    n >>= 2;
    if (n == 0) return result;

    node = *(s32 **)((char *)arg0 + 0x48);
    if (node == NULL) {
        tmp = func_003FFE98(arg0, 0x271);
        *(s32 **)((char *)arg0 + 0x48) = tmp;
        node = tmp;
        *node = NULL;
    }

    while (1) {
        if (n & 1) {
            newres = func_003FFED0(arg0, result, node);
            func_003FFAC0(arg0, result);
            result = newres;
        }
        n >>= 1;
        if (n == 0) break;
        next = *node;
        if (next == NULL) {
            next = func_003FFED0(arg0, node, node);
            *node = next;
            *next = NULL;
        }
        node = next;
    }
    return result;
}
