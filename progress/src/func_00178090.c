float func_00178090(void *arg0)
{
    void *q = *(void **)((char *)arg0 + 0x14);
    float low = 0.0f;
    float high = 1.0f;
    float x = *(float *)((char *)q + 0x28) / *(float *)((char *)q + 0x44);
    return x < low ? low : (high < x ? high : x);
}
