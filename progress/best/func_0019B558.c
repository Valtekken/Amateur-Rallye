extern void func_001D4040(void *);
extern s32 D_0044E820;
extern s32 D_00473A18;
extern s32 D_00474288;

void func_0019B558(void *arg0) {
    void *temp_2;
    void *temp_3;
    void *temp_4;

    *(s32 *)arg0 = 0;
    *(s32 **)((char*)arg0 + 4) = (s32 *)&D_00474288;
    func_001D4040(&D_0044E820);
    *(s32 *)((char*)arg0 + 0x28) = 0;
    temp_3 = (char*)arg0 + 0x28;
    *(s32 **)((char*)arg0 + 4) = (s32 *)&D_00473A18;
    temp_4 = (char*)arg0 + 0x34;
    *(s32 *)((char*)temp_3 + 8) = 0;
    *(s32 *)((char*)temp_3 + 4) = 0;
    temp_2 = (char*)arg0 + 0x40;
    *(s32 *)((char*)arg0 + 0x34) = 0;
    *(s32 *)((char*)temp_4 + 8) = 0;
    *(s32 *)((char*)temp_4 + 4) = 0;
    *(s32 *)temp_2 = 1;
    *(float *)((char*)temp_2 + 0x2C) = 90.0f;
    *(s32 *)((char*)temp_2 + 4) = 1;
    *(float *)((char*)temp_2 + 8) = 0.05f;
    *(float *)((char*)temp_2 + 0x10) = 4.0f;
    *(float *)((char*)temp_2 + 0x14) = 10.0f;
    *(float *)((char*)temp_2 + 0x1C) = 0.6f;
    *(float *)((char*)temp_2 + 0x20) = 6.0f;
    *(float *)((char*)temp_2 + 0x24) = 2.0f;
    *(s32 *)((char*)temp_2 + 0x28) = 2;
    *(float *)((char*)temp_2 + 0xC) = 10.0f;
    *(float *)((char*)temp_2 + 0x18) = 0.6f;
    for (;;) {}
}
