#include "context.h"

extern u8 D_0044E478[];
extern u32 D_0040E618[];

extern void *func_00152F00(void *start, void *end, u64 *key, int flags);
extern void *func_00152F58(void *array, s32 count, s32 *out);
extern void *func_002B1FC0(s32 size);
extern void *func_003D2910(s32 size);
extern void *func_00152D28(void *a, void *list);
extern void func_002B2028(void *a, void *b, void *c, void *d);

struct UnkStruct {
    s32 unk0;
    u8 unk1;
    s8 unk2;
    s8 unk3;
    void *unk4;
    void *unk8;
    void *unkC;
};

struct Node {
    void *unk0;
    u16 unk4;
};

void func_00152F88(void *arg0, u32 arg1) {
    struct UnkStruct *a = (struct UnkStruct *)arg0;
    s32 n = (s32)(((u32)a->unk8 - (u32)a->unk4) >> 2);
    if ((u32)n < (u32)arg1) {
        u64 sp20 = (u64)arg1;
        void *temp_2 = func_00152F00((void *)D_0044E478, (void *)(D_0044E478 + 0xE0), &sp20, 0);
        s32 var_2;
        if (temp_2 != (void *)(D_0044E478 + 0xE0)) {
            var_2 = *(s32 *)temp_2;
        } else {
            var_2 = *(s32 *)(D_0044E478 + 0xD8);
        }
        if ((u32)n < (u32)var_2) {
            s32 sp28 = 0;
            s32 var_18 = var_2 * 4;
            void **new_array;
            if (var_18 != 0) {
                new_array = (void **)func_002B1FC0(var_18);
                if (new_array == NULL) {
                    new_array = (void **)func_003D2910(var_18);
                }
            } else if (D_0040E618[-1] != 0) {
                new_array = (void **)(u32)D_0040E618[-1];
                D_0040E618[-1] = *(u32 *)new_array;
            } else {
                new_array = (void **)func_00152D28(0, D_0040E618);
            }
            void *f58_result = func_00152F58(new_array, var_2, &sp28);

            if (n != 0) {
                s32 i = 0;
                void **start = (void **)a->unk4;
                do {
                    void *element = start[i];
                    if (element != NULL) {
                        u16 key = ((struct Node *)element)->unk4;
                        do {
                            void *next = *(void **)element;
                            start[i] = next;
                            s32 rem = key % var_2;
                            ((struct Node *)element)->unk0 = new_array[rem];
                            new_array[rem] = element;
                            element = start[i];
                            if (element != NULL) {
                                key = ((struct Node *)element)->unk4;
                            }
                        } while (element != NULL);
                    }
                    i++;
                } while (i < n);
            }

            void *old_start = a->unk4;
            void *old_end = a->unk8;
            void *old_unkC = a->unkC;
            a->unk4 = new_array;
            a->unk8 = f58_result;
            a->unkC = f58_result;

            s32 old_n = (s32)(((u32)old_unkC - (u32)old_start) >> 2);
            if (old_n != 0) {
                if ((old_n * 4) != 0) {
                    func_002B2028(old_start, new_array, old_end, old_unkC);
                } else {
                    *(u32 *)old_start = D_0040E618[-1];
                    D_0040E618[-1] = (u32)old_start;
                }
            }
        }
    }
}
