extern s32 D_004411A8;

typedef struct {
    s32 id;
    s32 *result;
    s32 unk8;
    s32 len;
    s32 arg;
    u8 name[1024];
} Msg;

extern Msg D_0049FF80;
extern u8 D_004A0BC0[];
extern u8 D_004A1240[];

extern void func_00406B18(s32);
extern void func_00406C18(void);
extern void func_00406B48(void);
extern void func_004055A0(s32, s32, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32);
extern s32 CreateSema_2(void *);
extern void DeleteSema_2(s32);
extern void WaitSema_2(s32);

s32 func_00409A80(u8 *arg0, s32 arg1, u32 arg2) {
    s32 sem[8];
    s32 result;
    s32 i;
    s32 id;
    s32 len;
    s32 flag;
    s32 ret;
    s32 val;

    func_00406B18(0x11);
    if (D_004411A8 == 0) {
        func_00406C18();
    }

    i = 0;
    {
        u8 c = arg0[0];
        D_0049FF80.name[0] = c;
        if (c != 0) {
            do {
                i++;
                if (i >= 0x400) break;
                c = arg0[i];
                D_0049FF80.name[i] = c;
            } while (c != 0);
        }
    }

    flag = (arg2 < 0x400U);

    if (i == 0x400) {
        D_0049FF80.name[1023] = 0;
    }

    len = flag ? i : 0x3FF;

    D_0049FF80.arg = arg1;
    func_004055A0(arg1, len, flag);
    D_0049FF80.len = len;

    sem[1] = 1;
    sem[2] = 0;
    sem[5] = 0;
    id = CreateSema_2(sem);

    D_0049FF80.result = &result;
    D_0049FF80.id = id;
    D_0049FF80.unk8 = 4;

    ret = func_00405E90(&D_004A1240, 0x19, 0, &D_0049FF80, 0);
    if (ret < 0) {
        DeleteSema_2(id);
        func_00406B48();
        return -11;
    }

    func_00406B48();
    val = *(s32 *)((u32)&D_004A0BC0 | (u32)ret);
    if (val == 0) {
        DeleteSema_2(id);
        return -11;
    }

    WaitSema_2(id);
    DeleteSema_2(id);
    return result;
}
