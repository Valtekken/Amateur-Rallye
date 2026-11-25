extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void *func_00152D28(int);
extern void func_002B2028(void *, void *, u32);
extern void func_00274D00(void *, void *);
extern void *func_002761F0(void *, void *, void *, int);
extern void *func_00275388(void *, void *, void *, int);
extern u32 D_0040E618[];

void func_002753E0(void *arg0, void *arg1, void *arg2) {
    typedef struct { char _d[0x14]; } S14;
    typedef struct { S14 *begin; S14 *end; S14 *cap; } Vec;
    typedef struct { Vec *begin; Vec *end; Vec *cap; } Outer;
    volatile u64 pad16[3] __attribute__((aligned(16)));
    Outer *v = (Outer *)arg0;
    Vec *pos = (Vec *)arg1;
    Vec *src = (Vec *)arg2;
    Vec tmp;

    if (v->end != v->cap) {
        Vec *end = v->end;
        if (end) {
            Vec *d = end;
            Vec *s = end - 1;
            int cn = (s32)(((s32)s->end - (s32)s->begin) * 0xCCCCCCCD) >> 2;
            S14 *cp = 0;
            d->begin = 0;
            d->end = 0;
            d->cap = 0;
            if (cn != 0) {
                int bytes = cn * 0x14;
                if (bytes != 0) {
                    void *block = func_002B1FC0(bytes);
                    if (block) cp = (S14 *)block; else cp = (S14 *)func_003D2910(bytes);
                } else {
                    u32 *freeblock = (u32 *)D_0040E618[-1];
                    if (!freeblock) cp = (S14 *)func_00152D28(0);
                    else { u32 next = *freeblock; cp = (S14 *)freeblock; D_0040E618[-1] = next; }
                }
            }
            d->begin = cp; d->end = cp; d->cap = (S14 *)((u8 *)cp + cn * 0x14);
            d->end = (S14 *)func_00275388(s->begin, s->end, cp, 0);
        }
        v->end++;
        {
            int cn = (s32)(((s32)src->end - (s32)src->begin) * 0xCCCCCCCD) >> 2;
            S14 *cp = 0;
            tmp.begin = 0;
            tmp.end = 0;
            tmp.cap = 0;
            if (cn != 0) {
                int bytes = cn * 0x14;
                if (bytes != 0) {
                    void *block = func_002B1FC0(bytes);
                    if (block) cp = (S14 *)block; else cp = (S14 *)func_003D2910(bytes);
                } else {
                    u32 *freeblock = (u32 *)D_0040E618[-1];
                    if (!freeblock) cp = (S14 *)func_00152D28(0);
                    else { u32 next = *freeblock; cp = (S14 *)freeblock; D_0040E618[-1] = next; }
                }
            }
            tmp.begin = cp; tmp.end = cp; tmp.cap = (S14 *)((u8 *)cp + cn * 0x14);
            tmp.end = (S14 *)func_00275388(src->begin, src->end, cp, 0);
        }
        {
            s32 n = (s32)(((s32)((u8 *)v->end - 0x18) - (s32)pos) * 0xAAAAAAAB) >> 2;
            if (n > 0) {
                Vec *d = (Vec *)((u8 *)v->end - 0x18);
                Vec *s = d;
                do { s--; func_00274D00(d, s); d--; n--; } while (n > 0);
            }
        }
        func_00274D00(pos, &tmp);
        {
            S14 *it = tmp.begin;
            while (it < tmp.end) { it++; }
            {
                int dn = tmp.cap - tmp.begin;
                if (dn != 0) {
                    int bytes = dn * 0x14;
                    if (bytes != 0) func_002B2028(tmp.begin, &tmp, bytes);
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
                void *block = func_002B1FC0(bytes);
                if (block) newbuf = (Vec *)block; else newbuf = (Vec *)func_003D2910(bytes);
            } else {
                u32 *freeblock = (u32 *)D_0040E618[-1];
                if (!freeblock) newbuf = (Vec *)func_00152D28(0);
                else { u32 next = *freeblock; newbuf = (Vec *)freeblock; D_0040E618[-1] = next; }
            }
        }
        ins = (Vec *)func_002761F0(v->begin, pos, newbuf, 0);
        if (ins != 0) {
            int cn = (s32)(((s32)src->end - (s32)src->begin) * 0xCCCCCCCD) >> 2;
            S14 *cp = 0;
            ins->begin = 0; ins->end = 0; ins->cap = 0;
            if (cn != 0) {
                int bytes = cn * 0x14;
                if (bytes != 0) {
                    void *block = func_002B1FC0(bytes);
                    if (block) cp = (S14 *)block; else cp = (S14 *)func_003D2910(bytes);
                } else {
                    u32 *freeblock = (u32 *)D_0040E618[-1];
                    if (!freeblock) cp = (S14 *)func_00152D28(0);
                    else { u32 next = *freeblock; cp = (S14 *)freeblock; D_0040E618[-1] = next; }
                }
            }
            ins->begin = cp; ins->end = cp; ins->cap = (S14 *)((u8 *)cp + cn * 0x14);
            ins->end = (S14 *)func_00275388(src->begin, src->end, cp, 0);
        }
        newend = (Vec *)func_002761F0(pos, v->end, ins + 1, 0);
        {
            Vec *it = v->begin;
            while ((u32)it < (u32)v->end) {
                S14 *ip = (S14 *)it->begin;
                S14 *iend = it->end;
                while ((u32)ip < (u32)iend) { ip++; }
                {
                    int dn = it->cap - it->begin;
                    if (dn != 0) {
                        int bytes = dn * 0x14;
                        if (bytes != 0) func_002B2028(it->begin, iend, bytes);
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
                if (bytes != 0) func_002B2028(v->begin, v->end, bytes);
                else { u32 next = D_0040E618[-1]; *(u32 *)v->begin = next; D_0040E618[-1] = (u32)v->begin; }
            }
        }
        v->end = newend;
        v->begin = newbuf;
        v->cap = newbuf + newcap;
    }
}
