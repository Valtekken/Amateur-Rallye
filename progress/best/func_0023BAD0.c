extern f32 fabsf(f32);

typedef struct { u8 pad[0xD4]; f32 key; } Item;
typedef struct { Item **begin; Item **end; } V;

void func_0023BAD0(void *arg0, V *v) {
    s32 n = ((s32)v->end - (s32)v->begin) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            Item **base = v->begin;
            s32 ioff = i << 2;
            s32 j = i + 1;
            s32 best = i;
            f32 max = fabsf((*(Item **)((u8 *)base + ioff))->key);
            if (j < n) {
                Item **p = (Item **)((u8 *)base + (j << 2));
                do {
                    f32 val = fabsf((*p)->key);
                    if (max < val) {
                        max = val;
                        best = j;
                    }
                    j++;
                    p = (Item **)((u8 *)p + 4);
                } while (j < n);
            }
            if (best != i) {
                Item *tmp = *(Item **)((u8 *)base + ioff);
                *(Item **)((u8 *)base + ioff) = *(Item **)((u8 *)base + (best << 2));
                *(Item **)((u8 *)v->begin + (best << 2)) = tmp;
            }
            i++;
        } while (i < n);
    }
}
