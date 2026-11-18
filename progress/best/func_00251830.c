typedef struct A {
    u8 pad[0x18];
    struct { u8 pad[0x30]; s32 f30; } *f18;
    struct { u8 pad[0x30]; s32 f30; } *f1C;
} A;

typedef struct B {
    A **fC;
    A **f10;
} B;

s32 func_00254558(B *arg1) {
    A **start = arg1->fC;
    A **end = arg1->f10;
    s32 cnt = (end - start) >> 2;
    s32 i = 0;
    if (cnt <= 0) return 1;
    do {
        A *a = start[i];
        if (a->f18->f30 == 0) {
            if (a->f1C->f30 == 0) {
                i++;
                if (i >= cnt) return 1;
                continue;
            }
        }
        if (a->f18->f30 != 0) {
            return 0;
        }
        if (a->f1C->f30 != 0) {
            return 0;
        }
        i++;
        if (i >= cnt) return 1;
    } while (1);
}

s32 func_00251830(void ***arg0) {
    void **temp2 = *arg0;
    s32 var7 = 0;
    void *var4 = *temp2;
    s32 var5 = 0;
    void *temp2p = temp2;
    if (var4 != temp2p) {
        do {
            s32 t = *(s32*)(((char*)*(void**)((char*)var4 + 8)) + 4);
            if (t == 1) {
                var7 += 1;
            } else {
                s32 nor = ~t;
                if (nor == 0) var5 = var5 + 1;
                else var5 = var5;
            }
            if (var7 == 0) {
                var4 = *(void**)var4;
                if (var4 == temp2p) return 0;
            } else {
                if (var5 == 0) {
                    var4 = *(void**)var4;
                    if (var4 == temp2p) return 0;
                } else {
                    return 1;
                }
            }
        } while (1);
    }
    return 0;
}

extern f32 func_00205988(s32, s32, s32);

void func_00251408(void *arg0) {
    *(f32*)((char*)arg0 + 0x28) = 0.0f;
    void **temp2 = *(void***)arg0;  /* arg0->0 */
    /* temp2 is list head; var2 = temp2->0? Actually assembly: temp_2 = *arg0; temp_4 = *temp_2; temp_18 = temp_2->4->8 */
    /* Let me redo carefully */
}

s32 func_002503D0(void *arg0, s32 arg1) {
    void **temp2 = *(void***)((char*)arg0 + 4);
    void *var3 = *temp2;
    if (var3 != (void*)temp2) {
        do {
            if (*(s32*)((char*)var3 + 8) != arg1) {
                var3 = *(void**)var3;
                if (var3 == (void*)temp2) return 0;
            } else {
                return 1;
            }
        } while (1);
    }
    return 0;
}
