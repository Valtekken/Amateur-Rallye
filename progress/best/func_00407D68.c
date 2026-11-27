/* Forward declarations */
extern s32 CreateSema_2(s32 *);
extern void DeleteSema_2(s32);
extern void WaitSema_2(s32);
extern void func_003F931C(void *, s32, s32);
extern void func_004055A0(void *, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern void *func_00406698(void);
extern void func_00406B18(s32);
extern void func_00406B48(void);
extern void func_00406C18(void);

extern s32 D_004411A8;
extern u8 D_0049FF80[0xC40];
extern u8 D_004A0BC0[0x40];
extern u8 D_004A1240[0x28];

/* Struct for D_0049FF80 based on offsets used */
typedef struct {
    s32 unk0;      /* 0x00 */
    s32 *unk4;     /* 0x04 */
    s32 unk8;      /* 0x08 */
    s32 unkC;      /* 0x0C */
    s32 unk10;     /* 0x10 */
    s32 unk14;     /* 0x14 */
    u8 pad18[0x3FC]; /* 0x18-0x413 */
    s32 unk414;    /* 0x414 */
    s32 unk418;    /* 0x418 */
    s32 unk41C;    /* 0x41C */
} D_0049FF80_t;

s32 func_00407D68(s32 arg1, s32 arg2, u32 arg3, s32 arg4, u32 arg5) {
    D_0049FF80_t *p = (D_0049FF80_t *)D_0049FF80;
    void *v0 = func_00406698();
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp24;
    s32 sp30;
    s32 sema;
    s32 temp;

    func_00406B18(0x1A);

    if (D_004411A8 == 0) {
        func_00406C18();
    }

    if (v0 == NULL || *(s32 *)((u8 *)v0 + 4) == 0) {
        func_00406B48();
        return -9;
    }

    if (arg3 >= 0x401 || arg5 >= 0x401) {
        func_00406B48();
        return -0x16;
    }

    if (arg2 == 0) {
        p->unk41C = 0;
    } else {
        func_003F931C(&p->unk14, arg2, arg5);
    }

    p->unk10 = arg1;
    p->unkC = *(s32 *)v0;
    p->unk41C = arg4;
    sp14 = 1;
    sp18 = 0;
    sp24 = 0;
    sema = CreateSema_2(&sp10);
    p->unk418 = arg5;
    p->unk4 = &sp30;
    p->unk8 = 4;
    p->unk414 = arg4;
    p->unk0 = sema;
    func_004055A0(p, 0x420);

    if (func_00405E90(D_004A1240, 0x1A, 0, p, 0x420, D_004A0BC0, 4, 0, 0) < 0) {
        DeleteSema_2(sema);
        func_00406B48();
        return -0xB;
    }

    temp = *(s32 *)((u8 *)D_004A0BC0 + 0x20000000);
    func_00406B48();

    if (temp == 0) {
        DeleteSema_2(sema);
        return -0xB;
    }

    WaitSema_2(sema);
    DeleteSema_2(sema);
    return sp30;
}
