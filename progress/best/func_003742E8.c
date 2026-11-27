extern u32 D_0040E618;
extern void func_002B2028(u32);
extern void D_002AD390(void *);

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
} Node;

typedef struct {
    Node *unk00;
    u32 unk04;
    u32 unk08;
} S_arg0;

void func_003742E8(S_arg0 *arg0, s32 arg1) {
    Node *p = arg0->unk00;
    u32 end = arg0->unk04;
    u32 *globp = (u32 *)((u8 *)&D_0040E618 - 4);
    s32 a1 = arg1;
    u32 val;
    s32 diff;
    s32 diff2;

    if ((u32)p < end) {
        val = p->unk0;
        for (;;) {
            Node *p0 = p + 1;
            u32 field4 = p->unk4;
            u32 next = p->unk8;
            u32 orig = val;
            if (orig < field4) {
                val = orig + 0xC;
                while (val < field4) val += 0xC;
                val += 0xC;
            }
            diff = (s32)((u32)(next - orig) * 0xAAAAAAABu) >> 2;
            if (diff != 0) {
                if (diff * 0xC != 0) {
                    func_002B2028(orig);
                } else {
                    *(u32 *)orig = *globp;
                    *globp = orig;
                }
            }
            p = p0;
            if ((u32)p >= end) break;
        }
    }
    diff2 = (s32)((u32)((u32)arg0->unk08 - (u32)arg0->unk00) * 0xAAAAAAABu) >> 2;
    if (diff2 != 0) {
        if (diff2 * 0xC != 0) {
            func_002B2028((u32)arg0->unk00);
        } else {
            *(u32 *)arg0->unk00 = *globp;
            *globp = (u32)arg0->unk00;
        }
    }
    if (a1 & 1) {
        D_002AD390(arg0);
    }
}
