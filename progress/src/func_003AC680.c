void func_003989E0(register s32 *a, register s32 b, register s32 c){ *a += b * 8; }
s32 func_003AC680(register s32 *a, register s32 *b){ return *a == *b; }
s32 func_003ADD98(register s32 *a, register s32 *b){ return *a == *b; }
extern s32 func_003B3430(u32); void func_003B1AC8(register u32 a, register u32 b, register s32 c){ while(a < b){ func_003B3430(a); a += 8; } }
