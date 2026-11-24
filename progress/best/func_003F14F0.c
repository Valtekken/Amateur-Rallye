extern s32 D_0043E714;
extern s32 D_0049D590;
extern u8 D_0049D598[48];
extern u8 D_0049D5C8[56];
extern u8 D_004954F0[95];
extern void func_003F1430(void);

extern s32 GetThreadId_2(s32);
extern s32 ReferThreadStatus_2(s32, void*);
extern s32 CreateThread_2(void*, void*);
extern s32 StartThread_2(s32, s32);
extern s32 ChangeThreadPriority_2(s32, s32);

s32 func_003F14F0(s32 arg0, s32 arg1, s32 arg2) {
    s32 result = 1;
    if (D_0043E714 == 0) {
        s32 thread_id = GetThreadId_2(0);
        D_0049D590 = thread_id;
        ReferThreadStatus_2(thread_id, &D_0049D598);
        
        void* base = &D_0049D5C8;
        *(s32*)((u8*)base + 0xC) = arg2;
        *(void**)((u8*)base + 0x10) = &D_004954F0;
        *(void**)((u8*)base + 0x4) = &func_003F1430;
        *(s32*)((u8*)base + 0x8) = arg1;
        *(s32*)((u8*)base + 0x14) = arg0;
        
        s32 thread_handle = CreateThread_2(base, &func_003F1430);
        D_0043E714 = thread_handle;
        StartThread_2(thread_handle, 0);
    } else {
        result = 0;
        ChangeThreadPriority_2(D_0043E714, arg0);
    }
    return result;
}
