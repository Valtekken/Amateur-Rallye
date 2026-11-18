extern char *D_00436158[];
extern u8 D_00488C08;
extern void func_003FA8A4(u8 *, char *);

void func_003CA558(u32 a, u8 *b) {
    if (a < 8) {
        func_003FA8A4(b, D_00436158[a]);
        return;
    }
    *b = D_00488C08;
}
