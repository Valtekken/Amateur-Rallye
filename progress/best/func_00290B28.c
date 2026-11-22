extern f32 func_003F33C8(f32);
extern void func_003F3E80(f32);

typedef struct {
    f32 x;
    f32 y;
} Vec2f;

void func_00290B28(Vec2f *arg0) {
    f32 x = arg0->x;
    f32 y = arg0->y;
    f32 sum_sq = (x * x) + (y * y);
    
    if (sum_sq == 0.0f) {
        func_003F3E80(sum_sq);
    }

    // The assembly shows some complex float logic with 0x3727C5AC...
    // Let's try a simpler approach for now.
}
