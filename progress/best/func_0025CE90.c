extern void func_0023BC60(void *);

void func_0025CE90(void *arg0) {
    s32 *base = *(s32 **)((u8 *)arg0 + 0xA0);
    s32 *endp = *(s32 **)((u8 *)arg0 + 0xA4);
    s32 count = ((s32)((u8 *)endp - (u8 *)base)) >> 2;
    s32 i = 0;
    if (count <= 0) return;
    do {
        func_0023BC60((void *)*(s32 *)((u8 *)base + (i << 2)));
        i++;
    } while (i < count);
}
