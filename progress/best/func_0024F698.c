extern void func_00244788(void);
extern s32 func_00244CF8(s32, void *, void *, void *, void *);

void func_00244C58(s32 arg0, void *arg1, void *arg2) {
    f32 sp20, sp24, sp28;
    f32 sp30, sp34, sp38;
    s32 sp0 = 0, sp4 = 0, sp8 = 0;
    s32 sp10 = 0, sp14 = 0, sp18 = 0;
    func_00244788();
    sp20 = *(f32 *)((char *)arg1 + 0);
    sp24 = *(f32 *)((char *)arg1 + 4);
    sp28 = *(f32 *)((char *)arg1 + 8);
    sp30 = *(f32 *)((char *)arg2 + 0);
    sp34 = *(f32 *)((char *)arg2 + 4);
    sp38 = *(f32 *)((char *)arg2 + 8);
    func_00244CF8(arg0, &sp20, &sp30, &sp0, &sp10);
}

s32 func_0024F698(void *arg0) {
    s32 count = 0;
    void *head = *(void **)((char *)arg0 + 8);
    void *cur = *(void **)head;
    if (cur != head) {
        s32 *pc = &count;
        void **pcu = &cur;
        void *ph = head;
        do {
            *pc = *pc + 1;
            *pcu = *(void **)*pcu;
        } while (*pcu != ph);
    }
    return count;
}

s32 **func_0024F6E0(s32 **arg0, void *arg1) {
    s32 *node;
    s32 temp;
    void *vt;
    node = *(s32 **)(*(char **)((char *)arg1 + 8));
    /* unk8 of node */
    {
        s32 *n = node;
        if (n) {
            /* node->unk8 */
        }
    }
    /* simpler: follow asm */
    return arg0;
}
