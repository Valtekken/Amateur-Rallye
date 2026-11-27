extern void D_002AD390(void *);
extern void *D_002AD408(s32);
extern void func_00219DA8(void *, void *);
extern void func_002B2028(void *);
extern void *D_0040E618[];

typedef struct S_func_0020E5D8_arg0 {
    u8 unk_00[0xC];
    void **unk_0C;
    u8 unk_10[0x34];
    s32 unk_44;
    s32 unk_48;
} S_func_0020E5D8_arg0;

void func_0020E5D8(S_func_0020E5D8_arg0 *arg0) {
    volatile char pad[0x10];
    s32 r, c;
    void **slot;
    void *p, *newp;
    s32 *q, *blk;
    s32 n, bytes;

    for (r = 0; r < arg0->unk_48; r++) {
        for (c = 0; c < arg0->unk_44; c++) {
            slot = &arg0->unk_0C[r * arg0->unk_44 + c];
            if (*slot != 0) {
                newp = D_002AD408(0xC);
                ((s32 *)newp)[0] = 0;
                ((s32 *)newp)[1] = 0;
                ((s32 *)newp)[2] = 0;
                func_00219DA8(newp, *slot);
                p = *slot;
                if (p != 0) {
                    q = (s32 *)p;
                    n = (q[2] - q[0]) >> 2;
                    blk = (s32 *)q[0];
                    if (n != 0) {
                        bytes = n << 2;
                        if (bytes != 0) func_002B2028(blk);
                        else {
                            blk[0] = (s32)D_0040E618[-1];
                            D_0040E618[-1] = blk;
                        }
                    }
                    D_002AD390(p);
                }
                *slot = newp;
            }
        }
    }
}
