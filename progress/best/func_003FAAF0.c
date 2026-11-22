extern u8 D_0048BD29[];

static __inline__ s32 low(s32 c) {
    s32 r = c + 0x20;
    if (!(D_0048BD29[c] & 1)) r = c;
    return r;
}

s32 func_003FAAF0(s8 *arg0, s8 *arg1, s32 arg2) {
    s8 *p = arg0;
    s8 *q = arg1;
    s32 n = arg2;
    
    if (n == 0) return 0;
    
    n = n - 1;
    if (n != -1) {
        while (1) {
            s32 c = *p;
            s32 d = *q;
            s32 x = low(c);
            s32 y = low(d);
            
            if (x != y) break;
            if (n == 0) break;
            if (c == 0) break;
            if (*(u8*)p == 0) goto end;
            
            n = n - 1;
            p = p + 1;
            q = q + 1;
            if (n == -1) break;
        }
    }
    
end:
    return low(*(u8*)p) - low(*(u8*)q);
}
