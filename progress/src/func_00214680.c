typedef struct { u32 w[4]; } E16;
static inline s32 less(E16 *a, E16 *b){ return *(f32*)b > *(f32*)a; }
E16 *func_00214680(E16 *lo, E16 *hi, E16 *piv) {
    E16 p = *piv;
    E16 *pp = &p;
    E16 *i = lo;
    E16 *j = hi;
    E16 t;
    while (1) {
        j--;
        while (less(i, pp)) i++;
        while (less(pp, j)) j--;
        if ((u32)i >= (u32)j) break;
        t = *i;
        *i = *j;
        *j = t;
        i++;
    }
    return i;
}
