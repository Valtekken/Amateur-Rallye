extern u8 D_00436158[];
extern u8 D_00488C08;
extern void func_003FA8A4(u8 *, char *);

void func_003CA558(u32 arg0, u8 *arg1) {
    if (arg0 < 8U) {
        u32 idx = (u32)arg0 << 2;
        u32 *ptr = (u32 *)&D_00436158[idx];
        func_003FA8A4(arg1, (char *)ptr);
        return;
    }
    *arg1 = D_00488C08;
}
