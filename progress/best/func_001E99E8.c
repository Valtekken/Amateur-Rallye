extern s32 func_001D4010(s32);
extern void func_001D2458(void *, s32);
extern s32 func_001CE2F8(void *);
extern s32 func_001D24B8(void *, s32, s32, void *);
extern void func_001D2A40(void *, s32, s32);
extern s32 func_003FA9B8(s32);
extern s32 func_003FA760(s32, s32);
extern void D_002AD390(s32);
extern char D_00477110[], D_00477120[];

s32 func_001E99E8(s32 unused, s32 arg1, s32 arg2) {
    void *sp[4], *key1, *key2;
    s32 idx1, idx2, var2, r, m = -1;
    u32 ok;

    func_001D2458(sp, func_001D4010(arg1));
    key1 = D_00477110;
    idx1 = func_001D24B8(sp, 0, func_001CE2F8(sp), key1);
    if (idx1 == m) goto fail;
    func_001D2A40(sp, 0, idx1);
    key2 = D_00477120;
    idx2 = func_001D24B8(sp, 0, func_001CE2F8(sp), key2);
    if (idx2 == m) goto fail;
    m = idx2 + 1;
    var2 = (sp[0] != 0) ? func_003FA9B8((s32)sp[0]) : 0;
    func_001D2A40(sp, var2, m);
    r = func_001D4010(arg2);
    ok = 0;
    if (sp[0] != 0 && r != 0) ok = (u32)func_003FA760(r, (s32)sp[0]) < 1;
    if (ok) goto success;
fail:
    D_002AD390((s32)sp[0]);
    return 0;
success:
    D_002AD390((s32)sp[0]);
    return 1;
}
