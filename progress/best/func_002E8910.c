extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
extern void *func_00152D28(int);
extern void func_002B2028(void *);
extern void func_00274D00(void *, void *);
extern void *func_002761F0(void *, void *, void *, int);
extern void *func_00275388(void *, void *, void *, int);
extern void *D_0040E618[];

void func_002E8910(void *arg0, void *arg1, void *arg2) {
    typedef struct { char _d[0x14]; } S14;
    typedef struct { S14 *begin; S14 *end; S14 *cap; } Vec;
    typedef struct { Vec *begin; Vec *end; Vec *cap; } Outer;
    Outer *v = (Outer *)arg0;
    Vec *pos = (Vec *)arg1;
    Vec *src = (Vec *)arg2;
    Vec tmp;
    volatile char pad[0x10];

    if (v->end != v->cap) {
        Vec *end = v->end;
        if (end) {
            Vec *d = end;
            Vec *s = end - 1;
            int cn;
            S14 *cp;
            d->begin = 0;
            cn = s->end - s->begin;
            d->end = 0;
            d->cap = 0;
            cp = 0;
            if (cn) {
                int bytes = cn * 0x14;
                if (bytes) {
                    cp = (S14 *)func_002B1FC0(bytes);
                    if (!cp) cp = (S14 *)func_003D2910(bytes);
                } else {
                    cp = (S14 *)D_0040E618[-1];
                    if (cp) D_0040E618[-1] = *(void **)cp;
                    else cp = (S14 *)func_00152D28(0);
                }
            }
            d->begin = cp;
            d->end = cp;
            d->cap = cp + cn;
            d->end = (S14 *)func_00275388(s->begin, s->end, cp, 0);
        }
        {
            int cn;
            S14 *cp;
            tmp.begin = 0;
            v->end++;
            tmp.end = 0;
            cn = src->end - src->begin;
            tmp.cap = 0;
            cp = 0;
            if (cn) {
                int bytes = cn * 0x14;
                if (bytes) {
                    cp = (S14 *)func_002B1FC0(bytes);
                    if (!cp) cp = (S14 *)func_003D2910(bytes);
                } else {
                    cp = (S14 *)D_0040E618[-1];
                    if (cp) D_0040E618[-1] = *(void **)cp;
                    else cp = (S14 *)func_00152D28(0);
                }
            }
            tmp.begin = cp;
            tmp.end = cp;
            tmp.cap = cp + cn;
            tmp.end = (S14 *)func_00275388(src->begin, src->end, cp, 0);
        }
        {
            Vec *end2 = v->end;
            Vec *it = end2 - 2;
            int count = (it - pos);
            if (count > 0) {
                Vec *dst = end2 - 1;
                dst--;
                do {
                    Vec *srcp = it;
                    it--;
                    func_00274D00(dst, srcp);
                    count--;
                    dst--;
                } while (count > 0);
            }
        }
        func_00274D00(pos, &tmp);
        {
            S14 *it = tmp.begin;
            S14 *endp = tmp.end;
            while (it < endp) { it++; }
            {
                int dn = tmp.cap - tmp.begin;
                if (dn) {
                    if (dn * 0x14) {
                        func_002B2028(tmp.begin);
                    } else {
                        *(void **)tmp.begin = D_0040E618[-1];
                        D_0040E618[-1] = tmp.begin;
                    }
                }
            }
        }
    } else {
        int cur = v->end - v->begin;
        int newcap = cur ? cur * 2 : 1;
        Vec *newbuf = 0;
        if (newcap) {
            int bytes = newcap * 0xC;
            if (bytes) {
                newbuf = (Vec *)func_002B1FC0(bytes);
                if (!newbuf) newbuf = (Vec *)func_003D2910(bytes);
            } else {
                newbuf = (Vec *)D_0040E618[-1];
                if (newbuf) D_0040E618[-1] = *(void **)newbuf;
                else newbuf = (Vec *)func_00152D28(0);
            }
        }
        {
            Vec *ins = (Vec *)func_002761F0(v->begin, pos, newbuf, 0);
            Vec *newend;
            if (ins) {
                int cn;
                S14 *cp;
                ins->cap = 0;
                ins->begin = 0;
                cn = src->end - src->begin;
                ins->end = 0;
                cp = 0;
                if (cn) {
                    int bytes = cn * 0x14;
                    if (bytes) {
                        cp = (S14 *)func_002B1FC0(bytes);
                        if (!cp) cp = (S14 *)func_003D2910(bytes);
                    } else {
                        cp = (S14 *)D_0040E618[-1];
                        if (cp) D_0040E618[-1] = *(void **)cp;
                        else cp = (S14 *)func_00152D28(0);
                    }
                }
                ins->begin = cp;
                ins->end = cp;
                ins->cap = cp + cn;
                ins->end = (S14 *)func_00275388(src->begin, src->end, cp, 0);
            }
            newend = (Vec *)func_002761F0(pos, v->end, ins + 1, 0);
            {
                Vec *it = v->begin;
                Vec *vend = v->end;
                while (it < vend) {
                    S14 *ip = it->begin;
                    S14 *iend = it->end;
                    S14 *icap = it->cap;
                    while (ip < iend) { ip++; }
                    {
                        int dn = icap - it->begin;
                        if (dn) {
                            if (dn * 0x14) func_002B2028(it->begin);
                            else { *(void **)it->begin = D_0040E618[-1]; D_0040E618[-1] = it->begin; }
                        }
                    }
                    it++;
                }
            }
            {
                int dn = v->cap - v->begin;
                if (dn) {
                    if (dn * 0xC) func_002B2028(v->begin);
                    else { *(void **)v->begin = D_0040E618[-1]; D_0040E618[-1] = v->begin; }
                }
            }
            v->end = newend;
            v->begin = newbuf;
            v->cap = newbuf + newcap;
        }
    }
}
