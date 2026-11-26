typedef struct { f32 a,b,c,d; s32 e; } S20;
typedef struct { char pad[0x4C]; char *out; } A;
extern S20 D_00426508;
extern void func_003B7278(s32, S20 *, s32);
void func_003B6E10(s32 arg0, A *arg1, s32 n, s32 arg3) {
    S20 s; s32 j, off, neg1; f32 t0,t4,t8;
    if (n > 0) {
        j = n; neg1 = -1; off = 0;
        do {
            t0 = D_00426508.a;
            t4 = D_00426508.b;
            t8 = D_00426508.c;
            s.c = t8;
            s.a = t0;
            s.b = t4;
            s.d = 0;
            s.e = neg1;
            func_003B7278(arg0, &s, arg3);
            S20 *d = (S20 *)((u32)off + (u32)arg1->out);
            d->a = s.a; d->b = s.b; d->c = s.c; d->d = s.d; d->e = s.e;
            off += 0x14;
            j--;
        } while (j != 0);
    }
}
