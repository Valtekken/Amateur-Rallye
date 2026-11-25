typedef struct {
    f32 x, y, z;
} Vec3;

extern void func_001CB598(Vec3 *out, Vec3 *a, Vec3 *b);
extern f32 func_003F3E80(f32);

void func_001CB748(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2, Vec3 *arg3) {
    Vec3 v1, v2, v3;
    f32 d1, d2, d3, len_sq, len;
    
    v1.x = arg1->x - arg0->x;
    v1.y = arg1->y - arg0->y;
    v1.z = arg1->z - arg0->z;
    
    d1 = v1.x * v1.x + v1.y * v1.y + v1.z * v1.z;
    
    if (d1 <= 1.1920929e-7f) {
        v2.x = 0.0f; v2.y = 0.0f; v2.z = 0.0f;
    } else {
        if (d1 == 0.0f) { // This shouldn't happen if d1 > epsilon
             v2.x = 0.0f; v2.y = 0.0f; v2.z = 0.0f;
        } else {
            len = func_003F3E80(d1);
            f32 inv_len = 1.0f / len;
            v2.x = v1.x * inv_len;
            v2.y = v1.y * inv_len;
            v2.z = v1.z * inv_len;
        }
    }
    // ... (remaining logic to be filled in based on assembly)
}
