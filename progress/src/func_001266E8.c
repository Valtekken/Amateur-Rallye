extern void func_003F9698(char *);
extern s32 func_002B4740();
extern s32 func_002B2360(s32, s32, s32);
extern s32 func_002B4570(s32, s32, s32);
extern s32 func_002B4658(s32, s32, s32);
extern char D_00448800[];

void func_001266E8(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 r1;

    if (p[0x30 / 4] == 0) {
        p[0xE0 / 4] = 0;
    }
    if (p[0xE0 / 4] == 0) {
        func_003F9698(D_00448800);
        r1 = func_002B2360(func_002B4740(), 0, 0);
        if (r1 == -10) {
            p[0x14 / 4] = 2;
        } else if (r1 == -1) {
            p[0x14 / 4] = 3;
        } else if (r1 == 0) {
            p[0x14 / 4] = 0;
            goto after_status;
        } else if (r1 == 1) {
            p[0x14 / 4] = 4;
        } else if (r1 == 2) {
            p[0x14 / 4] = 5;
        } else {
            p[0x14 / 4] = 6;
        }

    after_status:
        if (p[0x14 / 4] == 4 && p[0x38 / 4] != 0) {
            p[0x14 / 4] = 0;
        }

        {
            s32 r2 = func_002B4570(func_002B4740(), 0, 0);
            p[0x18 / 4] = r2;
            if (p[0x14 / 4] == 4 && r2 != 0) {
                s32 r3 = func_002B4658(func_002B4740(r2), 0, 0);
                if (r3 != 0) {
                    p[0x14 / 4] = 0;
                }
            }
        }
    } else {
        p[0x14 / 4] = 7;
    }

    {
        s32 cnt = p[0xE0 / 4] + 1;
        p[0xE0 / 4] = cnt;
        if (cnt == 0x5A) {
            p[0xE0 / 4] = 0;
        }
    }
}
