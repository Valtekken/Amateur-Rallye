struct S_arg3 {
    s32 unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
};

struct S_node {
    struct S_node *unk_00;
    struct S_node *unk_04;
    struct S_node *unk_08;
    struct S_node *unk_0C;
    s32 unk_10;
};
struct S_arg1 {
    struct S_node *unk_00;
    s32 unk_04;
};

extern struct S_node **func_001ED900(struct S_node **, struct S_arg1 *, void *, struct S_arg3 *);
extern struct S_node **func_001EDC80(struct S_node **, struct S_arg1 *, struct S_arg3 *, struct S_arg3 *);

struct S_node **func_001EDDD8(struct S_node **arg0, struct S_arg1 *arg1, struct S_node **arg2, struct S_arg3 *arg3) {
    struct S_node *t3 = arg1->unk_00;
    struct S_node *t6 = *arg2;
    struct S_node *sp0;
    struct S_node *sp10;
    struct S_node *t7;
    s32 var3_2;
    volatile char pad[0x10];

    if (t6 == t3->unk_08) {
        if (arg1->unk_04 != 0 && (s32)arg3->unk_00 < (s32)arg3->unk_10) {
            func_001ED900(arg0, arg1, arg3, arg3);
            return arg0;
        }
        func_001EDC80(&sp0, arg1, arg3, arg3);
        *arg0 = sp0;
        return arg0;
    }

    // t6 != t3->unk_08
    if (t6 == t3) {
        sp0 = t6;
        t7 = t6->unk_0C;
        if ((s32)t7->unk_10 < (s32)arg3->unk_00) {
            func_001ED900(arg0, arg1, t6, arg3);
            return arg0;
        }
        func_001EDC80(&sp0, arg1, arg3, arg3);
        *arg0 = sp0;
        return arg0;
    }

    // t6 != t3->unk_08 AND t6 != t3
    sp0 = t6;
    if (t6->unk_00 == 0) {
        if (t6->unk_04->unk_04 == t6) {
            sp0 = t6->unk_04->unk_04->unk_0C;
        }
    }
    t7 = sp0;

    if (t7->unk_08 != 0) {
        if (t7->unk_08->unk_0C != 0) {
            struct S_node *var3 = t7->unk_08->unk_0C;
            while (var3->unk_0C != 0) {
                var3 = var3->unk_0C;
            }
            sp0 = var3->unk_0C;
        } else {
            sp0 = t7->unk_08;
        }
    } else {
        if (t7 == t7->unk_04->unk_08) {
            sp0 = t7->unk_04;
        }
        while (sp0 == sp0->unk_04->unk_08) {
            sp0 = sp0->unk_04;
        }
    }

    t7 = sp0;
    if ((s32)t7->unk_10 < (s32)arg3->unk_00) {
        var3_2 = ((s32)arg3->unk_00 < (s32)(*arg2)->unk_10);
    } else {
        var3_2 = 0;
    }

    if (var3_2 != 0) {
        if (t7->unk_0C != 0) {
            func_001ED900(arg0, arg1, arg3, arg3);
            return arg0;
        }
        func_001ED900(arg0, arg1, *arg2, arg3);
        return arg0;
    }

    func_001EDC80(&sp10, arg1, sp0, arg3);
    *arg0 = sp10;
    return arg0;
}
