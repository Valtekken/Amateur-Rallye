extern void func_0024F770(void *a0, void *a1, void *a2);

void func_00233CA8(void *arg0) {
    if (*(int *)((char *)arg0 + 0x10) == 1) {
        float sp[7];
        char *temp_3 = *(char **)((char *)arg0 + 8);
        void *a0 = *(void **)arg0;
        char *temp_2 = temp_3 + 0xBC;
        float *vec_94 = (float *)(temp_3 + 0x94);
        float *vec_a0 = (float *)(temp_3 + 0xA0);
        float *mat_bc = (float *)(temp_3 + 0xBC);

        float f0 = vec_94[0];
        float f7 = vec_94[1];
        float f5 = mat_bc[0] * f0;
        float f9 = mat_bc[1] * f7;
        float f4 = mat_bc[3] * f0;
        f5 = f5 + f9;
        float f8 = mat_bc[4] * f7;
        float f3 = mat_bc[6] * f0;
        float f2 = vec_94[2];
        float f1 = mat_bc[7] * f7;
        float f6 = mat_bc[2];
        float f7_2 = mat_bc[5];
        float f0_2 = mat_bc[8];

        f6 = f6 * f2;
        f0_2 = f0_2 * f2;
        f7_2 = f7_2 * f2;
        f3 = f3 + f1;
        f4 = f4 + f8;
        f3 = f3 + f0_2;
        f5 = f5 + f6;
        f4 = f4 + f7_2;

        sp[4] = f5;
        sp[5] = f4;
        sp[6] = f3;

        float sub0 = vec_a0[0] - f5;
        float sub2 = vec_a0[1] - f4;
        float sub1 = vec_a0[2] - f3;

        sp[0] = sub0;
        sp[1] = sub2;
        sp[2] = sub1;

        func_0024F770(a0, temp_2, sp);
        *(int *)((char *)arg0 + 0x10) = 0;
    }
}
