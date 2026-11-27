typedef struct Obj { s32 id; s32 pad4[2]; void *vtable; } Obj;
typedef struct Hdr { s32 free_next; s32 next; s32 refcount; s32 vtable; } Hdr;
typedef struct REntry { void *p; s32 refcount; } REntry;
typedef struct Free { s32 *vec; s32 *cur; s32 *end; } Free;
typedef struct Table {
    s32 *map;
    s32 pad04; s32 pad08;
    s32 *reverse;
    s32 pad10; s32 pad14;
    Free free;
    REntry *entries;
    s32 pad28; s32 pad2c;
    s32 count;
} Table;
extern void *D_00486D18;
extern Table D_004262D0;
extern s32 D_0040E618[];
extern u8 D_0040E658[];
extern void func_002B2028(void *);
extern void func_00152720(void *, s32 *, s32 *);
extern void D_002AD390(Obj *);

void func_003805A0(Obj *self, s32 arg1) {
    Table *t = &D_004262D0;
    self->vtable = &D_00486D18;
    if (self->id < 0) goto after;
    if (--t->entries[t->map[self->id]].refcount == 0) {
        s32 last = t->count - 1;
        s32 n = self->id;
        s32 idx = t->map[n];
        t->count = last;
        if (idx != last) {
            s32 lastId = t->reverse[last];
            REntry *curE = &t->entries[last];
            REntry *lastE = &t->entries[idx];
            if (lastE != curE) {
                Hdr *h = (Hdr *)((char *)lastE->p - 0x10);
                void *np;
                if (--h->refcount == 0) {
                    if (h->next + 0x10 != 0) func_002B2028(h);
                    else { h->free_next = D_0040E618[-1]; D_0040E618[-1] = (s32)h; }
                }
                {
                    void *p = curE->p;
                    Hdr *h2 = (Hdr *)((char *)p - 0x10);
                    if (h2->vtable) np = (void *)func_00151930(h2);
                    else { h2->refcount++; np = p; }
                }
                lastE->p = np;
            }
            lastE->refcount = curE->refcount;
            t->map[lastId] = idx;
            t->reverse[idx] = lastId;
        }
        {
            REntry *e2 = &t->entries[t->count];
            REntry tmp;
            Hdr *hs = (Hdr *)D_0040E658;
            void *np;
            if (hs->vtable) np = (void *)func_00151930(hs);
            else { hs->refcount++; np = (void *)(hs + 1); }
            tmp.p = np;
            tmp.refcount = 0;
            if (e2 != &tmp) {
                Hdr *h = (Hdr *)((char *)e2->p - 0x10);
                void *np2;
                if (--h->refcount == 0) {
                    if (h->next + 0x10 != 0) func_002B2028(h);
                    else { h->free_next = D_0040E618[-1]; D_0040E618[-1] = (s32)h; }
                }
                {
                    void *p = tmp.p;
                    Hdr *h2 = (Hdr *)((char *)p - 0x10);
                    if (h2->vtable) np2 = (void *)func_00151930(h2);
                    else { h2->refcount++; np2 = p; }
                }
                e2->p = np2;
            }
            e2->refcount = tmp.refcount;
            {
                Hdr *h3 = (Hdr *)((char *)tmp.p - 0x10);
                if (--h3->refcount == 0) {
                    if (h3->next + 0x10 != 0) func_002B2028(h3);
                    else { h3->free_next = D_0040E618[-1]; D_0040E618[-1] = (s32)h3; }
                }
            }
        }
        if (t->free.cur != t->free.end) {
            if (t->free.cur) *t->free.cur = n;
            t->free.cur = t->free.cur + 1;
        } else func_00152720(&t->free, t->free.cur, &n);
    }
    self->id = -1;
after:
    if (arg1 & 1) D_002AD390(self);
}
