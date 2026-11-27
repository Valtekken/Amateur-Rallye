extern void func_003F9698(void *, ...);

extern struct Node *D_0042E8E8;

extern u8 D_00486370[];
extern u8 D_00486380[];
extern u8 D_004863D8[];
extern u8 D_004863F0[];
extern u8 D_00486408[];
extern u8 D_00486420[];

typedef struct Ctx {
    s32 unk0;    /* 0x0 */
    s32 unk4;    /* 0x4 */
    u8 pad8[0x14 - 0x8];
    void *unk14; /* 0x14 */
    void *unk18; /* 0x18 */
    void *unk1C; /* 0x1C */
    u8 pad20[0x24 - 0x20];
    s32 unk24;   /* 0x24 */
} Ctx;

typedef struct Node {
    struct Node *unk0; /* 0x0 next */
    u8 pad4[0x4];
    Ctx *unk8;         /* 0x8 */
} Node;

void func_003615C8(void) {
    s32 active = 0;
    s32 dormant = 0;
    s32 totalTag = 0;
    s32 totalVert = 0;
    Node *node;
    s32 i;
    s32 v3;
    s32 v4;

    func_003F9698(D_00486370);

    node = D_0042E8E8->unk0;
    if (node != D_0042E8E8) {
        do {
            Ctx *ctx = node->unk8;
            s32 count = 0;
            s32 tags = 0;
            s32 verts = 0;
            void *s;

            s = ctx->unk14;
            if (s != NULL) {
                count = 1;
                verts = *(s32 *)((u8 *)*(void **)((u8 *)s + 0x10) + 0xC);
                tags = (*(s32 *)((u8 *)*(void **)((u8 *)s + 0x14) + 0xC) + 3) >> 2;
            }
            s = ctx->unk18;
            if (s != NULL) {
                count += 1;
                verts += *(s32 *)((u8 *)*(void **)((u8 *)s + 0x10) + 0xC);
                tags += (*(s32 *)((u8 *)*(void **)((u8 *)s + 0x14) + 0xC) + 3) >> 2;
            }
            s = ctx->unk1C;
            if (s != NULL) {
                count += 1;
                verts += *(s32 *)((u8 *)*(void **)((u8 *)s + 0x10) + 0xC);
                tags += (*(s32 *)((u8 *)*(void **)((u8 *)s + 0x14) + 0xC) + 3) >> 2;
            }

            if (count > 0) {
                func_003F9698(D_00486380, count, tags, verts, ctx->unk24, ctx->unk4, ctx->unk0);
                for (v3 = 0x7D0; v3 >= 0; v3--) {
                    for (v4 = 0x30; v4 >= 0; v4--) {
                    }
                }
                totalTag += tags;
                totalVert += verts;
                active += 1;
            } else {
                dormant += 1;
            }

            node = node->unk0;
        } while (node != D_0042E8E8);
    }

    func_003F9698(D_004863D8, active);
    func_003F9698(D_004863F0, dormant);
    func_003F9698(D_00486408, totalTag);
    func_003F9698(D_00486420, totalVert);

    for (i = 0x7D0; i >= 0; i--) {
        for (v4 = 0x30; v4 >= 0; v4--) {
        }
    }
}
