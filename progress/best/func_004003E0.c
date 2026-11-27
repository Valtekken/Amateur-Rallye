extern void *func_003FFA18(s32, u32);
extern s32 func_00400378(void *, void *);

struct BigNum {
    u32 f0;
    u32 f4;
    u32 f8;
    s32 fC;
    s32 count;
    u32 digits[1];
};

void *func_004003E0(s32 arg0, void *arg1, void *arg2) {
    struct BigNum *a = (struct BigNum *)arg1;
    struct BigNum *b = (struct BigNum *)arg2;
    struct BigNum *r;
    s32 cmp;
    struct BigNum *larger;
    struct BigNum *smaller;
    u32 *la;
    u32 *lb;
    u32 *la_end;
    u32 *lb_end;
    u32 *rd;
    s32 borrow;
    s32 cnt;
    u32 *p;

    cmp = func_00400378(a, b);
    if (cmp == 0) {
        r = (struct BigNum *)func_003FFA18(arg0, (u32)0);
        r->digits[0] = 0;
        r->count = 1;
        return r;
    }
    if (cmp >= 0) {
        larger = a;
        smaller = b;
        cmp = cmp;
    } else {
        larger = b;
        smaller = a;
        cmp = 1;
    }
    r = (struct BigNum *)func_003FFA18(arg0, larger->f4);
    r->fC = cmp;

    la = larger->digits;
    lb = smaller->digits;
    la_end = la + larger->count;
    lb_end = lb + smaller->count;
    rd = r->digits;
    borrow = 0;

    do {
        u32 va = *la++;
        u32 vb = *lb++;
        s32 lo = (s32)(va & 0xFFFF) - (s32)(vb & 0xFFFF) + borrow;
        borrow = lo >> 16;
        s32 hi = (s32)(va >> 16) - (s32)(vb >> 16) + borrow;
        borrow = hi >> 16;
        *(u16 *)rd = (u16)lo;
        *(u16 *)((char *)rd + 2) = (u16)hi;
        rd++;
    } while (lb < lb_end);

    rd++;
    if (la < la_end) {
        rd--;
        do {
            u32 va = *la++;
            s32 lo = (s32)(va & 0xFFFF) + borrow;
            borrow = lo >> 16;
            s32 hi = (s32)(va >> 16) + borrow;
            borrow = hi >> 16;
            *(u16 *)rd = (u16)lo;
            *(u16 *)((char *)rd + 2) = (u16)hi;
            rd++;
        } while (la < la_end);
        rd--;
    }

    p = rd;
    cnt = larger->count;
    if (*p == 0) {
        r->count = cnt;
        do {
            cnt--;
            p--;
        } while (*p == 0);
        r->count = cnt;
    }

    return r;
}
