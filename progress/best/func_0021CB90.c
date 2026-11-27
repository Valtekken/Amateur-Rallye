extern void func_003F9698(char *, char *);
extern void func_002B2028(void *, void *, s32, void *, s32, s32, void *, s32);
extern void D_002AD530(void *, s32);
extern u32 D_0040E618[];
extern char D_00478C78[], D_00478CD0[];

typedef struct C {
    s32 *vt;
    u32 f4, f8, fC, f10, f14, f18, f1C, f20, f24;
} C;

#define PUSH(p) do { u32 prev = D_0040E618[-1]; *(u32 *)(p) = prev; D_0040E618[-1] = (u32)(p); } while (0)

void func_0021CB90(C *c) {
    s32 **vt; s32 n;
    func_003F9698(D_00478C78, D_00478CD0);
    vt = (s32 **)c->vt;
    ((void (*)(C *, s32))vt[3])((C *)((char *)c + (s32)vt[2]), (s32)vt[3]);
    ((void (*)(C *, s32))vt[5])((C *)((char *)c + (s32)vt[4]), (s32)vt[5]);
    { void **head = (void **)&c->f1C; void *p, *q, *base;
      if (c->f1C != (u32)head[1]) {
        do {
          p = head[1]; head[1] = (void *)((char *)p - 4);
          if (p) { n = *(s32 *)((char *)p - 0x10);
            q = (void *)((char *)p + n * 0xC);
            if (p != q) { base = (void *)((char *)q - 0xC); do { base = (void *)((char *)base - 0xC); } while (p != base); }
            D_002AD530((char *)p - 0x10, n);
          }
        } while (c->f1C != (u32)head[1]);
      }
    }
    {
      u32 start = c->f1C, stop = c->f24, a = c->f4, b = c->f8, d = c->fC, e = c->f10;
      u32 f = c->f14, h = c->f20;
      c->f24 = 0; c->f4 = 0; c->f8 = 0; c->fC = 0; c->f10 = 0; c->f14 = 0; c->f18 = 0; c->f1C = 0; c->f20 = 0;
      n = ((s32)stop - (s32)start) >> 2;
      if (n) { if (n * 4) func_002B2028((void *)start, (void *)h, (s32)d, (void *)a, (s32)b, (void *)stop, (void *)start, n); else PUSH(start); }
      n = ((s32)f - (s32)e) >> 2;
      if (n) { if (n * 4) func_002B2028((void *)e, (void *)h, (s32)d, (void *)a, (s32)b, (void *)stop, (void *)start, n); else PUSH(e); }
      n = ((s32)d - (s32)a) >> 2;
      if (n) { if (n * 4) func_002B2028((void *)a, (void *)h, (s32)d, (void *)a, (s32)b, (void *)stop, (void *)start, n); else PUSH(a); }
    }
}
