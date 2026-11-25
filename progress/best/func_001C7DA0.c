typedef s32 M2C_UNK;
extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void *func_00152D28(int);
extern void func_002B2028(void *);
extern void func_00175AD0(void *, int);
extern void func_001C6E68(void *, void *);
extern void *func_001C7698(void *, void *, void *, int);
extern void *func_001C7D18(void *, void *, void *, int);
extern u32 D_0040E618[];

void func_001C7DA0(void *arg0, void *arg1, void *arg2) {
    typedef struct { char _d[0x30]; } S30;
    typedef struct { S30 *begin; S30 *end; S30 *cap; } Vec;
    typedef struct { Vec *begin; Vec *end; Vec *cap; } Outer;
    volatile u64 pad16[2] __attribute__((aligned(16)));
    Outer *v = (Outer *)arg0;
    Vec *pos = (Vec *)arg1;
    Vec *src = (Vec *)arg2;
    Vec tmp;

    if (v->end != v->cap) {
        Vec *end = v->end;
        if (end) {
            Vec *d = end;
            Vec *s = end - 1;
            int cn = (s32)(((s32)s->end - (s32)s->begin) * 0xAAAAAAAB) >> 4;
            S30 *cp = 0;
            d->begin = 0;
            d->end = 0;
            d->cap = 0;
            if (cn != 0) {
                int bytes = cn * 0x30;
                if (bytes != 0) {
                    M2C_UNK *block = func_002B1FC0(bytes);
                    if (block) cp = (S30 *)block; else cp = (S30 *)func_003D2910(bytes);
                } else {
                    u32 *freeblock = (u32 *)D_0040E618[-1];
                    if (!freeblock) cp = (S30 *)func_00152D28(0);
                    else { u32 next = *freeblock; cp = (S30 *)freeblock; D_0040E618[-1] = next; }
                }
            }
            d->begin = cp; d->end = cp; d->cap = (S30 *)((u8 *)cp + cn * 0x30);
            d->end = (S30 *)func_001C7D18(s->begin, s->end, cp, 0);
        }
        v->end++;
        {
            int cn = (s32)(((s32)src->end - (s32)src->begin) * 0xAAAAAAAB) >> 4;
            S30 *cp = 0;
            tmp.begin = 0;
            tmp.end = 0;
            tmp.cap = 0;
            if (cn != 0) {
                int bytes = cn * 0x30;
                if (bytes != 0) {
                    M2C_UNK *block = func_002B1FC0(bytes);
                    if (block) cp = (S30 *)block; else cp = (S30 *)func_003D2910(bytes);
                } else {
                    u32 *freeblock = (u32 *)D_0040E618[-1];
                    if (!freeblock) cp = (S30 *)func_00152D28(0);
                    else { u32 next = *freeblock; cp = (S30 *)freeblock; D_0040E618[-1] = next; }
                }
            }
            tmp.begin = cp; tmp.end = cp; tmp.cap = (S30 *)((u8 *)cp + cn * 0x30);
            tmp.end = (S30 *)func_001C7D18(src->begin, src->end, cp, 0);
        }
        {
            s32 n = (s32)(((s32)((u8 *)v->end - 0x18) - (s32)pos) * 0xAAAAAAAB) >> 2;
            if (n > 0) {
                Vec *d = (Vec *)((u8 *)v->end - 0x18);
                Vec *s = d;
                do { s--; func_001C6E68(d, s); d--; n--; } while (n > 0);
            }
        }
        func_001C6E68(pos, &tmp);
        {
            S30 *it = tmp.begin;
            while (it < tmp.end) {
                func_00175AD0(it, 2);
                it++;
            }
            {
                int dn = tmp.cap - tmp.begin;
                if (dn != 0) {
                    int bytes = dn * 0x30;
                    if (bytes != 0) func_002B2028(tmp.begin);
                    else { u32 next = D_0040E618[-1]; *(u32 *)tmp.begin = next; D_0040E618[-1] = (u32)tmp.begin; }
                }
            }
        }
    } else {
        int cur = v->end - v->begin;
        int newcap = cur ? cur * 2 : 1;
        Vec *newbuf = 0;
        Vec *ins;
        Vec *newend;
        if (newcap != 0) {
            int bytes = newcap * 0xC;
            if (bytes != 0) {
                M2C_UNK *block = func_002B1FC0(bytes);
                if (block) newbuf = (Vec *)block; else newbuf = (Vec *)func_003D2910(bytes);
            } else {
                u32 *freeblock = (u32 *)D_0040E618[-1];
                if (!freeblock) newbuf = (Vec *)func_00152D28(0);
                else { u32 next = *freeblock; newbuf = (Vec *)freeblock; D_0040E618[-1] = next; }
            }
        }
        ins = (Vec *)func_001C7698(v->begin, pos, newbuf, 0);
        if (ins != 0) {
            int cn = (s32)(((s32)src->end - (s32)src->begin) * 0xAAAAAAAB) >> 4;
            S30 *cp = 0;
            ins->begin = 0; ins->end = 0; ins->cap = 0;
            if (cn != 0) {
                int bytes = cn * 0x30;
                if (bytes != 0) {
                    M2C_UNK *block = func_002B1FC0(bytes);
                    if (block) cp = (S30 *)block; else cp = (S30 *)func_003D2910(bytes);
                } else {
                    u32 *freeblock = (u32 *)D_0040E618[-1];
                    if (!freeblock) cp = (S30 *)func_00152D28(0);
                    else { u32 next = *freeblock; cp = (S30 *)freeblock; D_0040E618[-1] = next; }
                }
            }
            ins->begin = cp; ins->end = cp; ins->cap = (S30 *)((u8 *)cp + cn * 0x30);
            ins->end = (S30 *)func_001C7D18(src->begin, src->end, cp, 0);
        }
        newend = (Vec *)func_001C7698(pos, v->end, ins + 1, 0);
        {
            Vec *it = v->begin;
            while (it < v->end) {
                S30 *ip = it->begin;
                while (ip < it->end) { func_00175AD0(ip, 2); ip++; }
                {
                    int dn = it->cap - it->begin;
                    if (dn != 0) {
                        int bytes = dn * 0x30;
                        if (bytes != 0) func_002B2028(it->begin);
                        else { u32 next = D_0040E618[-1]; *(u32 *)it->begin = next; D_0040E618[-1] = (u32)it->begin; }
                    }
                }
                it++;
            }
        }
        {
            int dn = v->cap - v->begin;
            if (dn != 0) {
                int bytes = dn * 0xC;
                if (bytes != 0) func_002B2028(v->begin);
                else { u32 next = D_0040E618[-1]; *(u32 *)v->begin = next; D_0040E618[-1] = (u32)v->begin; }
            }
        }
        v->begin = newbuf;
        v->end = newend;
        v->cap = newbuf + newcap;
    }
}
