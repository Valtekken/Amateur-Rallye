extern s32 func_002F9AD0(void *);
extern void func_00376658(void *, s32);
extern void func_003768A8(void *);
extern s32 func_002F9840(void *, s32, s32, s32, s32, s32);

typedef struct {
    u8 _pad[0x1B0];
    s32 f1B0;
    s32 f1B4;
    u8 _pad2[4];
    s32 f1BC;
} Image;

typedef struct {
    Image *image;
    u8 _pad[0x114];
    s32 flag;
    u8 _pad2[0x10];
} TexEntry;

typedef struct {
    s32 *indices;
    u8 _pad[0x20];
    TexEntry *textures;
    u8 _pad2[0x50];
    s32 count;
} TexMgr;

void func_002F9B20(TexMgr *m, s32 *key, s32 arg2) {
    TexEntry *e;
    Image *img;
    s32 a, b, n, idx;

    e = &m->textures[m->indices[*key]];
    func_00376658(e, 0x12C);
    img = e->image;
    a = e->flag ? 4 : 2;
    b = (img->f1BC < 2) ? 2 : 1;
    n = img->f1B0 * img->f1B4 * a * b;
    func_002F9840(m, *key, n, arg2, b, a);
    if ((u32)m->count > 0x440000u) {
        do {
            idx = func_002F9AD0(m);
            func_003768A8(&m->textures[m->indices[idx]]);
        } while ((u32)m->count > 0x440000u);
    }
}
