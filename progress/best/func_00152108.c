typedef struct S_vec4 {
    f32 x, y, z, w;
} S_vec4;

typedef struct S_mat4 {
    S_vec4 row0;
    S_vec4 row1;
    S_vec4 row2;
    S_vec4 row3;
} S_mat4;

void func_00152108(S_mat4 *arg0, S_mat4 *arg1, S_mat4 *arg2) {
    if (arg0 != arg2 && arg1 != arg2) {
        arg2->row0.x = arg0->row0.x * arg1->row0.x + arg0->row0.y * arg1->row1.x + arg0->row0.z * arg1->row2.x + arg0->row0.w * arg1->row3.x;
        arg2->row0.y = arg0->row0.x * arg1->row0.y + arg0->row0.y * arg1->row1.y + arg0->row0.z * arg1->row2.y + arg0->row0.w * arg1->row3.y;
        arg2->row0.z = arg0->row0.x * arg1->row0.z + arg0->row0.y * arg1->row1.z + arg0->row0.z * arg1->row2.z + arg0->row0.w * arg1->row3.z;
        arg2->row0.w = arg0->row0.x * arg1->row0.w + arg0->row0.y * arg1->row1.w + arg0->row0.z * arg1->row2.w + arg0->row0.w * arg1->row3.w;

        arg2->row1.x = arg0->row1.x * arg1->row0.x + arg0->row1.y * arg1->row1.x + arg0->row1.z * arg1->row2.x + arg0->row1.w * arg1->row3.x;
        arg2->row1.y = arg0->row1.x * arg1->row0.y + arg0->row1.y * arg1->row1.y + arg0->row1.z * arg1->row2.y + arg0->row1.w * arg1->row3.y;
        arg2->row1.z = arg0->row1.x * arg1->row0.z + arg0->row1.y * arg1->row1.z + arg0->row1.z * arg1->row2.z + arg0->row1.w * arg1->row3.z;
        arg2->row1.w = arg0->row1.x * arg1->row0.w + arg0->row1.y * arg1->row1.w + arg0->row1.z * arg1->row2.w + arg0->row1.w * arg1->row3.w;

        arg2->row2.x = arg0->row2.x * arg1->row0.x + arg0->row2.y * arg1->row1.x + arg0->row2.z * arg1->row2.x + arg0->row2.w * arg1->row3.x;
        arg2->row2.y = arg0->row2.x * arg1->row0.y + arg0->row2.y * arg1->row1.y + arg0->row2.z * arg1->row2.y + arg0->row2.w * arg1->row3.y;
        arg2->row2.z = arg0->row2.x * arg1->row0.z + arg0->row2.y * arg1->row1.z + arg0->row2.z * arg1->row2.z + arg0->row2.w * arg1->row3.z;
        arg2->row2.w = arg0->row2.x * arg1->row0.w + arg0->row2.y * arg1->row1.w + arg0->row2.z * arg1->row2.w + arg0->row2.w * arg1->row3.w;

        arg2->row3.x = arg0->row3.x * arg1->row0.x + arg0->row3.y * arg1->row1.x + arg0->row3.z * arg1->row2.x + arg0->row3.w * arg1->row3.x;
        arg2->row3.y = arg0->row3.x * arg1->row0.y + arg0->row3.y * arg1->row1.y + arg0->row3.z * arg1->row2.y + arg0->row3.w * arg1->row3.y;
        arg2->row3.z = arg0->row3.x * arg1->row0.z + arg0->row3.y * arg1->row1.z + arg0->row3.z * arg1->row2.z + arg0->row3.w * arg1->row3.z;
        arg2->row3.w = arg0->row3.x * arg1->row0.w + arg0->row3.y * arg1->row1.w + arg0->row3.z * arg1->row2.w + arg0->row3.w * arg1->row3.w;
    }
}
