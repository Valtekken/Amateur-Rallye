extern void func_002AD758(void);
void *func_002B1FC0(s32);
s32 func_003F94D0(void *, s32, s32);

void *func_002AD7B8(void) {
    void *temp_2 = func_002B1FC0(0x18);
    if (temp_2 == NULL) {
        func_002AD758();
    }
    func_003F94D0(temp_2, 0, 0x18);
    *(void **)((char *)temp_2 + 4) = (void *)((char *)temp_2 + 0x10);
    return temp_2;
}
