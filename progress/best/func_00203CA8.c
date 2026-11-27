void *func_00203CA8(f32 *out, const f32 *m1, const f32 *m2)
{
    f32 tmp[9];
    f32 res[9];
    int r, c, k;

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            const f32 *pa = m1 + c;
            const f32 *pb = m2 + r * 3;
            f32 *acc = tmp + r * 3 + c;
            *acc = 0.0f;
            for (k = 2; k >= 0; k--)
            {
                *acc += *pb * *pa;
                pa += 3;
                pb += 1;
            }
        }
    }

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            const f32 *pa = tmp + r * 3;
            const f32 *pb = m2 + c * 3;
            f32 *acc = res + r * 3 + c;
            *acc = 0.0f;
            for (k = 2; k >= 0; k--)
            {
                *acc += *pa * *pb;
                pa += 1;
                pb += 1;
            }
        }
    }

    for (k = 0; k < 9; k++)
        out[k] = res[k];

    return out;
}
