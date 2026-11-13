extern void *func_00152D28(s32, void *);
extern void *func_00155D80(void *, void *, void *, s32);
extern void *func_002B1FC0(s32);
extern void func_002B2028(void *);
extern void *func_003D2910(s32);
extern u32 D_0040E618[];

typedef struct V { s32 *begin; s32 *end; s32 *cap; } V;

void func_00155DB0(V *arg0, s32 *arg1, s32 *arg2) {
    s32 *sp0;
    s32 val;
    s32 *begin;
    s32 *end;
    s32 *cap;
    s32 *cur;
    s32 *src;
    s32 count;
    s32 tmp;
    s32 old_count;
    s32 new_cap_count;
    s32 var_18;
    s32 *var_17;
    void *t;
    s32 *temp_2_4;
    s32 *temp_19;
    s32 *p;
    s32 old_cap_count;
    void *head;

    begin = arg0->begin;
    end = arg0->end;
    cap = arg0->cap;

    if (end != cap) {
        if (end != 0) {
            *end = *(end - 1);
        }
        cur = end;
        src = end - 1;
        arg0->end = end + 1;
        count = (s32)(src - arg1);
        val = *arg2;
        sp0 = (s32 *)val;
        if (count > 0) {
            do {
                src = src - 1;
                cur = cur - 1;
                tmp = *src;
                count = count - 1;
                *cur = tmp;
            } while (count > 0);
        }
        *arg1 = (s32)sp0;
        return;
    }

    old_count = (s32)(end - begin);
    new_cap_count = (old_count != 0) ? (old_count * 2) : 1;
    var_18 = new_cap_count * 4;
    if (new_cap_count != 0) {
        if (var_18 != 0) {
            var_17 = func_002B1FC0(var_18);
            if (var_17 == 0) {
                var_17 = func_003D2910(var_18);
            }
        } else {
            head = (void *)(s32)D_0040E618[-1];
            if (head != 0) {
                var_17 = head;
                D_0040E618[-1] = *(u32 *)head;
            } else {
                var_17 = func_00152D28(0, D_0040E618);
            }
        }
    } else {
        var_17 = 0;
        var_18 = 0;
    }

    t = func_00155D80(begin, arg1, var_17, 0);
    temp_2_4 = t;
    if (temp_2_4 != 0) {
        *temp_2_4 = *arg2;
    }
    temp_19 = func_00155D80(arg1, end, (void *)((char *)temp_2_4 + 4), 0);

    p = begin + 1;
    while (p < end) {
        p = p + 1;
    }

    if (end != begin) {
        old_cap_count = (s32)(cap - begin);
        if (old_cap_count != 0) {
            if (old_cap_count * 4 != 0) {
                func_002B2028(begin);
            } else {
                *begin = (s32)D_0040E618[-1];
                D_0040E618[-1] = (u32)begin;
            }
        }
    }

    arg0->end = temp_19;
    arg0->cap = (s32 *)((char *)var_17 + var_18);
    arg0->begin = var_17;
}
