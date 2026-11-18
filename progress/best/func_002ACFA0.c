typedef struct { u32 a; s32 b; s32 c; s32 d; } S;
s32 func_002ACFA0(S *x, S *y) {
    u32 a=x->a, b=y->a;
    if (a<2 || b<2) return 1;
    if ((a^4)==0) {
        if ((b^4)!=0) return (x->b==0)?1:-1;
        return y->b - x->b;
    }
    if ((b^4)!=0) {
        if ((a^2)==0) {
            if ((b^2)!=0) return (y->b!=0)?1:-1;
            return 0;
        }
        if ((b^2)==0) return (x->b==0)?1:-1;
        {
            s32 xb=x->b;
            if (xb != y->b) return (xb==0)?1:-1;
            s32 xc=x->c, yc=y->c;
            if (yc < xc) { if (xb==0) return 1; else return -1; }
            if (xc < yc) { if (xb==0) return -1; else return 1; }
            s32 xd=x->d, yd=y->d;
            if (yd < (u32)xd) { if (xb==0) return 1; else return -1; }
            if ((u32)xd < (u32)yd) { if (xb==0) return -1; else return 1; }
            return 0;
        }
    }
    return (y->b==0)?-1:1;
}
