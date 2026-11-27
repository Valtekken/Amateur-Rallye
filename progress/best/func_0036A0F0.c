extern void D_002AD390(void *);
extern void func_002B2028(void *);
extern void func_0036AF00(s32);
extern void func_0036D510(void *);

extern s32 D_0040E618;
extern char D_00484328[];
extern char D_00486690[];

typedef struct Elem54 {
    u8 pad[0x2C];
    void *unk2C;
} Elem54;

typedef struct Vec {
    u8 *begin;
    u8 *end;
    u8 *cap;
} Vec;

typedef struct Obj {
    void *vtable;
    Vec v4;
    Vec v10;
    u8 pad1C[8];
    Vec v24;
    Vec v30;
} Obj;

typedef struct Small {
    void *a;
    s32 b;
    s32 c;
} Small;

void func_0036A0F0(Obj *arg0, s32 arg1) {
    Vec *v4 = &arg0->v4;
    Vec *v24 = &arg0->v24;

    arg0->vtable = D_00486690;

    if (arg0->v4.begin != arg0->v4.end) {
        do {
            u8 *p = (u8 *)arg0->v4.end - 0x54;
            void *vt;
            arg0->v4.end = p;
            func_0036AF00((s32)p);
            vt = *(void **)(p + 0x2C);
            ((void (*)(u8 *, s32))(*(void **)((u8 *)vt + 0xC)))(
                p + *(s16 *)((u8 *)vt + 8), 2);
        } while (arg0->v4.begin != arg0->v4.end);
    }

    {
        s32 sz = (s32)(arg0->v30.end - arg0->v30.begin) >> 1;
        if (sz != 0) {
            if (sz * 2 != 0) {
                func_002B2028(arg0->v30.begin);
            } else {
                *(void **)arg0->v30.begin = *(void **)((u8 *)&D_0040E618 - 4);
                *(void **)((u8 *)&D_0040E618 - 4) = arg0->v30.begin;
            }
        }
    }

    {
        Small *it = (Small *)arg0->v24.begin;
        Small *end = (Small *)arg0->v24.end;
        if (it < end) {
            do {
                s32 sz2 = (s32)((u8 *)it->c - (u8 *)it->a) >> 1;
                if (sz2 != 0) {
                    if (sz2 * 2 != 0) {
                        func_002B2028(it->a);
                    } else {
                        *(void **)it->a = *(void **)((u8 *)&D_0040E618 - 4);
                        *(void **)((u8 *)&D_0040E618 - 4) = it->a;
                    }
                }
                it++;
            } while (it < end);
        }
    }

    {
        s32 sz3 = (s32)((u32)(arg0->v24.end - arg0->v24.begin) * 0xAAAAAAABu) >> 2;
        if (sz3 != 0) {
            if (sz3 * 0xC != 0) {
                func_002B2028(arg0->v24.begin);
            } else {
                *(void **)arg0->v24.begin = *(void **)((u8 *)&D_0040E618 - 4);
                *(void **)((u8 *)&D_0040E618 - 4) = arg0->v24.begin;
            }
        }
    }

    func_0036D510(&arg0->v10);

    {
        s32 sz4 = (s32)(arg0->v10.cap - arg0->v10.begin) >> 2;
        if (sz4 != 0) {
            if (sz4 * 4 != 0) {
                func_002B2028(arg0->v10.begin);
            } else {
                *(void **)arg0->v10.begin = *(void **)((u8 *)&D_0040E618 - 4);
                *(void **)((u8 *)&D_0040E618 - 4) = arg0->v10.begin;
            }
        }
    }

    {
        u8 *it = arg0->v4.begin;
        u8 *end = arg0->v4.end;
        if (it < end) {
            do {
                void *vt = *(void **)(it + 0x2C);
                ((void (*)(u8 *, s32))(*(void **)((u8 *)vt + 0xC)))(
                    it + *(s16 *)((u8 *)vt + 8), 2);
                it += 0x54;
            } while (it < end);
        }
    }

    {
        s32 sz5 = (s32)((u32)(arg0->v4.end - arg0->v4.begin) * 0x3CF3CF3Du) >> 2;
        if (sz5 != 0) {
            if (sz5 * 0x54 != 0) {
                func_002B2028(arg0->v4.begin);
            } else {
                *(void **)arg0->v4.begin = *(void **)((u8 *)&D_0040E618 - 4);
                *(void **)((u8 *)&D_0040E618 - 4) = arg0->v4.begin;
            }
        }
    }

    arg0->vtable = D_00484328;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
