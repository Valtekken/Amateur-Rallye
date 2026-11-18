extern void func_001D4040(void *, const char *);
extern char D_00446628[];
extern char D_0044D800[];
extern char D_00444E20[];
extern char D_0044DA70[];
extern void *D_002AD408(s32);
extern void *func_00297E40(void *);

void *func_0011B708(s32 *p)
{
    s32 k[4];
    func_001D4040(k, D_00446628);
    p[1] = k[0];
    p[0] = -1;
    p[2] = (s32)D_0044D800;
    p[10] = 1;
    *(f32 *)((u8 *)p + 0x54) = 1.0f;
    p[13] = 0;
    p[17] = 0;
    p[3] = 0;
    p[11] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 1;
    p[9] = 1;
    p[12] = 0;
    p[3] = 0;
    p[14] = 0;
    p[15] = 0;
    p[16] = 0;
    p[18] = 0;
    p[19] = 0;
    p[20] = 0;
    p[22] = 0;
    p[23] = 0;
    p[24] = 0;
    return p;
}

typedef struct Obj6 { int refs, key; void *vt; int id; void *nav; int unk14; } Obj6;
void *func_0011ADD8(Obj6 *p)
{
    int k[4];
    func_001D4040(k, D_00444E20);
    p->key = k[0];
    p->refs = -1;
    p->vt = (void *)D_0044DA70;
    p->id = 0;
    p->nav = func_00297E40(D_002AD408(16));
    p->unk14 = 1;
    return p;
}
