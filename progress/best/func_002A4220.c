typedef struct { f32 x, y, z, w; } V4;
extern float sqrtf(float) __attribute__((alias("func_003F3E80")));
extern float fabsf(float);

static inline void norm(f32 *v) {
    f32 len2 = v[0]*v[0] + v[1]*v[1] + v[2]*v[2];
    if (len2 <= 1.1920929e-7f) {
        v[0] = 0.0f; v[1] = 0.0f; v[2] = 0.0f;
    } else {
        f32 inv = 1.0f / __builtin_sqrtf(len2);
        v[2] *= inv; v[0] *= inv; v[1] *= inv;
    }
}

s32 func_002A4220(V4 *a) {
    f32 v[20];
    f32 a01, a12, a20, sum, t, e2;
    s32 i, j, k, n, ret;
    f32 *p, *q, *r;
    f32 nx, ny, nz, dot;

    for (n = 0; n < 16; n++) v[n+4] = ((f32*)a)[n];
    norm(&v[4]); norm(&v[8]); norm(&v[12]);
    a01 = v[4]*v[8] + v[5]*v[9] + v[6]*v[10];
    a12 = v[8]*v[12] + v[9]*v[13] + v[10]*v[14];
    a20 = v[12]*v[4] + v[13]*v[5] + v[14]*v[6];
    a01 = fabsf(a01); a12 = fabsf(a12); a20 = fabsf(a20);
    sum = a01 + a12 + a20;
    ret = 1;
    if (!(sum <= 1.1920929e-7f)) {
        e2 = 1.1920929e-6f;
        t = sum / 3.0f - 1.0f;
        if (!(-e2 <= t && t <= e2)) {
            if (a01 <= a12 && a01 <= a20) { i=0; j=1; k=2; }
            else if (a12 <= a01) {
                i = 1;
                if (a12 <= a20) { j=2; k=0; }
                else { i=2; j=0; k=1; }
            } else { i=2; j=0; k=1; }
            p=&v[4+i*4]; q=&v[4+j*4]; r=&v[4+k*4];
            nx = p[1]*q[2] - p[2]*q[1];
            ny = p[2]*q[0] - p[0]*q[2];
            nz = p[0]*q[1] - p[1]*q[0];
            r[0] = nx; r[1] = ny; r[2] = nz;
            norm(r);
            dot = r[0]*a[k].x + r[1]*a[k].y + r[2]*a[k].z;
            if (dot < 0.0f) { r[0] = -r[0]; r[1] = -r[1]; r[2] = -r[2]; }
            nx = q[1]*r[2] - q[2]*r[1];
            ny = q[2]*r[0] - q[0]*r[2];
            nz = q[0]*r[1] - q[1]*r[0];
            p[0] = nx; p[1] = ny; p[2] = nz;
            dot = p[0]*a[i].x + p[1]*a[i].y + p[2]*a[i].z;
            if (dot < 0.0f) { p[0] = -p[0]; p[1] = -p[1]; p[2] = -p[2]; }
            a[i].x = p[0]; a[i].y = p[1]; a[i].z = p[2];
            a[j].x = q[0]; a[j].y = q[1]; a[j].z = q[2];
            a[k].x = r[0]; a[k].y = r[1]; a[k].z = r[2];
        }
    }
    return ret;
}
