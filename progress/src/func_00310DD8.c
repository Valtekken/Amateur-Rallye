extern void func_002C1A68(int);
extern void func_0030EA80(void);
extern int D_0042D680;

void func_00310DD8(void) {
    func_0030EA80();
    func_002C1A68(D_0042D680);
    D_0042D680 = (D_0042D680 + 1) & 1;
}
