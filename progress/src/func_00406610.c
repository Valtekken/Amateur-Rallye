extern s32 D_004411B0;
extern s32 D_004411B4;
extern char D_004A1040[];
extern s32 CreateSema_2(void *);
extern void *func_00406350(void *);
extern void func_004063A8(void *);
extern s32 SleepThread_2(s32);
extern s32 WaitSema_2(s32);
extern s32 SignalSema_2(s32);
extern void func_004065B0(void);

typedef struct SemaParam {
    s32 option;
    s32 initCount;
    s32 maxCount;
    u8  name[8];
    s32 attr;
} SemaParam;

/* func_004065B0 */
void func_004065B0(void) {
    SemaParam sp;

    if (D_004411B0 != -1) return;
    sp.attr = 0;
    sp.initCount = 1;
    sp.maxCount = 1;
    D_004411B0 = CreateSema_2(&sp);
    D_004411B4 = CreateSema_2(&sp);
}

/* func_00406570 */
void func_00406570(void *arg0) {
    void *ret;

    goto test;
loop:
    func_004063A8(ret);
test:
    ret = func_00406350(arg0);
    if (ret != 0) {
        goto loop;
    }
    SleepThread_2(0);
    goto test;
}

/* func_00406610 */
void *func_00406610(void) {
    char *p;
    char *end;

    func_004065B0();
    WaitSema_2(D_004411B0);
    p = D_004A1040;
    end = D_004A1040 + 0x200;
    if (p < end) {
        while (1) {
            if (*(s32 *)(p + 4) == 0) {
                *(s32 *)(p + 4) = 0x10000000;
                SignalSema_2(D_004411B0);
                return (void *)p;
            }
            p += 0x10;
            if (p >= end) break;
        }
    }
    SignalSema_2(D_004411B0);
    return NULL;
}

/* func_00406698 */
void *func_00406698(s32 arg0) {
    func_004065B0();
    WaitSema_2(D_004411B0);
    if (arg0 < 0x20) {
        SignalSema_2(D_004411B0);
        return (void *)(D_004A1040 + arg0 * 0x10);
    }
    SignalSema_2(D_004411B0);
    return NULL;
}
