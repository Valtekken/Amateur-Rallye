
#include "context.h"

typedef struct Entry { s32 w[7]; } Entry;
extern Entry D_0049B9D0[][4];
extern void *func_003CA3B0(s32, s32);
extern s32 func_003FA9B8(void);
extern s32 func_003CEA50(s32, s32, s32, s32);
extern u32 func_003CE988(u32, u32);

u8 func_003CA5F8(s32 a, s32 b) {
    if (D_0049B9D0[a][b].w[4] != 0) {
        u8 *p = (u8 *)func_003CA3B0(a, a);
        return p[0x71];
    }
    return 0;
}

s32 func_003CED88(s32 a, s32 b) {
    s32 tmp = func_003FA9B8();
    return func_003CEA50(b, a, 0, tmp) > 0;
}

u32 func_003CEDD0(void) {
    return func_003CE988(0, 0xFFFFFFFFu) >> 31;
}
