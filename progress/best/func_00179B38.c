extern void *D_0040E900;
extern s32 D_0040E618[];
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_001C8310(void *, void *, void *, s32);
extern void func_002B2028(void *);

void *func_00179B38(void *arg0) {
    s32 *base = (s32 *)&D_0040E900;
    s32 begin = base[0];
    s32 end = base[1];
    s32 cap = base[2];

    if ((u32)(((cap - begin) * (s32)0xBA2E8BA3) >> 2) < 4U) {
        s32 count = ((end - begin) * (s32)0xBA2E8BA3) >> 2;
        void *newbuf = func_002B1FC0(0xB0);

        if (newbuf == 0) {
            newbuf = func_003D2910(0xB0);
        }
        func_001C8310((void *)begin, (void *)end, newbuf, 0);

        if ((u32)base[1] > (u32)base[0]) {
            s32 p = base[0] + 0x2C;
            while ((u32)p < (u32)base[1]) {
                p += 0x2C;
            }
        }

        {
            s32 oldCap = base[2];
            s32 oldBegin = base[0];
            s32 n = ((oldCap - oldBegin) * (s32)0xBA2E8BA3) >> 2;
            if (n != 0) {
                if ((n * 0x2C) != 0) {
                    func_002B2028((void *)oldBegin);
                } else {
                    *(s32 *)oldBegin = D_0040E618[-1];
                    D_0040E618[-1] = oldBegin;
                }
            }
        }

        base[2] = (s32)newbuf + 0xB0;
        base[0] = (s32)newbuf;
        base[1] = (s32)newbuf + count * 0x2C;
    }

    return arg0;
}
