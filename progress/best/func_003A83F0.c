struct Vec {
    void *begin;
    void *end;
    void *cap;
};

u32 func_003AF008(struct Vec *);
s32 func_003A8230(struct Vec *);
s32 func_003AF198(struct Vec *, u32, void *, void *);
void func_003A8160(void *, void *);
void func_003A8390(struct Vec *, void *, s32);

void func_003A83F0(register struct Vec *arg0, register u32 arg1)
{
    register s32 count;
    void *new_end;
    s32 stack_count; // force extra stack slot
    
    if (func_003AF008(arg0) < arg1)
    {
        count = func_003A8230(arg0);
        stack_count = count; // force store to stack
        new_end = func_003AF198(arg0, arg1, arg0->begin, arg0->end);
        func_003A8160(arg0->begin, arg0->end);
        func_003A8390(arg0, arg0->begin, (s32)(((s32)arg0->cap - (s32)arg0->begin) * 0xAAAAAAAB) >> 4);
        arg0->begin = new_end;
        arg0->end = (char *)new_end + stack_count * 0x30;
        arg0->cap = (char *)arg0->begin + arg1 * 0x30;
    }
}
