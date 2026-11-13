extern void func_001C6938(s32, s32);
extern void func_002B2028(void *);

typedef struct S_func_00270030_arg1 {
    u8 pad0[8];
    struct S_func_00270030_arg1 *left;
    s32 field_0c;
} S_func_00270030_arg1;

void func_00270030(s32 arg0, S_func_00270030_arg1 *p) {
    while (p != NULL) {
        S_func_00270030_arg1 *n;
        func_001C6938(arg0, p->field_0c);
        n = p->left;
        func_002B2028(p);
        p = n;
    }
}
