extern void func_001D2488(void *, void *);
extern void func_00210728(void *, void *);

void *func_002107C0(void *arg0, void *arg1, void *arg2) {
    void *sp4;
    void *sp8;
    void *spC;
    if (arg0 != arg1) {
        do {
            sp8 = (char *)arg0 + 0x58;
            spC = (char *)arg2 + 0x58;
            if (arg2 != 0) {
                void *v17 = arg2;
                sp4 = (char *)arg2 + 0x54;
                s32 v20 = 2;
                void *v16 = arg0;
                do {
                    v20 = v20 - 1;
                    *(s32 *)((char *)v17 + 0) = *(s32 *)((char *)v16 + 0);
                    *(s32 *)((char *)v17 + 4) = *(s32 *)((char *)v16 + 4);
                    *(s32 *)((char *)v17 + 8) = *(s32 *)((char *)v16 + 8);
                    func_00210728((char *)v17 + 0xC, (char *)v16 + 0xC);
                    func_001D2488((char *)v17 + 0x10, (char *)v16 + 0x10);
                    v17 = (char *)v17 + 0x14;
                    v16 = (char *)v16 + 0x14;
                } while (v20 != -1);
                s32 *v4 = (s32 *)((char *)arg2 + 0x3C);
                s32 *v3 = (s32 *)((char *)arg0 + 0x3C);
                s32 v5 = 2;
                do {
                    s32 t = *v3;
                    v5 = v5 - 1;
                    v3++;
                    *v4 = t;
                    v4++;
                } while (v5 != -1);
                *(s32 *)((char *)arg2 + 0x48) = *(s32 *)((char *)arg0 + 0x48);
                *(s32 *)((char *)arg2 + 0x4C) = *(s32 *)((char *)arg0 + 0x4C);
                *(f32 *)((char *)arg2 + 0x50) = *(f32 *)((char *)arg0 + 0x50);
                func_001D2488(sp4, (char *)arg0 + 0x54);
            }
            arg0 = sp8;
            arg2 = spC;
        } while (arg0 != arg1);
    }
    return arg2;
}
