typedef struct Node {
    s32 field_0;
    void *parent;
    void *left;
    void *right;
} Node;

s32 func_003A3EB0(s32);

s32 func_003A0628(register s32 arg0) {
    if (arg0 == 0)
        return 0;
    return func_003A3EB0(arg0 * 0x1C);
}

s32 func_003B1A90(s32);

s32 func_003ACD28(register s32 arg0, register s32 arg1) {
    register s32 s0 = arg0;
    register s32 s1 = arg1;
    register s32 s2 = func_003B1A90(s0);
    return s2 < func_003B1A90(s1);
}

void func_003ACDA0(register void *x, register void **root) {
    void *y = ((Node *)x)->right;
    ((Node *)x)->right = ((Node *)y)->left;
    if (((Node *)y)->left)
        ((Node *)((Node *)y)->left)->parent = x;
    ((Node *)y)->parent = ((Node *)x)->parent;
    if (x == *root)
        *root = y;
    else if (x == ((Node *)((Node *)x)->parent)->left)
        ((Node *)((Node *)x)->parent)->left = y;
    else
        ((Node *)((Node *)x)->parent)->right = y;
    ((Node *)y)->left = x;
    ((Node *)x)->parent = y;
}

void func_003ACE60(register void *x, register void **root) {
    void *y = ((Node *)x)->left;
    ((Node *)x)->left = ((Node *)y)->right;
    if (((Node *)y)->right)
        ((Node *)((Node *)y)->right)->parent = x;
    ((Node *)y)->parent = ((Node *)x)->parent;
    if (x == *root)
        *root = y;
    else if (x == ((Node *)((Node *)x)->parent)->right)
        ((Node *)((Node *)x)->parent)->right = y;
    else
        ((Node *)((Node *)x)->parent)->left = y;
    ((Node *)y)->right = x;
    ((Node *)x)->parent = y;
}
