extern char D_004448F8[];
extern char D_00444908[];
extern char D_00445DA8[];
extern s32 func_00297500(void);
extern s32 func_002971F8(s32);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3EC0(s32, void *, s32);
extern s32 func_00262838(void);
extern s32 func_002623F0(s32, void *);
extern void func_00110F50(void *);
extern void func_00111148(void *);

typedef struct {
    s32 unk0;
    s32 unk4;
} Unk14;

typedef struct {
    Unk14 *unk14;
} This;

void func_00110DE8(This *arg0)
{
    s32 stackbuf;
    s32 temp_2;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_4;

    temp_2 = func_002971F8(func_00297500());

    if (temp_2 == 2) {
        func_00110F50(arg0);
    } else if (temp_2 < 3) {
        if (temp_2 == 1) {
            if (arg0->unk14->unk4 != 0) {
                temp_16 = func_001E4280();
                func_001D4040(&stackbuf, D_004448F8);
                func_001E3EC0(temp_16, &stackbuf, arg0->unk14->unk4);
                temp_16_2 = func_00262838();
                func_001D4040(&stackbuf, D_00445DA8);
                func_002623F0(temp_16_2, &stackbuf);
            }
        }
    } else {
        if (temp_2 == 3) {
            func_00111148(arg0);
        } else if (temp_2 == 7) {
            if (arg0->unk14->unk0 != 0) {
                temp_16 = func_001E4280();
                func_001D4040(&stackbuf, D_004448F8);
                func_001E3EC0(temp_16, &stackbuf, arg0->unk14->unk0);
                temp_16_2 = func_00262838();
                func_001D4040(&stackbuf, D_00445DA8);
                func_002623F0(temp_16_2, &stackbuf);
            }
        }
    }

    temp_16_4 = func_001E4280();
    func_001D4040(&stackbuf, D_00444908);
    func_001E3EC0(temp_16_4, &stackbuf, 0);
}
