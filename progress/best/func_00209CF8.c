typedef struct Vec3 { f32 x, y, z; } Vec3;

typedef struct Elem {
    char pad0[0xC];
    s32 unkC;
    char pad10[0x1C - 0x10];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    char pad28[0x34 - 0x28];
} Elem;

typedef struct Ret {
    char pad0[0x1C];
    s32 unk1C;
    s32 unk20;
} Ret;

typedef struct Local {
    Vec3 v1;
    Vec3 v2;
    Vec3 v3;
    char pad24[0x34 - 0x24];
    s32 flag;
} Local;

typedef void *(*VFn)(void *);

extern void func_001D4040(void *, void *);
extern void func_0020DE10(void *, void *);

void func_00209CF8(void *arg0, void *arg1, void *arg2)
{
    if (arg1 == 0) return;
    if (arg2 == 0) return;

    {
        void *vt = *(void **)((char *)arg2 + 0x10);
        s32 adj = *(s16 *)((char *)vt + 0x18);
        VFn fn = *(VFn *)((char *)vt + 0x1C);
        Ret *r = (Ret *)fn((char *)arg2 + adj);

        if (r != 0) {
            s32 count = r->unk20;
            s32 i;
            s32 var16 = r->unk1C * 0x34;
            void *base34 = *(void **)((char *)arg1 + 0x34);
            Vec3 *verts = *(Vec3 **)((char *)arg1 + 0x38);
            void *base24 = *(void **)((char *)arg1 + 0x24);

            for (i = 0; i < count; i++) {
                Elem *e = (Elem *)((char *)*(void **)base34 + var16);
                Vec3 *src;
                Vec3 tmp;
                Local local;
                f32 x, y, z;

                local.flag = 0;
                var16 += 0x34;

                src = &verts[e->unk1C];
                x = src->x; y = src->y; z = src->z;
                tmp.x = x; tmp.y = y; tmp.z = z;
                local.v1.x = x; local.v1.y = y; local.v1.z = z;

                src = &verts[e->unk20];
                x = src->x; y = src->y; z = src->z;
                tmp.x = x; tmp.y = y; tmp.z = z;
                local.v2.x = x; local.v2.y = y; local.v2.z = z;

                src = &verts[e->unk24];
                x = src->x; y = src->y; z = src->z;
                tmp.x = x; tmp.y = y; tmp.z = z;
                local.v3.x = x; local.v3.y = y; local.v3.z = z;

                func_001D4040(arg0, *(void **)((char *)*(void **)base24 + e->unkC * 0x58 + 0x54));
                func_0020DE10(arg0, &local);
            }
        }
    }

    {
        void *node = *(void **)arg2;
        while (node != 0) {
            func_00209CF8(arg0, arg1, node);
            node = *(void **)((char *)node + 4);
        }
    }
}
