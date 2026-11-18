s32 func_003A0BD8(s32, s32);
s32 func_00219DA8(s32, s32);

s32 func_003A5DC8(register s32 arg0, register s32 arg1) {
    func_003A0BD8(arg0, arg1);
    func_00219DA8(arg0 + 0xC, arg1 + 0xC);
    return arg0;
}

extern void **D_004262C8;
extern char D_00476118[];
extern void func_003F9698(void*, s32, ...);

void func_001D72E0(void) {
    void **head = D_004262C8;
    s32 count = 0;
    void **node = *head;
    if (node != head) {
        do {
            node = *node;
            count++;
        } while (node != head);
    }
    func_003F9698(D_00476118, count, &count, head);
}

extern void func_001D9080(void*, s32, s32, void*);
extern void func_003F93CC(s32, s32, s32);

void func_001D7258(void *arg0, u32 arg1) {
    s32 *p = (s32*)arg0;
    s32 a = p[0];
    s32 b = p[1];
    s32 diff = b - a;
    char flag = 0;
    if (arg1 < (u32)diff) {
        s32 newa = a + arg1;
        func_003F93CC(newa, b, 0);
        p[1] = newa;
    } else {
        func_001D9080(arg0, b, arg1 - diff, &flag);
    }
    p[3] = 0;
}

extern char D_004760C8[];

s32 func_001D7210(void *arg0, u32 arg1) {
    s32 v = *(s32*)((char*)arg0 + 4) - *(s32*)arg0 - *(s32*)((char*)arg0 + 0xC);
    if ((u32)v < arg1) {
        func_003F9698(D_004760C8, *(s32*)((char*)arg0 + 0xC));
        return 0;
    }
    return 1;
}
