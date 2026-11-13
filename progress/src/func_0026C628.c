s32 func_0026C628(s8 *s1, s8 *e1, s8 *s2, s8 *e2) {
    s8 c1, c2;
    while (s1 != e1 && s2 != e2) {
        c1 = *s1;
        c2 = *s2;
        if (c1 < c2) return -1;
        if (c2 < c1) return 1;
        s1++;
        s2++;
    }
    if (s2 == e2)
        return s1 != e1;
    return -1;
}
