extern u32 D_0040E658[];
extern s32 func_00151930(void *);

void **func_002C8950(void **arg0) {
    void *v;
    if (D_0040E658[3] != 0) {
        v = func_00151930((void *)D_0040E658);
    } else {
        D_0040E658[2] = D_0040E658[2] + 1;
        v = (void *)(D_0040E658 + 4);
    }
    *arg0 = v;
    return arg0;
}
