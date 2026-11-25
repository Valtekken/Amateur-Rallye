extern void func_002F97A8(void *, s32);
extern void func_00377378(void *, void *, void *);
extern void func_003F93CC(void *, void *, s32);

void func_002F96D8(void *arg0, s32 arg1) {
    typedef struct {
        u8 pad[0x3C];
        void *unk3C;
        void *unk40;
        void *array_begin;
        void *array_end;
        s32 count;
    } ArgStruct;
    
    ArgStruct *p = (ArgStruct *)arg0;
    void *array_begin = p->array_begin;
    void *array_end = p->array_end;
    s32 count = p->count;
    void **loop_ptr;

    func_003F93CC(array_begin, array_end, 0);
    count = count - ((u8 *)array_end - (u8 *)array_begin);
    func_002F97A8(arg0, arg1);
    p->count = count;

    if (array_begin != p->count) {
        loop_ptr = (void **)array_begin;
        do {
            void *elem = *loop_ptr;
            void *addr = (void *)((u8 *)p->unk40 + (*(s32 *)((u8 *)elem + 8) << 4) + (*(s32 *)((u8 *)elem + 0xC) << 2));
            *(u32 *)addr = 0;
            func_00377378(p->unk3C, elem, addr);
            loop_ptr++;
        } while (loop_ptr != (void **)p->array_end);
    }
}
