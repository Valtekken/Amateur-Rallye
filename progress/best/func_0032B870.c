typedef struct {
    s32 *begin;
    s32 *end;
    s32 *cap;
} V;

extern u32 D_0040E618[];
extern void *func_002B1FC0(unsigned);
extern void *func_003D2910(unsigned);
extern void *func_00152D28(unsigned);
extern void func_002B2028(void *);
extern s32 *func_001D9F10(s32 *, s32 *, s32 *);
extern s32 *func_001D9A28(s32 *, s32 *, s32 *);
extern s32 *func_001D9A60(s32 *, s32, s32 *);

void func_0032B870(V *v, s32 *pos, u32 m, s32 *first)
{
    if (m != 0) {
        s32 *end = v->end;
        if (((unsigned)((s32 *)v->cap - end) >> 2) < m) {
            unsigned cur = (unsigned)(end - v->begin) >> 2;
            unsigned count = cur + (cur < m ? m : cur);
            s32 *mem;
            unsigned bytes = count * 4;
            if (count == 0) {
                mem = 0;
                bytes = 0;
            } else if (bytes == 0) {
                s32 *p = (s32 *)D_0040E618[-1];
                if (p != 0) {
                    mem = p;
                    D_0040E618[-1] = *(u32 *)p;
                } else {
                    mem = (s32 *)func_00152D28(0);
                }
            } else {
                mem = (s32 *)func_002B1FC0(bytes);
                if (mem == 0)
                    mem = (s32 *)func_003D2910(bytes);
            }
            s32 *out = func_001D9F10(v->begin, pos, mem);
            out = func_001D9A60(out, m, first);
            out = func_001D9F10(pos, end, out);
            {
                s32 *i = v->begin;
                while (i < end)
                    i += 1;
            }
            {
                s32 *data = v->begin;
                unsigned c = (unsigned)((s32 *)v->cap - data) >> 2;
                if (c != 0) {
                    if (c * 4 != 0) {
                        func_002B2028(data);
                    } else {
                        *(u32 *)data = D_0040E618[-1];
                        D_0040E618[-1] = (u32)data;
                    }
                }
                v->cap = mem + count;
            }
            v->end = out;
            v->begin = mem;
        } else {
            unsigned after = (unsigned)(end - pos) >> 2;
            s32 val = *first;
            if (m < after) {
                s32 *s = end - m;
                func_001D9F10(s, end, end);
                v->end = end + m;
                {
                    s32 *d = end;
                    s32 *ss = s;
                    unsigned n = (unsigned)(s - pos) >> 2;
                    if (n != 0) {
                        do {
                            d -= 1;
                            ss -= 1;
                            *d = *ss;
                            n -= 1;
                        } while (n != 0);
                    }
                }
                func_001D9A28(pos, pos + m, &val);
            } else {
                func_001D9A60(end, m - after, &val);
                v->end = end + (m - after);
                func_001D9F10(pos, end, v->end);
                v->end = v->end + after;
                func_001D9A28(pos, end, &val);
            }
        }
    }
}
