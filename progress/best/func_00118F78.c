typedef struct { s32 x[0x58]; } S220;

extern void func_00152688(void *, s32);
extern void func_00152720(void *, s32 *, s32 *);
extern void func_00152918(void *, s32 *);
extern void **func_0017E620(void);
extern s32 func_00194738(s32);
extern s32 func_00194B18(s32);
extern s32 func_00194C40(void);
extern s32 func_00195788(s32, s32);
extern s32 func_00196028(void);
extern void func_001965F0(s32, s32, void *);
extern void func_001966C0(s32, s32, s32);
extern s32 func_00196730(s32, s32);
extern void func_00196860(s32, s32, s32);
extern void func_00196930(s32, s32, f32);
extern void func_00196A00(s32, s32, f32);
extern void func_00196AD0(s32, s32, s32);
extern void func_00196BA0(s32, s32, s32);
extern void func_00196C70(s32, s32, s32);
extern void func_00196D40(s32, s32, s32);
extern s32 func_00196E10(void);
extern void func_001D2458(void *, s32);
extern void func_002B2028(void *);
extern s32 D_0040E618[];
extern s32 D_0044DBA0[];

#define ADD_ITEM(v, off) do { \
    s32 tmp_ = (v); \
    if (tmp_ != var17) { \
        if (!((tmp_ == var18) && (var18 == -1))) { \
            if (*(s32 **)&sp[1] != (s32 *)&sp[2]) { \
                if (*(s32 **)&sp[1] != 0) **(s32 ***)&sp[1] = tmp_; \
                *(s32 **)&sp[1] = *(s32 **)&sp[1] + 1; \
            } else { \
                func_00152720(sp, *(s32 **)&sp[1], &sp[off]); \
            } \
        } \
    } \
} while (0)

void func_00118F78(s32 *out, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp[0x58];
    s32 var17, var18, i, v, tmp;
    s32 *p4;
    void **temp2;
    void *temp3;
    s32 (*fn)(void *, s32, s32, void *);
    f32 f0 = 0.0f;

    sp[0] = 0; sp[1] = 0; sp[2] = 0; sp[3] = 0;
    sp[7] = (s32)&D_0044DBA0;
    sp[8] = 1;
    sp[1] = 0; sp[2] = 0; sp[3] = 0;
    sp[4] = 1;
    func_00152688(sp, 0);
    var17 = func_00196730(func_00196E10(), 0);
    var18 = -1;
    if (func_00194738(func_00194C40()) != 0)
        var18 = func_00196730(func_00196E10(), 1);

    if (func_00194B18(func_00194C40()) == 5) {
        for (i = 0; i < 7; i++) {
            v = i + 0xF;
            ADD_ITEM(v, 0x20 >> 2);
        }
    } else {
        if (arg3 == 0) {
            for (i = 0; i < 7; i++) ADD_ITEM(i, 0x21 >> 2);
        } else if (arg3 == 1) {
            for (i = 0; i < 8; i++) {
                v = i + 7;
                ADD_ITEM(v, 0x22 >> 2);
            }
        } else if (arg3 == 2 || arg3 == 4) {
            for (i = 0; i < 7; i++) {
                v = i + 0xF;
                ADD_ITEM(v, 0x23 >> 2);
            }
            if (func_00195788(func_00196028(), 0xC) != 0) ADD_ITEM(0x17, 0x24 >> 2);
            if (func_00195788(func_00196028(), 0xD) != 0) ADD_ITEM(0x18, 0x25 >> 2);
            if (func_00195788(func_00196028(), 0xB) != 0) ADD_ITEM(0x16, 0x26 >> 2);
            if (func_00195788(func_00196028(), 0xE) != 0) ADD_ITEM(0x19, 0x27 >> 2);
        }
    }

    sp[0x14 >> 2] = 0;
    sp[0x15 >> 2] = 0;
    sp[0x1C >> 2] = 0;
    sp[0x16 >> 2] = 0;
    sp[0x17 >> 2] = 0;
    sp[0x18 >> 2] = 0;
    sp[0x19 >> 2] = 0;
    sp[0x1C >> 2] = 1;
    func_00152688(&sp[0x14 >> 2], 0);
    for (i = 0; i < 10; i++) {
        sp[0x28 >> 2] = i;
        if (*(s32 **)&sp[0x15 >> 2] != (s32 *)&sp[0x16 >> 2]) {
            if (*(s32 **)&sp[0x15 >> 2] != 0) **(s32 ***)&sp[0x15 >> 2] = i;
            *(s32 **)&sp[0x15 >> 2] = *(s32 **)&sp[0x15 >> 2] + 1;
        } else {
            func_00152720(&sp[0x14 >> 2], *(s32 **)&sp[0x15 >> 2], &sp[0x28 >> 2]);
        }
    }

    for (i = arg1; i < arg1 + arg2; i++) {
        func_00152918(sp, &sp[0x29 >> 2]);
        func_00152918(&sp[0x14 >> 2], &sp[0x2A >> 2]);
        temp2 = func_0017E620();
        temp3 = *temp2;
        fn = *(s32 (**)(void *, s32, s32, void *))((char *)temp3 + 0x2C);
        func_001D2458(&sp[0x0C >> 2], fn((char *)temp2 + *(s32 *)((char *)temp3 + 0x28), 0x39, sp[0x2A >> 2], fn));
        func_001965F0(func_00196E10(), i, &sp[0x0C >> 2]);
        func_001966C0(func_00196E10(), i, sp[0x29 >> 2]);
        func_00196860(func_00196E10(), i, sp[0x2A >> 2]);
        func_00196930(func_00196E10(), i, f0);
        func_00196A00(func_00196E10(), i, f0);
        func_00196AD0(func_00196E10(), i, 0);
        func_00196BA0(func_00196E10(), i, 0);
        func_00196C70(func_00196E10(), i, 0);
        func_00196D40(func_00196E10(), i, 0);
    }

    sp[0x1C >> 2] = (s32)&D_0044DBA0;
    if (*(s32 **)&sp[0x17 >> 2] != (s32 *)&sp[0x16 >> 2]) {
        if (*(s32 **)&sp[0x17 >> 2] != 0) **(s32 ***)&sp[0x17 >> 2] = sp[0x1C >> 2];
        *(s32 **)&sp[0x17 >> 2] = *(s32 **)&sp[0x17 >> 2] + 1;
    } else {
        func_00152720(&sp[0x14 >> 2], *(s32 **)&sp[0x17 >> 2], &sp[0x1C >> 2]);
    }

    tmp = ((s32)*(s32 **)&sp[0x17 >> 2] - (s32)&sp[0x16 >> 2]) >> 2;
    if (tmp != 0) {
        if (tmp * 4 != 0) func_002B2028(&sp[0x16 >> 2]);
        else { *(s32 **)&sp[0x16 >> 2] = D_0040E618[-1]; D_0040E618[-1] = (s32)&sp[0x16 >> 2]; }
    }
    tmp = (*(s32 *)&sp[0x16 >> 2] - (s32)&sp[0x14 >> 2]) >> 2;
    if (tmp != 0) {
        if (tmp * 4 != 0) func_002B2028(&sp[0x14 >> 2]);
        else { *(s32 **)&sp[0x14 >> 2] = D_0040E618[-1]; D_0040E618[-1] = (s32)&sp[0x14 >> 2]; }
    }
    tmp = (*(s32 *)&sp[5] - *(s32 *)&sp[3]) >> 2;
    if (tmp != 0) {
        if (tmp * 4 != 0) func_002B2028(&sp[3]);
        else { *(s32 **)&sp[3] = D_0040E618[-1]; D_0040E618[-1] = (s32)&sp[3]; }
    }
    tmp = (*(s32 *)&sp[8] - *(s32 *)&sp[0]) >> 2;
    if (tmp != 0) {
        if (tmp * 4 != 0) { func_002B2028(&sp[0]); return; }
        else { *(s32 **)&sp[0] = D_0040E618[-1]; D_0040E618[-1] = (s32)&sp[0]; }
    }
}
