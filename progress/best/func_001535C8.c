extern void func_001D2488(s32 *, s32);
extern void func_001D2CD8(s32 *, s32);
extern s32 *func_00153568(s32 *, s32 *, s32 *, s32);
extern void *func_002B1FC0(void *, s32);
extern void *func_003D2910(s32);
extern void *func_00152D28(s32);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];

typedef struct { void *unk0; void *unk4; void *unk8; } Vec;

void func_001535C8(Vec *arg0, void *arg1, s32 arg2) {
    s32 tmp;
    s32 count;
    s32 var_20;
    s32 temp_2_3;
    void *var_19;
    s32 count2;
    void *p;
    void *q;
    s32 v;
    u32 head;

    if (arg0->unk4 != arg0->unk8) {
        if (arg0->unk4 != 0) {
            func_001D2488((s32 *)arg0->unk4, (s32)arg0->unk4 - 4);
        }
        func_001D2488(&tmp, arg2);
        arg0->unk4 = (void *)((s32)arg0->unk4 + 4);
        count = ((s32)arg0->unk4 - 8 - (s32)arg1) >> 2;
        if (count > 0) {
            p = (void *)((s32)arg0->unk4 - 4);
            q = (void *)((s32)arg0->unk4 - 12);
            do {
                p = (void *)((s32)p - 4);
                func_001D2CD8((s32 *)p, *(s32 *)q);
                count -= 1;
                q = (void *)((s32)q - 4);
            } while (count > 0);
        }
        func_001D2CD8((s32 *)arg1, tmp);
        D_002AD390(arg1);
        return;
    }

    count = ((s32)arg0->unk4 - (s32)arg0->unk0) >> 2;
    var_20 = 0;
    var_19 = NULL;
    {
        s32 newcap = (count != 0) ? count * 2 : 1;
        if (newcap != 0) {
            var_20 = newcap * 4;
            if (var_20 != 0) {
                var_19 = func_002B1FC0(arg0->unk4, newcap);
                if (var_19 == NULL) {
                    var_19 = func_003D2910(var_20);
                }
            } else {
                head = D_0040E618[-1];
                if (head != 0) {
                    var_19 = (void *)head;
                } else {
                    var_19 = func_00152D28(0);
                }
            }
        }
    }

    temp_2_3 = (s32)func_00153568((s32 *)arg0->unk0, (s32 *)arg1, (s32 *)var_19, 0);
    if (temp_2_3 != 0) {
        func_001D2488((s32 *)temp_2_3, arg2);
    }
    temp_2_3 = (s32)((s32)temp_2_3 + 4);

    p = arg0->unk0;
    if ((u32)p < (u32)arg0->unk4) {
        v = *(s32 *)p;
        do {
            D_002AD390(v);
            p = (void *)((s32)p + 4);
            v = *(s32 *)p;
        } while ((u32)p < (u32)arg0->unk4);
    }

    count2 = ((s32)arg0->unk8 - (s32)arg0->unk0) >> 2;
    if (count2 != 0) {
        if ((s32)(count2 * 4) != 0) {
            func_002B2028(arg0->unk0);
        } else {
            *(s32 *)arg0->unk0 = D_0040E618[-1];
            D_0040E618[-1] = (u32)arg0->unk0;
        }
    }

    arg0->unk4 = (void *)func_00153568((s32 *)arg1, (s32 *)arg0->unk4, (s32 *)temp_2_3, 0);
    arg0->unk8 = (void *)((s32)var_19 + var_20);
    arg0->unk0 = var_19;
}
