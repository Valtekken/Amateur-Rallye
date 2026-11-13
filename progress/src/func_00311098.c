extern volatile u16 D_0042DA10;
extern char D_0042D690;

void *func_00311098(void) {
    return (char *)&D_0042D690 + (s16)D_0042DA10 * 0xE0;
}
