extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern void *D_0040E618[];

typedef struct { u32 f0; void *p; u32 kind; } Obj;
typedef struct { s32 *b, *e, *c; } V4;
typedef struct { u32 pad[2]; s16 off; s16 pad2; void (*fn)(void *, s32, void *); } VT;

void func_001E5B20(Obj *arg0) {
    switch (arg0->kind) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
        D_002AD390(arg0->p);
        break;
    case 9: {
        V4 *q = (V4 *)arg0->p;
        s32 *b, *e, *blk;
        s32 n;
        if (q) {
            b = q->b; e = q->e;
            if ((u32)b < (u32)e) {
                do { D_002AD390((void *)*b); b++; } while ((u32)b < (u32)e);
            }
            blk = (s32 *)q->b;
            n = q->c - q->b;
            if (n) {
                if (n * 4) func_002B2028((void *)blk);
                else { blk[0] = (s32)D_0040E618[-1]; D_0040E618[-1] = blk; }
            }
            D_002AD390(q);
        }
        break;
    }
    case 10: {
        void *q = arg0->p;
        if (q) {
            VT *vt = *(VT **)((char *)q + 4);
            vt->fn((char *)q + vt->off, 3, q);
        }
        break;
    }
    case 11:
        D_002AD390(arg0->p);
        break;
    }
    arg0->p = NULL;
}
