extern s32 D_004411A8;
extern u8 D_004A0BC0[64];
extern u8 D_004A1240[40];
typedef struct { s32 f0, f4, f8, fC, f10; u8 name[0x400]; } Work;
extern Work D_0049FF80[3];
typedef struct { s32 a0, a4, a8, aC, a10, a14, a18, a1C; } SemaAttr;
typedef struct { s32 f0, f4; } T;
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 func_00406B18(s32);
extern s32 func_00406B48(void);
extern s32 CreateSema_2(void *);
extern s32 DeleteSema_2(s32);
extern s32 WaitSema_2(s32);
extern void *func_00406698(void);

s32 func_004088C0(s32 arg0, s32 arg1) {
    SemaAttr attr;
    s32 sp30, sem, temp;
    Work *wp = &D_0049FF80[0];
    T *t = (T *)func_00406698();
    func_00406B18(0xB);
    {
        s32 flag = D_004411A8;
        if (flag == 0) { func_00406B48(); return -1; }
    }
    if (t == 0 || t->f4 == 0) { func_00406B48(); return -9; }
    {
        s32 t0 = t->f0;
        wp->f10 = arg1;
        wp->fC = t0;
    }
    attr.a4 = 1;
    attr.a8 = 0;
    attr.a14 = 0;
    sem = CreateSema_2(&attr);
    wp->f0 = sem;
    wp->f4 = (s32)&sp30;
    wp->f8 = 4;
    if (func_00405E90(&D_004A1240, 0xB, 0, &D_0049FF80, 0x20, &D_004A0BC0, 4, 0, 0) < 0) {
        WaitSema_2(sem);
        func_00406B48();
        return -0xB;
    }
    temp = *(s32 *)((u32)&D_004A0BC0 | 0x20000000U);
    func_00406B48();
    if (temp == 0) { DeleteSema_2(sem); return -0xB; }
    WaitSema_2(sem);
    DeleteSema_2(sem);
    return sp30;
}
