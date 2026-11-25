extern void func_0021E4F0(void *);
extern s32 func_00292A48(void *, void *);

typedef struct { s32 **first; s32 **last; } List;
typedef struct { u8 pad[0x24]; u32 x; u8 pad2[0xD1-0x28]; u8 id; } Obj;

void func_002934F8(List *arg0) {
    u32 work[4];
    s32 i;
    for (i = 6; i >= 0; i--) {
        s32 **p;
        for (p = arg0->first; p != arg0->last; p++) {
            s32 *v = *p;
            if (v != 0) {
                s32 *q;
                s32 *end = (s32 *)v[1];
                if ((((u32)end - (u32)v[0]) >> 2) != 0) {
                    for (q = (s32 *)v[0]; q != end; q++) {
                        Obj *o = *(Obj **)q;
                        if (o->id == (u8)i) {
                            void *x = (void *)o->x;
                            if (x != 0) func_0021E4F0(x);
                            o->x = (u32)func_00292A48(work, o);
                        }
                    }
                }
            }
        }
    }
}
