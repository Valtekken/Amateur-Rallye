extern void *func_00152D28(s32, void *);
extern s64 *func_00152F00(void *, void *, u64 *, s32);
extern void *func_002B1FC0(s32);
extern void func_002B2028(void *);
extern s32 func_002DEEE8(void *, s32, s32 *);
extern void *func_003D2910(s32);
extern u32 D_0040E618[];
extern s64 D_00483F78[];

typedef struct Node {
    struct Node *next;
    s32 key;
} Node;

typedef struct Tbl {
    s32 unk00;
    s32 begin;
    s32 end;
    s32 cap;
} Tbl;

void func_002DFA58(Tbl *arg0, u32 arg1) {
    s32 sp[11];

    s32 temp_20 = (arg0->end - arg0->begin) >> 2;
    if ((u32)temp_20 < arg1) {
        s64 *base = D_00483F78;
        void *temp_16 = (char *)base + 0xE0;
        *(u64 *)&sp[8] = arg1;
        s64 *temp_2 = func_00152F00(base, temp_16, (u64 *)&sp[8], 0);
        s32 var_2;
        if (temp_2 != temp_16) {
            var_2 = (s32)*temp_2;
        } else {
            var_2 = (s32)D_00483F78[27];
        }
        s32 temp_16_2 = var_2;
        if ((u32)temp_20 < (u32)temp_16_2) {
            sp[10] = 0;
            sp[0] = 0;
            sp[1] = 0;
            sp[2] = 0;
            s32 var_18;
            void *var_3;
            if (temp_16_2 != 0) {
                var_18 = temp_16_2 * 4;
                if (var_18 != 0) {
                    var_3 = func_002B1FC0(var_18);
                    if (var_3 == NULL) {
                        var_3 = func_003D2910(var_18);
                    }
                } else {
                    void *head = (void *)(s32)D_0040E618[-1];
                    if (head != NULL) {
                        var_3 = head;
                        D_0040E618[-1] = *(u32 *)head;
                    } else {
                        var_3 = func_00152D28(0, D_0040E618);
                    }
                }
            } else {
                var_3 = NULL;
                var_18 = 0;
            }
            sp[0] = (s32)var_3;
            sp[1] = (s32)var_3;
            sp[2] = (s32)var_3 + var_18;
            sp[1] = func_002DEEE8(var_3, temp_16_2, &sp[10]);

            s32 i = 0;
            if (temp_20 != 0) {
                do {
                    s32 off = i << 2;
                    Node *node = ((Node **)(arg0->begin))[i];
                    if (node != NULL) {
                        s32 key = node->key;
                        do {
                            u32 mod = (u32)key % (u32)temp_16_2;
                            ((Node **)(arg0->begin))[i] = node->next;
                            node->next = ((Node **)(sp[0]))[mod];
                            ((Node **)(sp[0]))[mod] = node;
                            node = ((Node **)(arg0->begin))[i];
                            if (node != NULL) {
                                key = node->key;
                            }
                        } while (node != NULL);
                    }
                    i++;
                } while ((u32)i < (u32)temp_20);
            }

            s32 old_begin = arg0->begin;
            s32 old_cap = arg0->cap;
            s32 old_end = arg0->end;
            s32 old_capacity_count = (old_cap - old_begin) >> 2;
            arg0->begin = sp[0];
            arg0->cap = sp[2];
            arg0->end = sp[1];
            sp[1] = old_end;
            sp[0] = old_begin;
            sp[2] = old_cap;
            if (old_capacity_count != 0) {
                if (old_capacity_count * 4 != 0) {
                    func_002B2028((void *)old_begin);
                } else {
                    ((s32 *)old_begin)[0] = (s32)D_0040E618[-1];
                    D_0040E618[-1] = (u32)old_begin;
                }
            }
        }
    }
}
