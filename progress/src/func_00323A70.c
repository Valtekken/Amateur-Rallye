/* identical to func_0033AB80 (matched), with its names changed by decompdecomp */
typedef void (*Handler)(void);
extern Handler D_00437E58;
extern char D_00439570[], D_004852C8[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *,void *);
extern void func_003D4F40(void *);

void func_00323A70(int p) {
    void (*raise_error)(void *)=func_003D4F40;
    Handler h;
    do {
        h=D_00437E58;
        if(!h) {
            char *msg=D_004852C8;
            raise_error(func_003D4938(D_00439570,msg));
            h=func_002ABA80(1);
        }
        h();
    } while(!func_002B1FC0(p));
}

void *func_0033AB28(void *arg0, void *arg1, u64 *arg2) {
    void *var_4 = arg0;
    s32 var_7 = (s32)((char*)arg1 - (char*)var_4) >> 3;
    s32 var_5;
    u64 *temp_3;
    while (var_7 > 0) {
        var_5 = var_7 >> 1;
        temp_3 = (u64*)((char*)var_4 + var_5 * 8);
        if (*temp_3 < *arg2) {
            var_4 = (void*)((char*)temp_3 + 8);
            var_7 = (var_7 - var_5) - 1;
        } else {
            var_7 = var_5;
        }
    }
    return var_4;
}

extern s32 func_001577C8(void *, void *, s32);

void func_00337638(void *arg0, s32 arg1, s32 arg3) {
    void *var_3, *var_5, *temp_6, *temp_5, *temp_2;
    s32 var_7;
    temp_6 = 0;
    var_3 = *(void**)arg0;
    var_5 = (void*)arg1;
    var_7 = (s32)((char*)*(void**)((char*)arg0 + 4) - (char*)var_3) >> 2;
    if (var_7 != 0) {
        while (1) {
            if (*(void**)var_3 == var_5) goto done;
            temp_6 = (void*)((s32)temp_6 + 1);
            if ((u32)temp_6 < (u32)var_7) {
                var_3 = (void*)((char*)var_3 + 4);
                continue;
            }
            break;
        }
    }
done:
    temp_5 = *(void**)((char*)arg0 + 4);
    temp_2 = *(void**)((char*)arg0 + 8);
    if (temp_5 != temp_2) {
        if (temp_5) {
            *(void**)(s32)var_5 = temp_5;
        }
        *(void**)((char*)arg0 + 4) = (void*)((char*)temp_5 + 4);
    } else {
        func_001577C8(arg0, (void*)((s32)arg0 + 4), 0);
    }
}

extern s32 D_002AD408(int);
extern s32 func_0034E698(int, void *);
extern s32 func_00357E70(int, f32, f32, s32);
extern s32 func_003581E8(int, int);
extern s32 D_0042DD2C;

void func_003375A0(void *arg0, void *arg1) {
    void *temp_2, *temp_16;
    s32 temp_17;
    temp_2 = *(void**)((char*)arg1 + 0x2C);
    if (temp_2 != 0) {
        if (D_0042DD2C == 0) {
            D_0042DD2C = func_0034E698(D_002AD408(0x106C), arg1);
        }
        temp_17 = D_0042DD2C;
        temp_16 = *(void**)((char*)arg0 + 0x404);
        func_00357E70(temp_17, *(f32*)((char*)temp_2 + 0xC0), *(f32*)((char*)temp_2 + 0xC8), 0x42700000);
        func_003581E8(temp_17, temp_16);
    }
}
