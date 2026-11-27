struct S_arg3 { s32 unk_00; u8 pad_04[0xC]; s32 unk_10; };
struct S_node {
    struct S_node *unk_00;
    struct S_node *unk_04;
    struct S_node *unk_08;
    struct S_node *unk_0C;
    s32 unk_10;
};
struct S_arg1 { struct S_node *unk_00; s32 unk_04; };
struct Slot { struct S_node *p; int pad[3]; };

extern struct S_node **func_002126C8(struct S_node **, struct S_arg1 *, void *, struct S_arg3 *);
extern struct S_node **func_00212A48(struct S_node **, struct S_arg1 *, struct S_arg3 *, struct S_arg3 *);

struct S_node **func_00212BA0(struct S_node **arg0, struct S_arg1 *arg1, struct S_node **arg2, struct S_arg3 *arg3) {
    struct Slot l0, l10;
    struct S_node *t3, *t6, *t7;
    s32 var3_2;

    t3 = arg1->unk_00;
    t6 = *arg2;
    if (t6 == t3->unk_08) {
        if (arg1->unk_04 == 0 || (u32)arg3->unk_00 >= (u32)arg3->unk_10) {
            func_00212A48(&l0.p, arg1, arg3, arg3);
            *arg0 = l0.p;
        } else {
            func_002126C8(arg0, arg1, arg3, arg3);
        }
        return arg0;
    }
    if (t6 == t3) {
        l0.p = t6;
        t7 = t6->unk_0C;
        if ((u32)t7->unk_10 < (u32)arg3->unk_00) {
            func_002126C8(arg0, arg1, 0, t7);
        } else {
            func_00212A48(&l0.p, arg1, arg3, arg3);
            *arg0 = l0.p;
        }
        return arg0;
    }
    l0.p = t6;
    if (t6->unk_00 == 0) {
        if (t6->unk_04->unk_04 == t6) {
            l0.p = t6->unk_04->unk_04->unk_0C;
        }
    }
    t7 = l0.p;
    if (t7->unk_08 != 0) {
        if (t7->unk_08->unk_0C != 0) {
            struct S_node *var3 = t7->unk_08->unk_0C;
            while (var3->unk_0C != 0) {
                var3 = var3->unk_0C;
            }
            l0.p = var3->unk_0C;
        } else {
            l0.p = t7->unk_08;
        }
    } else {
        if (t7 == t7->unk_04->unk_08) {
            l0.p = t7->unk_04;
        }
        while (l0.p == l0.p->unk_04->unk_08) {
            l0.p = l0.p->unk_04;
        }
    }
    t7 = l0.p;
    var3_2 = 0;
    if ((u32)t7->unk_10 < (u32)arg3->unk_00) {
        var3_2 = ((u32)arg3->unk_00 < (u32)(*arg2)->unk_10);
    }
    if (var3_2 != 0) {
        if (t7->unk_0C != 0) {
            func_002126C8(arg0, arg1, *arg2, *arg2);
        } else {
            func_002126C8(arg0, arg1, 0, &l0.p);
        }
        return arg0;
    }
    func_00212A48(&l10.p, arg1, arg3, arg3);
    *arg0 = l10.p;
    return arg0;
}
