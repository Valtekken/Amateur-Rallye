typedef struct S_func_00272D30_arg2_0 {
    struct S_func_00272D30_arg2_0 *next;
    struct S_func_00272D30_arg2_0 *prev;
} S_func_00272D30_arg2_0;

typedef struct S_func_00272D30_arg2 {
    S_func_00272D30_arg2_0 *head;
} S_func_00272D30_arg2;

typedef struct S_func_002731D0_arg0_4 {
    s32 unk_00;
} S_func_002731D0_arg0_4;

typedef struct S_func_002731D0_arg0 {
    s32 unk_00;
    S_func_002731D0_arg0_4 *unk_04;
    s32 unk_08;
} S_func_002731D0_arg0;

typedef struct S_D_0040E618 {
    void *unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
} S_D_0040E618;

extern void func_00152D28(void *);
extern void func_002B1FC0(s32);
extern void func_002B2028(void *);
extern void func_003D2910(s32);
extern void func_003F93CC(void *, void *, s32);

extern S_D_0040E618 D_0040E618;

void func_002731D0(S_func_002731D0_arg0 *arg0, S_func_00272D30_arg2 *arg1, S_func_00272D30_arg2_0 **arg2) {
    S_func_00272D30_arg2_0 *p17 = arg1->head;
    S_func_00272D30_arg2_0 *p18 = arg2[0];
    S_func_002731D0_arg0_4 *p4 = arg0->unk_04;

    if (p17 != p18) {
        if (p4 != NULL) {
            p4->unk_00 = (s32)((char*)p4 - 4);
        }
        
        S_func_00272D30_arg2_0 *p2 = p17;
        S_func_00272D30_arg2_0 *p3 = p2->next;
        
        p2->prev->next = p3;
        p3->prev = p2->prev;
        func_002B2028(p2);
        p17 = p3;
    }
    arg0->unk_00 = (s32)arg2[0];
}
