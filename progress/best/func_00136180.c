extern s32 D_002AD408(s32);
extern s32 func_00134BE8(s32);
extern s32 func_00134C00(s32, s32, s32, s32, s32, f32);
extern s32 func_001356E8(void *, s32);
extern s32 func_00155718(void *, void **, void *);
extern s32 func_001918C0(s32);
extern s32 func_00193B60(void);
extern s32 func_00196730(s32, s32);
extern s32 func_001968D0(s32, s32);
extern f32 func_001969A0(s32, s32);
extern s32 func_00196E10(void);
extern s32 D_0040E570[];
typedef struct { s32 unk10; } El;
void func_00136180(void *arg0) {
    s32 count = func_001918C0(func_00193B60());
    s32 i = 0;
    if (count != 0) {
        if (count > 0) {
            do {
                s32 a = func_001968D0(func_00196E10(), i);
                s32 b = func_00196730(func_00196E10(), i);
                f32 c = func_001969A0(func_00196E10(), i);
                s32 sp0 = func_00134BE8(D_002AD408(0x1C));
                func_00134C00(sp0, i, a, b, 0, c);
                i++;
            } while (i < count);
        }
        func_001356E8(arg0, 0);
        {
            s32 arrp = *(s32 *)((char *)arg0 + 0x24);
            s32 endp = *(s32 *)((char *)arg0 + 0x28);
            if ((endp - arrp) >> 2 != 0) {
                El **arr = (El **)arrp;
                s32 j = 0;
                do {
                    if (j < 4) { arr[j]->unk10 = D_0040E570[j]; }
                    else { arr[j]->unk10 = 0; }
                    j++;
                } while (j < 4);
            }
        }
        func_001356E8(arg0, 1);
    }
}
