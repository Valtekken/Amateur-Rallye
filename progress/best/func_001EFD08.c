extern void *D_002AD408(u32);
extern void func_0020F310(void *, void *, void *);

typedef struct {
    u8 data[0x34];
} Entry;

typedef struct {
    s32 pad0;
    Entry *unk4;
    Entry *unk8;
} Cell;

typedef struct {
    Cell **unk0;      /* 0x0 */
    u8 pad4[0x8];
    f32 unkC[3];      /* 0xC */
    f32 unk18[3];     /* 0x18 */
    s32 unk24[3];     /* 0x24 */
    s32 unk30;        /* 0x30 */
} S_arg0;

typedef struct {
    u8 pad0[0x34];
    Entry **unk34;    /* 0x34 */
    u8 **unk38;       /* 0x38 */
} S_arg1;

typedef struct {
    u8 pad0[0x1C];
    s32 unk1C;        /* 0x1C */
    s32 unk20;        /* 0x20 */
} S_arg2;

void func_001EFD08(S_arg0 *arg0, S_arg1 *arg1, S_arg2 *arg2) {
    s32 temp_4 = arg2->unk20;
    if (temp_4 != 0) {
        Entry *var_17 = *arg1->unk34 + arg2->unk1C;
        Entry *temp_22 = var_17 + temp_4;
        u8 *temp_23 = *arg1->unk38;
        f32 vC = 0.3333333f;
        s32 out[3];
        while (var_17 < temp_22) {
            f32 cx = 0.0f, cy = 0.0f, cz = 0.0f;
            s32 *p = (s32 *)((u8 *)var_17 + 0x1C);
            s32 k;
            Cell *cell;
            s32 idx;
            /* average 3 vertices (k=2..0 countdown, 3 iters) */
            for (k = 2; k >= 0; k--) {
                s32 vi = *p++;
                u8 *vp = temp_23 + vi * 0xC;
                cx += *(f32 *)(vp + 0);
                cy += *(f32 *)(vp + 4);
                cz += *(f32 *)(vp + 8);
            }
            {
                f32 tri[3];
                tri[0] = cx * vC;
                tri[1] = cy * vC;
                tri[2] = cz * vC;
                for (k = 0; k < 3; k++) {
                    s32 num = (s32)(((tri[k] - arg0->unk18[k]) / arg0->unkC[k]) * (f32)arg0->unk24[k]);
                    out[k] = num;
                }
            }
            idx = out[0] + out[1] * arg0->unk24[0] + out[2] * arg0->unk30;
            cell = arg0->unk0[idx];
            if (cell == NULL) {
                cell = (Cell *)D_002AD408(0xC);
                cell->pad0 = 0;
                cell->unk4 = NULL;
                cell->unk8 = NULL;
                arg0->unk0[idx] = cell;
            }
            if (cell->unk4 == cell->unk8) {
                func_0020F310((void *)cell, (void *)cell->unk4, (void *)var_17);
            } else {
                Entry *dst = cell->unk4;
                if (dst != NULL) {
                    *dst = *var_17;
                }
                cell->unk4 = cell->unk4 + 1;
            }
            var_17 = var_17 + 1;
        }
    }
}
