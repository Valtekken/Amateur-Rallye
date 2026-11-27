extern void *D_00474090;
extern void *D_0044DCD8;
extern void *D_0040E618;
extern void func_00167000(void *, s32);
extern void func_003F93CC(void *, void *, s32);
extern void func_00164310(void *, s32);
extern void func_002B2028(void *);
extern void func_00165748(void *, s32);
extern void D_002AD390(void *);

void func_00164DE0(void *arg0, s32 arg1) {
    void *p88 = (char *)arg0 + 0x88;
    s32 i;
    s32 count;

    *(void **)((char *)arg0 + 8) = &D_00474090;

    count = (*(s32 *)((char *)p88 + 4) - *(s32 *)p88) >> 2;
    if (count != 0) {
        i = 0;
        do {
            void *elem = *(void **)(*(s32 *)p88 + i * 4);
            if (elem != 0) {
                func_00167000(elem, 3);
            }
            i++;
        } while ((u32)i < (u32)((*(s32 *)((char *)p88 + 4) - *(s32 *)p88) >> 2));
    }

    {
        void *begin = *(void **)p88;
        void *end = *(void **)((char *)p88 + 4);
        func_003F93CC(begin, end, 0);
        *(s32 *)((char *)p88 + 4) = *(s32 *)((char *)p88 + 4) - ((s32)end - (s32)begin);
    }

    func_00164310((char *)arg0 + 0x94, 2);

    {
        void *begin = *(void **)p88;
        s32 cap = (*(s32 *)((char *)p88 + 8) - (s32)begin) >> 2;
        if (cap != 0) {
            if ((cap << 2) != 0) {
                func_002B2028(begin);
            } else {
                *(void **)begin = *(void **)((char *)&D_0040E618 - 4);
                *(void **)((char *)&D_0040E618 - 4) = begin;
            }
        }
    }

    func_00165748((char *)arg0 + 0x10, 2);
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
