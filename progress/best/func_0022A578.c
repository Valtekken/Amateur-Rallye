extern float func_001CF4C0(float *);
extern float D_00478468;
extern float D_004264A0;

int func_0022A578(void *unused, float *a, float *b, float *c) {
    float sp[12];
    float len;
    float dot;
    float dx, dy, dz;
    float px, py, pz;
    float ox, oy, oz;
    int ret;

    sp[0] = b[0] - a[0];
    sp[1] = b[1] - a[1];
    sp[2] = b[2] - a[2];
    len = func_001CF4C0(sp);
    if (len < D_00478468) {
        sp[0] = 0.0f;
        sp[1] = 0.0f;
        sp[2] = 0.0f;
    } else {
        sp[0] /= len;
        sp[1] /= len;
        sp[2] /= len;
    }

    ret = 0;
    dx = c[0] - a[0];
    dy = c[1] - a[1];
    dz = c[2] - a[2];
    sp[4] = dx;
    sp[5] = dy;
    sp[6] = dz;
    dot = dx * sp[0] + dy * sp[1] + dz * sp[2];
    if (dot >= 0.0f && dot <= len) {
        ox = sp[0] * dot;
        oy = sp[1] * dot;
        oz = sp[2] * dot;
        sp[8] = ox;
        sp[9] = oy;
        sp[10] = oz;
        px = a[0] + ox;
        py = a[1] + oy;
        pz = a[2] + oz;
        sp[4] = px;
        sp[5] = py;
        sp[6] = pz;
        if (((px - c[0]) * (px - c[0]) + (py - c[1]) * (py - c[1]) + (pz - c[2]) * (pz - c[2])) < (D_004264A0 * D_004264A0)) {
            ret = 1;
        }
    }
    return ret;
}
