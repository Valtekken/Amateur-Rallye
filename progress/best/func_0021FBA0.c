extern s32 func_001D4010(void *);
extern s64 func_002AD350(f32);
extern void func_003F9698(const char *, ...);

extern char D_00478EE8[];
extern char D_00478F38[];
extern char D_00478F40[];
extern char D_00478F48[];
extern char D_00478F58[];
extern char D_00478F60[];
extern char D_00478F68[];
extern char D_00478F70[];
extern char D_00478F78[];
extern char D_00478F80[];

typedef struct
{
    s32 flag;        /* +0x0 */
    s32 pad0[1];     /* +0x4 area handled as array below */
} Head;

void func_0021FBA0(void *arg0, void *arg1)
{
    char *obj = (char *)arg1;
    f32 *unk50;
    s32 *temp_17;
    s32 temp_23, temp_21, temp_22;
    int px, py, pz;
    char *var_2;
    s64 var_3;
    int i;

    unk50 = *(f32 **)(obj + 0x50);
    temp_17 = *(s32 **)unk50;                 /* unk50->unk0 */

    temp_23 = func_001D4010(obj + 0x5C);
    temp_21 = func_001D4010(unk50 + 3);       /* unk50 + 0xC */

    px = (int)unk50[0x50 / 4];                /* +0x50 */
    py = (int)unk50[0x54 / 4];                /* +0x54 */
    pz = (int)unk50[0x58 / 4];                /* +0x58 */

    temp_22 = *(s32 *)(obj + 0x74);

    if (temp_17 != NULL)
        var_3 = func_002AD350(*(f32 *)temp_17);
    else
        var_3 = 0;

    if (temp_17 != NULL)
        var_2 = D_00478F38;
    else
        var_2 = D_00478F40;

    func_003F9698(D_00478EE8, obj, temp_23, temp_21, temp_22, px, py, pz, var_2, var_3);

    func_003F9698(D_00478F48);

    if (*(s32 *)(obj + 0x58) != 0)
        func_003F9698(D_00478F58);

    if (((*(u32 *)obj) >> 1) & 1)
        func_003F9698(D_00478F60);

    if (((*(u32 *)obj) >> 2) & 1)
        func_003F9698(D_00478F68);

    if (*(s32 *)(unk50 + 0x74 / 4) & 1)
        func_003F9698(D_00478F70);

    func_003F9698(D_00478F78);

    for (i = 0; i < 4; i++)
    {
        s32 p = 0;
        if (i < 4)
            p = *(s32 *)(obj + 4 + i * 4);
        if (p != 0)
            func_003F9698(D_00478F80, i, func_001D4010((char *)p + 4));
    }
}
