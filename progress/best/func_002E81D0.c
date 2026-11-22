typedef struct VecElem {
    f32 x, y, z, w;
    s32 unk_10;
} VecElem;

typedef struct Vec {
    VecElem *begin;
    VecElem *end;
    VecElem *cap;
} Vec;

extern u32 D_0040E618[];

extern void *func_002B1FC0(s32 size);
extern void *func_003D2910(s32 size);
extern void func_002B2028(void *ptr);
extern void *func_00152D28(void *a0, void *a1);
extern void *func_00272EA0(void *dst, void *src, void *a2, s32 a3);

void func_002E81D0(Vec *arg0, VecElem *arg1, VecElem *arg2) {
    Vec *s18 = arg0;
    VecElem *s19 = arg1;
    VecElem *s17 = arg2;
    VecElem *s16;
    s32 s20;
    VecElem sp_data;
    VecElem *end = s18->end;
    VecElem *cap = s18->cap;
    VecElem *begin = s18->begin;
    VecElem *prev;
    VecElem *dst;
    s32 count;
    s32 alloc_size;
    void *alloc_ptr;
    VecElem *new_end;
    VecElem *temp;

    if (end != cap) {
        prev = end - 1;
        if (end != NULL) {
            end->x = prev->x;
            end->y = prev->y;
            end->z = prev->z;
            end->w = prev->w;
            end->unk_10 = prev->unk_10;
            s18->end = end + 1;
            s18->end->x = 0;
            s18->end->y = 0;
            s18->end->z = 0;
            s18->end->w = 0;
            s18->end->unk_10 = 0;
        }
        dst = s18->end;
        s18->end = end + 1;
        count = (s32)(prev - s19) * (s32)0xCCCCCCCD >> 2;
        sp_data = *s17;
        if (count > 0) {
            do {
                prev--;
                dst--;
                dst->x = prev->x;
                dst->y = prev->y;
                dst->z = prev->z;
                dst->w = prev->w;
                dst->unk_10 = prev->unk_10;
                count--;
            } while (count > 0);
        }
        *s19 = sp_data;
        return;
    }
    s20 = (s32)(end - begin) * (s32)0xCCCCCCCD >> 2;
    if (s20 == 0) {
        s20 = 1;
    }
    alloc_size = s20 * 0x14;
    if (alloc_size != 0) {
        alloc_ptr = func_002B1FC0(alloc_size);
        if (alloc_ptr == NULL) {
            alloc_ptr = func_003D2910(alloc_size);
        }
    } else {
        if (D_0040E618[-1] != 0) {
            alloc_ptr = (void *)D_0040E618[-1];
            D_0040E618[-1] = *(u32 *)alloc_ptr;
        } else {
            alloc_ptr = func_00152D28(NULL, (void *)&D_0040E618[-1]);
        }
    }
    s16 = (VecElem *)alloc_ptr;
    new_end = func_00272EA0(begin, s19, s16, 0);
    if (new_end != NULL) {
        new_end->x = 0;
        new_end->y = 0;
        new_end->z = 0;
        new_end->w = 0;
        new_end->unk_10 = 0;
        new_end->x = s17->x;
        new_end->y = s17->y;
        new_end->z = s17->z;
        new_end->w = s17->w;
        new_end->unk_10 = s17->unk_10;
    }
    temp = func_00272EA0(s19, end, new_end + 1, 0);
    dst = begin;
    if ((u32)dst < (u32)end) {
        do {
            dst++;
        } while ((u32)dst < (u32)end);
    }
    count = (s32)(cap - begin) * (s32)0xCCCCCCCD >> 2;
    if (count != 0) {
        if (count * 0x14 != 0) {
            func_002B2028(begin);
        } else {
            *(u32 *)begin = D_0040E618[-1];
            D_0040E618[-1] = (u32)begin;
        }
    }
    s18->end = temp;
    s18->begin = s16;
    s18->cap = s16 + s20;
}
