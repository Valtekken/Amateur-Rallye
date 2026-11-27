#include "context.h"

extern s32 func_002C7190(void);
extern void *func_001D3980(s32);
extern void func_001D3568(void *);
extern void func_001D2458(void *, const char *);
extern void *func_001D4010(void *);
extern void func_001D2900(void *, void *);
extern void func_001D2ED8(void *, s32, s32);
extern void func_002B8438(void *);
extern s32 func_002B8568(void *, s32);
extern void func_001D2488(s32 *, void *);
extern s32 func_002B8BB8(void *, s32, s32);
extern void func_001D35F8(void *);
extern void D_002AD390(s32);
extern s32 func_002B85A8(void *, s32, s32, s32);
extern s32 func_002B8A50(void *, s32, s32);
extern void func_001D3740(void *);
extern void func_002B84E0(void *, s32);

extern char D_00481DB8[];
extern char D_00481DC0[];

struct UnkStruct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

void func_002C7008(void) {
    volatile char pad[0x20];
    s32 sp0;
    u8 sp10[0x40];
    s32 sp50;
    void *temp_2;
    struct UnkStruct *inner;
    s32 var_5;
    s32 var_6;

    temp_2 = func_001D3980(func_002C7190());
    if (temp_2 != NULL) {
        func_001D3568(temp_2);
        func_001D2458(&sp0, D_00481DB8);
        func_001D2900(&sp0, func_001D4010((u8 *)temp_2 + 0x10));
        func_001D2ED8(&sp0, 0x2F, 0x5C);
        func_002B8438(sp10);
        if (func_002B8568(sp10, sp0) != 0) {
            func_001D2488(&sp50, sp10);
            func_001D2900(&sp50, D_00481DC0);
            if (func_002B8BB8(sp10, sp50, sp0) == 0) {
                func_001D35F8(temp_2);
                D_002AD390(sp50);
            } else {
                D_002AD390(sp50);
            }
        }
        inner = (struct UnkStruct *)*(void **)temp_2;
        var_5 = (inner != NULL) ? inner->unk8 : 0;
        var_6 = (inner != NULL) ? inner->unkC : 0;
        if (func_002B8A50(sp10, var_5, var_6) == 0) {
            func_001D35F8(temp_2);
        } else {
            func_001D3740(temp_2);
        }
        func_002B84E0(sp10, 2);
        D_002AD390(sp0);
    }
}
