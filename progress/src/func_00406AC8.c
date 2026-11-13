extern s32 D_004411AC;
extern s32 CreateSema_2(void *);

void func_00406AC8(void) {
    if (D_004411AC == -1) {
        int buf[6];
        buf[2] = 1;
        buf[1] = 1;
        buf[5] = 0;
        D_004411AC = CreateSema_2(buf);
    }
}
