extern s32 func_002AD350(f32);
extern s32 func_003F9698(char *, ...);
extern void *func_001D4010(void *, void **, s32);
extern char D_004774D8[], D_004782D8[], D_004782F0[], D_00478308[];
typedef struct { s32 f0, f4, f8, fC; } Counter;
extern Counter D_004262B0;
void func_001FDEA8(void *arg1) {
    void **array = *(void **)arg1;
    void *end = *(void **)((char *)arg1 + 4);
    void **var_5 = array;
    void **temp_23 = array;
    void **sp14 = array + 1;
    void *var_22;
    func_003F9698(D_004782D8);
    D_004262B0.fC++;
    if (temp_23 != end) {
        do {
            var_22 = *temp_23;
            sp14 = temp_23 + 1;
            if (var_22 != NULL) {
                func_003F9698(D_004782F0, func_001D4010(arg1, temp_23, (s32)(temp_23 - var_5) >> 2));
                D_004262B0.fC++;
                var_22 = *(void **)var_22;
                if (var_22 != NULL) {
                    do {
                        func_003F9698(D_00478308, func_002AD350(*(f32 *)((char *)var_22 + 0x40)), func_002AD350(*(f32 *)((char *)var_22 + 0x44)), func_002AD350(*(f32 *)((char *)var_22 + 0x48)), func_002AD350(*(f32 *)((char *)var_22 + 0x30)), func_002AD350(*(f32 *)((char *)var_22 + 0x34)), func_002AD350(*(f32 *)((char *)var_22 + 0x38)), func_001D4010(var_22, NULL, 0));
                        var_22 = (void *)((char *)var_22 + 0x50);
                    } while (var_22 != end);
                }
                D_004262B0.fC--;
                func_003F9698(D_004774D8);
            }
            temp_23 = sp14;
        } while (temp_23 != end);
    }
    D_004262B0.fC--;
    func_003F9698(D_004774D8, temp_23);
}
