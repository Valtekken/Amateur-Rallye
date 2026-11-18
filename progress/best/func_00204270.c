extern void func_002027E8(void *);
extern float func_003F2F50(float);
extern float func_003F3140(float);
extern void *D_002AD408(int);
extern int D_00426570;

void *func_00204078(void *arg0) {
    func_002027E8(arg0);
    {
        int *p = (int *)((char *)arg0 + 0xC);
        p[0] = 0;
        p[2] = 0;
        p[1] = 0;
    }
    return arg0;
}

typedef struct Vec04270 {
    char *base;
    char *end;
} Vec04270;

int func_00204270(Vec04270 *arg0, int arg1) {
    char *base = arg0->base;
    int count = (arg0->end - base);
    /* /12 via *0xAAAAAAAB >> 2 */
    count = (int)((unsigned int)count * 0xAAAAAAABu) >> 2;
    int idx = arg1;
    if (arg1 < count) {
        int i = arg1;
        float maxv = 0.0f;
        char *p = base + i * 12;
        do {
            float v = *(float *)(*(int *)p + arg1 * 4);
            if (v < 0.0f) v = -v;
            if (maxv < v) {
                maxv = v;
                idx = i;
            }
            i++;
            p += 12;
        } while (i < count);
    }
    return idx;
}

void *func_00205BB0(void) {
    if (!D_00426570) {
        void *p = D_002AD408(0xC);
        D_00426570 = (int)p;
        ((int *)p)[0] = 0;
        ((int *)p)[1] = 0;
        ((int *)p)[2] = 0;
    }
    return (void *)D_00426570;
}

void func_00203F08(void *arg0, float arg1) {
    float c = func_003F2F50(arg1);
    float s = func_003F3140(arg1);
    ((float *)arg0)[0] = c;
    ((float *)arg0)[4] = c;
    ((float *)arg0)[3] = -s;
    ((float *)arg0)[1] = s;
    ((float *)arg0)[8] = 1.0f;
    ((int *)arg0)[2] = 0;
    ((int *)arg0)[5] = 0;
    ((int *)arg0)[6] = 0;
    ((int *)arg0)[7] = 0;
}
