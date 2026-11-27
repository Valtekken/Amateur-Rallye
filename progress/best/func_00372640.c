typedef struct Hdr {
    u32 tag;
    u32 cap;
    u32 refs;
    u32 flags;
} Hdr;

extern s32 D_0040E618[];
extern Hdr *func_002B1FC0(u32);
extern Hdr *func_003D2910(u32);
extern Hdr *func_00152D28(u32);
extern void func_002B2028(Hdr *, u8 *);
extern void func_003F931C(u8 *, u8 *, u32);

void func_00372640(Hdr **arg0, u32 arg1, u32 arg2)
{
    u32 grow;
    u32 round;
    u32 p;
    u8 *data;
    Hdr *h;
    Hdr *nh;
    Hdr *t;
    u8 *ndata;

    grow = 0;
    data = (u8 *)*arg0;
    *(u32 *)(data - 4) = 0;
    h = (Hdr *)((u8 *)*arg0 - 0x10);
    if (h->refs >= 2 || h->cap < arg1 + 1 || h->cap > ((arg1 + 1) > 15 ? arg1 + 1 : 16) * 2)
    {
        grow = 1;
    }
    if (grow)
    {
        round = 16;
        if (round < arg1 + 1)
        {
            do
            {
                round <<= 1;
            } while (round < arg1 + 1);
        }
        if (round + 16 != 0)
        {
            p = round + 16;
            t = func_002B1FC0(p);
            if (t != 0)
            {
                p = (u32)t;
            }
            else
            {
                p = (u32)func_003D2910(p);
            }
        }
        else
        {
            if (D_0040E618[-1] != 0)
            {
                p = (u32)D_0040E618[-1];
                D_0040E618[-1] = *(s32 *)p;
            }
            else
            {
                p = (u32)func_00152D28(0);
            }
        }
        nh = (Hdr *)p;
        nh->cap = round;
        nh->refs = 1;
        nh->flags = 0;
        if (arg2 != 0)
        {
            if (((Hdr *)((u8 *)*arg0 - 0x10))->tag != 0)
            {
                func_003F931C((u8 *)nh + 0x10, (u8 *)*arg0, ((Hdr *)((u8 *)*arg0 - 0x10))->tag);
            }
            nh->tag = ((Hdr *)((u8 *)*arg0 - 0x10))->tag;
        }
        else
        {
            nh->tag = 0;
        }
        ndata = (u8 *)nh + 0x10;
        data = (u8 *)*arg0;
        h = (Hdr *)(data - 0x10);
        if (--h->refs == 0)
        {
            if (h->cap + 0x10 != 0)
            {
                func_002B2028(h, data);
            }
            else
            {
                h->tag = D_0040E618[-1];
                D_0040E618[-1] = (s32)h;
            }
        }
        *arg0 = (Hdr *)ndata;
    }
}
