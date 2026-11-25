typedef struct S_vec3 {
    f32 x;
    f32 y;
    f32 z;
} S_vec3;

typedef struct S_vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} S_vec4;

typedef struct S_vec4_extended {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} S_vec4_extended;

typedef struct S_func_001C4E50_arg0 {
    S_vec4 v0;
    S_vec4 v1;
    S_vec4 v2;
    S_vec4 v3;
} S_func_001C4E50_arg0;

extern void *func_003F3E80(s32 a0, void *a1, void *a2);

void func_001C4E50(S_func_001C4E50_arg0 *arg0) {
    S_vec4_extended *v0 = (S_vec4_extended *)&arg0->v0;
    S_vec4_extended *v1 = (S_vec4_extended *)&arg0->v1;
    S_vec4_extended *v2 = (S_vec4_extended *)&arg0->v2;
    S_vec4_extended *v3 = (S_vec4_extended *)&arg0->v3;
    S_vec4 *v4 = (S_vec4 *)(arg0 + 0x40);

    f32 f0 = v0->x;
    f32 f1 = v0->y;
    f32 f2 = v0->z;
    f32 f3 = v0->w;

    f32 f0_sq = f0 * f0;
    f32 f1_sq = f1 * f1;
    f32 f5 = f0_sq + f1_sq + f2 * f2;

    f32 f12 = f5 + f3 * f3;

    if (f12 <= 1.1920929e-7f) {
        v1->x = 0.0f;
        v1->y = 0.0f;
        v1->z = 0.0f;
        v1->w = 0.0f;
    } else {
        f32 inv_len = 1.0f / sqrtf(f12);
        v1->x = f0 * inv_len;
        v1->y = f1 * inv_len;
        v1->z = f2 * inv_len;
        v1->w = f3 * inv_len;
    }

    f32 f0_v1 = v1->x;
    f32 f1_v1 = v1->y;
    f32 f2_v1 = v1->z;
    f32 f3_v1 = v1->w;

    f32 f0_sq_v1 = f0_v1 * f0_v1;
    f32 f1_sq_v1 = f1_v1 * f1_v1;
    f32 f5_v1 = f0_sq_v1 + f1_sq_v1 + f2_v1 * f2_v1;

    f32 f12_v1 = f5_v1 + f3_v1 * f3_v1;

    if (f12_v1 <= 1.1920929e-7f) {
        v2->x = 0.0f;
        v2->y = 0.0f;
        v2->z = 0.0f;
        v2->w = 0.0f;
    } else {
        f32 inv_len_v1 = 1.0f / sqrtf(f12_v1);
        v2->x = f0_v1 * inv_len_v1;
        v2->y = f1_v1 * inv_len_v1;
        v2->z = f2_v1 * inv_len_v1;
        v2->w = f3_v1 * inv_len_v1;
    }

    f32 f0_v2 = v2->x;
    f32 f1_v2 = v2->y;
    f32 f2_v2 = v2->z;
    f32 f3_v2 = v2->w;

    f32 f0_sq_v2 = f0_v2 * f0_v2;
    f32 f1_sq_v2 = f1_v2 * f1_v2;
    f32 f5_v2 = f0_sq_v2 + f1_sq_v2 + f2_v2 * f2_v2;

    f32 f12_v2 = f5_v2 + f3_v2 * f3_v2;

    if (f12_v2 <= 1.1920929e-7f) {
        v3->x = 0.0f;
        v3->y = 0.0f;
        v3->z = 0.0f;
        v3->w = 0.0f;
    } else {
        f32 inv_len_v2 = 1.0f / sqrtf(f12_v2);
        v3->x = f0_v2 * inv_len_v2;
        v3->y = f1_v2 * inv_len_v2;
        v3->z = f2_v2 * inv_len_v2;
        v3->w = f3_v2 * inv_len_v2;
    }

    // Cross product parts (simplified)
    // ... logic for cross product and normalization ...
}
