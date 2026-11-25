extern void *func_001F0248(void *, void *);
extern s32 func_001D6278(void *, void *, s32);
extern void func_001D2CD8(void *, void *);

typedef struct S_func_002AEF08_arg1_data {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} S_func_002AEF08_arg1_data;

typedef struct S_func_002AEF08_arg1 {
    void *unk_00;
    s32 unk_04;
} S_func_002AEF08_arg1;

typedef struct S_func_002AEF08_arg0 {
    void *unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
} S_func_002AEF08_arg0;

void func_002AEF08(S_func_002AEF08_arg0 *arg0, S_func_002AEF08_arg1 *arg1) {
    if (arg1->unk_04 != 0) {
        void *p16 = (void*)arg1;
        s32 val_04 = *(s32*)((u8*)p16 + 0x4);
        if (val_04 != 0) {
            void *p0 = arg0->unk_00;
            void *p4 = (void*)((u8*)p16 + 0x4);
            s32 val_00 = *(s32*)p4;
            void *res = func_001F0248(p0, (void*)arg1);
            if (res != NULL) {
                s32 spD0 = (s32)((u8*)arg1 + 0xD0); // This is a guess for local var
                // ...
            }
        }
    }
}
