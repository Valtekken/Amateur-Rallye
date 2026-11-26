typedef struct { s32 pad[6]; f32 key; } Item;
typedef struct { Item **begin; Item **end; } S;

void func_0023B980(void *unused, S *arg1) {
    s32 n = ((s32)arg1->end - (s32)arg1->begin) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            s32 j0 = i + 1;
            s32 j = j0;
            s32 best = i;
            f32 key = arg1->begin[i]->key;
            if (j < n) {
                do {
                    f32 k = arg1->begin[j]->key;
                    if (key < k) {
                        key = k;
                        best = j;
                    }
                    j++;
                } while (j < n);
            }
            if (best != i) {
                Item *tmp = arg1->begin[i];
                arg1->begin[i] = arg1->begin[best];
                arg1->begin[best] = tmp;
            }
            i = j0;
        } while (i < n);
    }
}
