extern void func_001782C0(void *, f32);
extern void func_00269968(void *, s32, f32, f32);

void func_00173CC8(void *arg0, f32 fparg0) {
    typedef struct {
        u8 pad[0x14];
        void *unk14;
        void *unk18;
        u32 unk1c;
        void *unk20;
        void *unk24;
    } ArgStruct;
    
    ArgStruct *s = (ArgStruct *)arg0;
    s32 i = 0;
    void *elem;

    {
        s32 count = (s32)((u8 *)s->unk24 - (u8 *)s->unk20) >> 2;
        if (count > 0) {
            for (i = 0; i < count; i++) {
                elem = ((void **)s->unk20)[i];
                func_00269968(*(void **)((u8 *)elem + 0x18), 1, 0.0f, fparg0);
            }
        }
    }

    {
        s32 count = (s32)((u8 *)s->unk18 - (u8 *)s->unk14) >> 2;
        if (count > 0) {
            for (i = 0; i < count; i++) {
                elem = ((void **)s->unk14)[i];
                func_001782C0(elem, fparg0);
            }
        }
    }
}
