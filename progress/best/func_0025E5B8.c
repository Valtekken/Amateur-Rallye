f32 func_0025E5B8(void *dummy, void *arg1, void *arg2) {
    f32 *v1 = (f32 *)((u8 *)arg1 + 0xC);
    f32 *v2 = (f32 *)((u8 *)arg2 + 0xC);
    f32 dot = v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
    f32 result = 0.0f;
    
    void *p1_4C = *(void **)((u8 *)arg1 + 0x4C);
    void *p2_4C = *(void **)((u8 *)arg2 + 0x4C);
    
    if (p1_4C == p2_4C) {
        if (*(s32 *)((u8 *)p1_4C + 0x1C8) != 0) {
            result = dot + 0.0f;
        }
    } else if (p1_4C == *(void **)((u8 *)arg2 + 0x50)) {
        if (*(s32 *)((u8 *)p1_4C + 0x1C8) != 0) {
            result = 0.0f - dot;
        }
    }
    
    void *p1_50 = *(void **)((u8 *)arg1 + 0x50);
    if (p1_50 == p2_4C) {
        if (*(s32 *)((u8 *)p1_50 + 0x1C8) != 0) {
            result = result - dot;
        }
        return result;
    }
    
    if (p1_50 == *(void **)((u8 *)arg2 + 0x50)) {
        if (*(s32 *)((u8 *)p1_50 + 0x1C8) != 0) {
            result = result + dot;
        }
    }
    return result;
}
