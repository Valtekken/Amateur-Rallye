extern void func_003F93CC(void *, void *, s32);

void func_0023B820(void *unused, void *arg1, f32 f) {
    void *first = *(void **)((u8 *)arg1 + 4);
    s32 count = ((s32)*(void **)((u8 *)arg1 + 8) - (s32)first) >> 2;
    if (count > 0) {
        void **lst = (void **)((u8 *)arg1 + 4);
        s32 i = 0;
        do {
            void **base = *(void **)((u8 *)arg1 + 4);
            void *p = *(void **)((u8 *)base + (i << 2));
            if (*(s32 *)((u8 *)p + 0xDC) != 0) {
                if (f < *(f32 *)((u8 *)p + 0x18)) {
                    void *entry = (u8 *)base + (i << 2);
                    if ((u8 *)entry + 4 != lst[1]) {
                        func_003F93CC(entry, (u8 *)entry + 4,
                                      (((s32)lst[1] - (s32)((u8 *)entry + 4)) >> 2) << 2);
                    }
                    lst[1] = (void *)((u8 *)lst[1] - 4);
                } else {
                    i++;
                }
            } else {
                i++;
            }
            count--;
        } while (count != 0);
    }
}
