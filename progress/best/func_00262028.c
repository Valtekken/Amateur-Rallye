typedef struct { void *p; char pad[12]; } Holder;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern s32 func_00152DC8(void *), func_00152E30(void *), func_00152E98(void *);
extern s32 func_00262B00(s32, s32), func_00262D58(s32, s32);
extern void *func_002B1FC0(s32), *func_003D2910(s32);
extern s32 func_002B2028(void *);

void func_00262028(void *arg0) {
    Holder h[6];
    void *t2, *t2_2, *t4, *t2_3, *t2_4, *t16, *t16_2;
    s32 t18, t18_2;
    *(s32 *)((char *)arg0 + 0x44) = 1;
    h[1].p = M2C_FIELD(arg0, void **, 4);
    h[0].p = *(void **)h[1].p;
    if (h[0].p != h[1].p) {
        do {
            t18 = M2C_FIELD(h[0].p, s32 *, 8);
            h[3].p = M2C_FIELD(arg0, void **, 8);
            t4 = func_002B1FC0(0xC);
            t2 = (char *)t4 + 8;
            if (t4 == NULL) { t4 = func_003D2910(0xC); t2 = (char *)t4 + 8; }
            if (t2 != NULL) M2C_FIELD(t4, s32 *, 8) = M2C_FIELD(h[0].p, s32 *, 8);
            M2C_FIELD(t4, void **, 0) = h[3].p;
            M2C_FIELD(t4, void **, 4) = M2C_FIELD(h[3].p, void **, 4);
            *(void **)(M2C_FIELD(h[3].p, void **, 4)) = t4;
            M2C_FIELD(h[3].p, void **, 4) = t4;
            h[2].p = h[0].p;
            t16 = M2C_FIELD(h[0].p, void **, 0);
            t2_3 = M2C_FIELD(h[0].p, void **, 4);
            *(void **)t2_3 = t16;
            M2C_FIELD(t16, void **, 4) = t2_3;
            func_002B2028(h[2].p);
            h[0].p = t16;
            h[1].p = t16;
            if (t18) func_00262D58(t18, 3);
            t2_2 = M2C_FIELD(arg0, void **, 4);
            h[1].p = t2_2;
        } while (h[0].p != t2_2);
    }
    t2_3 = M2C_FIELD(arg0, void **, 0xC);
    h[1].p = *(void **)t2_3;
    h[2].p = t2_3;
    if (h[1].p != t2_3) {
        do {
            t18_2 = M2C_FIELD(h[1].p, s32 *, 8);
            h[5].p = M2C_FIELD(arg0, void **, 0x10);
            t4 = func_002B1FC0(0xC);
            t2 = (char *)t4 + 8;
            if (t4 == NULL) { t4 = func_003D2910(0xC); t2 = (char *)t4 + 8; }
            if (t2 != NULL) M2C_FIELD(t4, s32 *, 8) = M2C_FIELD(h[1].p, s32 *, 8);
            M2C_FIELD(t4, void **, 0) = h[5].p;
            M2C_FIELD(t4, void **, 4) = M2C_FIELD(h[5].p, void **, 4);
            *(void **)(M2C_FIELD(h[5].p, void **, 4)) = t4;
            M2C_FIELD(h[5].p, void **, 4) = t4;
            h[4].p = t4;
            h[3].p = h[1].p;
            t16_2 = M2C_FIELD(h[1].p, void **, 0);
            t2_4 = M2C_FIELD(h[1].p, void **, 4);
            *(void **)t2_4 = t16_2;
            M2C_FIELD(t16_2, void **, 4) = t2_4;
            func_002B2028(h[3].p);
            h[1].p = t16_2;
            h[2].p = t16_2;
            if (t18_2) func_00262B00(t18_2, 3);
            t2_4 = M2C_FIELD(arg0, void **, 0xC);
            h[2].p = t2_4;
        } while (h[1].p != t2_4);
    }
    func_00152E30((char *)arg0 + 4);
    func_00152E98((char *)arg0 + 0xC);
    func_00152DC8(arg0);
    *(s32 *)((char *)arg0 + 0x44) = 0;
    *(s32 *)((char *)arg0 + 0x48) = 1;
}
