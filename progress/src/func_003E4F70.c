extern void func_003E0EF0(u32 arg0);

void func_003E4F70(void *arg0) {
    s32 counter = 0;
    if ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000) {
        do {
            if (counter++ >= 0x1389) {
                func_003E0EF0(*(u32 *)((u8 *)arg0 + 0x858));
                counter = 0;
            }
        } while ((*(volatile u32 *)0x10002010 & 0x80004000) == 0x80000000);
    }
}
