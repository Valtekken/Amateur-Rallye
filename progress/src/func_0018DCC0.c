extern void func_001E2460(void *);
extern void func_001E2510(void *, void *, void *);
extern char D_00470C38[];
extern char D_00470C48[];
extern char D_00470C58[];
extern char D_00470C28[];
extern char D_00470E20[];
extern char D_00470E30[];
extern char D_00470E40[];
extern char D_00470E10[];
extern char D_00470568[];
extern char D_00471228[];
extern char D_00471240[];
extern char D_00471258[];
extern char D_00471270[];

void func_0018DCC0(void *arg0) {
    char sp[0x10];

    func_001E2460(sp);
    func_001E2510(sp, D_00470C38, (char *)arg0 + 0x8);
    func_001E2510(sp, D_00470C48, (char *)arg0 + 0xC);
    func_001E2510(sp, D_00470C58, (char *)arg0 + 0x10);
    func_001E2510(sp, D_00470C28, (char *)arg0 + 0x14);
    func_001E2510(sp, D_00470E20, (char *)arg0 + 0x18);
    func_001E2510(sp, D_00470E30, (char *)arg0 + 0x1C);
    func_001E2510(sp, D_00470E40, (char *)arg0 + 0x20);
    func_001E2510(sp, D_00470E10, (char *)arg0 + 0x24);
    func_001E2510(sp, D_00470568, (char *)arg0 + 0x28);
    func_001E2510(sp, D_00471228, (char *)arg0 + 0x2C);
    func_001E2510(sp, D_00471240, (char *)arg0 + 0x30);
    func_001E2510(sp, D_00471258, (char *)arg0 + 0x34);
    func_001E2510(sp, D_00471270, (char *)arg0 + 0x38);
}
