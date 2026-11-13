extern s32 func_00151930(void *);
extern void *func_001D94C0(u32, u32, void *);
extern void *func_001D9598(u32, u32, void *, u32);
extern void *func_001D9F40(u32, u32, u32, u32);
extern void *func_002B1FC0(s32, s32, s32 *);
extern void func_002B2028(void *, void *);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32, u32, void *);

extern u32 D_0040E618[];

struct Vector8 {
    void *unk0;
    void *unk4;
    void *unk8;
};

void func_002A7058(struct Vector8 *arg0, void *arg1, u32 arg2, struct Vector8 *arg3) {
    u32 sp14;
    u32 count;
    u32 diff;
    void *s0;
    void *s1;
    void *p;
    void *p1;
    void *p2;
    u32 v0;
    s32 n;
    u32 val;
    u32 s2_loc;
    u32 *hdr;
    u32 *h2;
    u32 *h1;
    u32 rc;
    u32 rc2;
    void *src;

    sp14 = arg2;

    if (arg2 == 0) return;

    count = (u32)((s32)((u8 *)arg0->unk8 - (u8 *)arg0->unk4) >> 3);

    if (count >= arg2) {
        p = arg3->unk0;
        hdr = (u32 *)((u8 *)p - 0x10);

        if (hdr[3] == 0) {
            val = func_00151930((void *)((u8 *)p - 0x10));
        } else {
            val = (u32)p;
            hdr[2]++;
        }

        s0 = arg0->unk4;
        diff = (u32)((s32)((u8 *)s0 - (u8 *)arg1) >> 3);

        if (arg2 < diff) {
            func_001D9F40((u32)((u8 *)s0 - arg2 * 8), (u32)s0, (u32)s0, 0);
            s1 = s0;
            s0 = (void *)((u8 *)s0 - arg2 * 8);
            v0 = (u32)arg0->unk4 + arg2 * 8;
            arg0->unk4 = (void *)v0;
            s2_loc = (u32)((s32)((u8 *)s0 - (u8 *)arg1) >> 3);

            if (s2_loc > 0) {
                p2 = s1;
                p1 = s0;
                n = (s32)s2_loc;
                do {
                    p2 = (void *)((u8 *)p2 - 8);
                    p1 = (void *)((u8 *)p1 - 8);

                    h2 = (u32 *)((u8 *)p2 - 0x10);
                    rc = h2[2] - 1;
                    h2[2] = rc;
                    if (rc == 0) {
                        h2[1] = h2[1] + 0x10;
                    }

                    src = *(void **)p1;
                    h1 = (u32 *)((u8 *)src - 0x10);
                    rc2 = h1[3];
                    if (rc2 == 0) {
                        src = (void *)func_00151930((void *)((u8 *)src - 0x10));
                    } else {
                        rc2++;
                        h1[2] = rc2;
                    }
                    *(void **)p2 = src;
                    *(u32 *)((u8 *)p2 + 4) = *(u32 *)((u8 *)p1 + 4);

                    n--;
                } while (n > 0);
            }

            func_001D94C0((u32)arg1, (u32)((u8 *)arg1 + arg2 * 8), s0);
        }
    }
}
