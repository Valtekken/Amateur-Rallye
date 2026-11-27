extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];

typedef struct R {
    u32 *begin;
    u32 *end;
    u32 *last;
} R;

typedef struct N {
    s32 f0;
    struct N *parent;
    struct N *next;
    struct N *child;
    s32 f10;
    R *rec;
} N;

typedef struct {
    N *cur;
    char pad[0xC];
    N *last;
} Loc;

typedef struct {
    char pad[0x24];
    N *head;
} Mgr;

void func_001F43F0(Mgr *arg0) {
    Loc loc;
    N *h = arg0->head;
    N *n = h->next;
    loc.last = h;
    loc.cur = n;
    if (n == h) return;
    do {
        N *cur = loc.cur;
        R *rec = cur->rec;
        if (rec) {
            u32 *start = rec->begin;
            u32 *end = rec->end;
            u32 *last = rec->last;
            u32 *orig = start;
            if (start < end) {
                do { start = (u32 *)((char *)start + 0x34); } while (start < end);
            }
            s32 diff = (s32)((char *)last - (char *)orig);
            s32 count = diff / 52;
            if (count != 0) {
                s32 total = count * 52;
                if (total == 0) goto freelist;
                func_002B2028(orig);
                goto after_free;
freelist:
                {
                    u32 old = D_0040E618[-1];
                    *orig = old;
                    D_0040E618[-1] = (u32)orig;
                }
after_free:
                ;
            }
            D_002AD390(rec);
            cur = loc.cur;
        }
        if (cur->child) {
            N **p = &loc.cur;
            *p = cur->child;
            if ((*p)->next == 0) goto tail;
            do { *p = (*p)->next; } while ((*p)->next);
            goto tail;
        } else {
            N *parent = cur->parent;
            if (cur != parent->child) goto ascend_done;
            loc.cur = parent;
            for (;;) {
                parent = parent->parent;
                if (loc.cur != parent->child) break;
                loc.cur = parent;
            }
ascend_done:
            if (loc.cur->child != parent) goto tail;
            loc.cur = parent;
        }
tail:
        loc.last = arg0->head;
    } while (loc.cur != arg0->head);
}
