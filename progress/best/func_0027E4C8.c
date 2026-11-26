extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern void *D_0040E618[];

typedef void (*Fn)(void *, s32, void *);

typedef struct {
    s32 _0, _4;
    s16 off8;
    s16 padA;
    Fn fnC;
} VTable;

extern VTable D_0047D638;
extern VTable D_0044DCD8;

typedef struct {
    char _0[8];
    VTable *vt;
} Item;

typedef struct {
    void **b;
    void **e;
} List;

typedef struct {
    char _0[8];
    VTable *vt;
    List list;
    s32 unk14;
} Obj;

void func_0027E4C8(Obj *arg0, s32 arg1) {
    List *l;
    void **b, *blk;
    Item *cur;
    s32 n, bytes;

    arg0->vt = &D_0047D638;
    l = &arg0->list;
    b = l->b;
    if (b != l->e) {
        cur = (Item *)*b;
        do {
            if (cur != 0) {
                VTable *vt = cur->vt;
                vt->fnC((void *)((char *)cur + vt->off8), 3, cur);
            }
            ++b;
            cur = (Item *)*b;
        } while (b != l->e);
    }
    blk = arg0->list.b;
    n = ((s32)arg0->unk14 - (s32)blk) >> 2;
    if (n != 0) {
        bytes = n << 2;
        if (bytes != 0) {
            func_002B2028(blk);
        } else {
            *(s32 *)blk = (s32)D_0040E618[-1];
            D_0040E618[-1] = blk;
        }
    }
    arg0->vt = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
