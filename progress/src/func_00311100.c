extern volatile u16 D_0042DA12;
extern char D_0042D690;

void *func_00311100(void) {
    return (char *)&D_0042D690 + (s16)D_0042DA12 * 0xE0;
}
