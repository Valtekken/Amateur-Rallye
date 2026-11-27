extern void *func_002DDA20();
extern void func_002C6528(void *, void *, s32, void *);
extern s32 func_00303038(void *, s32 *);

typedef struct {
    u32 unk0;
    s32 unk4;
} Elem;

typedef struct {
    u8 pad0[0x14];
    Elem *begin;
    Elem *end;
    u8 pad1[4];
    u32 unk20;
} List;

typedef struct {
    u8 pad[0x40];
    void *unk40;
} Var;

typedef struct {
    u8 pad[4];
    s32 unk4;
} Inner;

s32 func_00329D40(void *arg0, s32 *arg1)
{
    List *l = *(List **)func_002DDA20(arg0);
    s32 index = *arg1;
    Var *v = 0;
    s32 tmp[2];

    if (index != 0)
    {
        s32 count = (l->end - l->begin) >> 3;
        if (index >= count)
        {
            u32 need;
            s32 curcount;
            tmp[0] = 0;
            tmp[1] = 0;
            need = (index + 0x20) & ~0x1F;
            curcount = (l->end - l->begin) >> 3;
            if (need < (u32)curcount)
            {
                Elem *p = l->begin + need;
                if (p < l->end)
                {
                    Elem *q = p + 1;
                    do { q += 1; } while (q < l->end);
                }
                l->end = l->end - (l->end - p);
            }
            else
            {
                func_002C6528(&l->begin, l->end, need - curcount, tmp);
            }
        }
        {
            Elem *e = l->begin + index;
            if (e->unk4 != l->unk20)
            {
                e->unk0 = func_00303038(l, arg1);
                e->unk4 = l->unk20;
            }
            v = (Var *)e->unk0;
        }
    }
    if (v == 0)
        return -1;
    if (v->unk40 == 0)
        return -1;
    return ((Inner *)v->unk40)->unk4;
}
