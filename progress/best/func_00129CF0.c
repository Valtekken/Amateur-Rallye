extern void func_002B56C0(void *, s32, s32);
extern void func_002B5708(void *, void *);
extern void func_003FA310(void *, const char *, const char *);
extern char D_004285F0[];
extern char D_00449000[];

typedef struct {
    s32 unk78;
} Arg0;

void func_00129CF0(Arg0 *arg0, s8 *arg1) {
    s8 *p = arg1;
    s8 c = *p;
    s8 *stack_buf[0x20];

    if (c != 0) {
        do {
            if (c == '\n' || c == '\r') {
                *p = 0;
                func_003FA310(stack_buf, D_00449000, p);
                func_002B56C0(D_004285F0, 0x1E, arg0->unk78);
                func_002B5708(D_004285F0, stack_buf);
                p = p + 1;
                arg0->unk78 = arg0->unk78 + 1;
                *p = '\n';
            } else {
                p = p + 1;
            }
            c = *p;
        } while (c != 0);
    }
}
