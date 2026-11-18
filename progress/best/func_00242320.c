void func_00242320(void *a, void *b, void *c) {
    void *p7 = *(void**)c;
    void *p2 = *(void**)b;
    float x1 = *(float*)p7, y1 = *(float*)((char*)p7+4), z1 = *(float*)((char*)p7+8);
    float x2 = *(float*)p2, y2 = *(float*)((char*)p2+4), z2 = *(float*)((char*)p2+8);
    float dx = x2-x1, dy = y2-y1, dz = z2-z1;
    float thr = *(float*)((char*)a+4);
    float d0 = dx*dx+dy*dy+dz*dz;
    if (d0 < thr) {
        *(void**)b = *(void**)((char*)c+4);
        *(int*)((char*)b+0x18) = *(int*)((char*)c+0x1C);
        return;
    }
    void *p3 = *(void**)((char*)c+4);
    float x3 = *(float*)p3, y3 = *(float*)((char*)p3+4), z3 = *(float*)((char*)p3+8);
    float dx2 = x2-x3, dy2 = y2-y3, dz2 = z2-z3;
    float d1 = dx2*dx2+dy2*dy2+dz2*dz2;
    if (d1 < thr) {
        *(void**)b = p7;
        *(int*)((char*)b+0x18) = *(int*)((char*)c+0x18);
        return;
    }
    void *p2b = *(void**)((char*)b+4);
    float x2b = *(float*)p2b, y2b = *(float*)((char*)p2b+4), z2b = *(float*)((char*)p2b+8);
    float dx3 = x2b-x1, dy3 = y2b-y1, dz3 = z2b-z1;
    float d2 = dx3*dx3+dy3*dy3+dz3*dz3;
    if (d2 < thr) {
        *(void**)((char*)b+4) = p3;
        *(int*)((char*)b+0x1C) = *(int*)((char*)c+0x1C);
        return;
    }
    float dx4 = x2b-x3, dy4 = y2b-y3, dz4 = z2b-z3;
    float d3 = dx4*dx4+dy4*dy4+dz4*dz4;
    if (d3 < thr) {
        *(void**)((char*)b+4) = p7;
        *(int*)((char*)b+0x1C) = *(int*)((char*)c+0x18);
    }
}
