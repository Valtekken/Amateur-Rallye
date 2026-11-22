typedef struct { s32 *begin; s32 *end; } S_func_001D4978_arg0;

s32 func_001D4978(S_func_001D4978_arg0 *a, s32 *key) {
    s32 *p = a->begin;
    s32 *end = a->end;
    s32 k = *key;
    for (; p != end; p++) {
        if (*p == k) return 1;
    }
    return 0;
}
