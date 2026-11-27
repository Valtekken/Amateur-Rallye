typedef struct {
    s32 id;          /* 0x0 */
    s32 *result;     /* 0x4 */
    s32 size;        /* 0x8 */
    s32 arg;         /* 0xC */
    s32 arg2;        /* 0x10 */
    u8 name[1024];   /* 0x14 */
    s32 field414;    /* 0x414 */
} Msg06EA8;

typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; } Rec16;

extern s32 D_004411A8;
extern s32 D_004411B0;
extern Msg06EA8 D_0049FF80;
extern char D_004A0BC0[];
extern char D_004A1240[];
extern char D_004A1040[];

extern void func_00406B18(s32);
extern void func_00406B48(void);
extern void func_00406C18(void);
extern s32 func_00406DE0(void);
extern void *func_00406610(void);
extern s32 CreateSema_2(void *);
extern s32 DeleteSema_2(s32);
extern s32 WaitSema_2(s32);
extern s32 SignalSema_2(s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_00406EA8(u8 *arg0, s32 arg1, s32 arg2, ...) {
    s32 sem[8];
    s32 result;
    s32 i;
    s32 id;
    s32 val;
    s32 rc;
    s32 index;
    Msg06EA8 *p = &D_0049FF80;
    Rec16 *rec;
    s8 c;

    func_00406B18(0);
    if (D_004411A8 == 0) func_00406C18();
    if (func_00406DE0() != 0) {
        func_00406B48();
        return -0x10004;
    }
    rec = (Rec16 *)func_00406610();
    if (rec == 0) {
        func_00406B48();
        return -0x13;
    }

    i = 0;
    c = (p->name[0] = arg0[0]);
    if (c) {
        do {
            i++;
            if (i >= 1024) break;
            c = (p->name[i] = arg0[i]);
        } while (c);
    }
    if (i == 1024) p->name[1023] = 0;

    index = ((s32)rec - (s32)D_004A1040) >> 4;
    p->field414 = index;
    p->arg = arg1 & 0x6FFFFFFF;
    p->arg2 = *(volatile s32 *)&arg2;

    sem[1] = 1;
    sem[2] = 0;
    sem[5] = 0;
    id = CreateSema_2(sem);
    p->result = &result;
    p->id = id;
    p->size = 4;

    if (func_00405E90(D_004A1240, 0, 0, &D_0049FF80, 0x418, D_004A0BC0, 4, 0, 0) < 0) {
        DeleteSema_2(id);
        func_00406B48();
        return -0xB;
    }
    val = *(s32 *)((u32)D_004A0BC0 | 0x20000000);
    func_00406B48();
    if (val == 0) {
        DeleteSema_2(id);
        return -0xB;
    }
    WaitSema_2(id);
    DeleteSema_2(id);
    rc = result;
    if (rc < 0) {
        WaitSema_2(D_004411B0);
        rec->f4 = 0;
        SignalSema_2(D_004411B0);
        return rc;
    }
    WaitSema_2(D_004411B0);
    rec->f4 = rec->f4 | arg1;
    rec->f0 = rc;
    SignalSema_2(D_004411B0);
    return index;
}
