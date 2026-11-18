extern void (*D_00426AC4)(void);
extern void *func_002AD888(void);

void func_002AD860(void) {
    D_00426AC4 = (void (*)(void))func_002AD888;
    D_00426AC4();
}
