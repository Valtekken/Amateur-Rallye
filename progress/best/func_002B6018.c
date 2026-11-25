extern s32 func_002B6100(void *, u8 *, s32, s32, s32);
extern s32 func_002B61D0(void *, u8 *, s32, s32, s32);
extern char D_0047EDB8[];
extern void func_003F9698(char *, ...);

s32 func_002B6018(void *arg0, s8 *path) {
    u8 buf[0x20];
    s32 found = 0;
    s32 c = *path;
    u8 uc = *(u8 *)path;
    s32 i = 0;
    s32 colon = ':';
    s32 bs = 0x5C;
    if (c != '\\' && c != 0) {
        if (c == colon) {
            buf[0] = uc;
            buf[1] = 0;
            found = 1;
        } else {
            u8 *p = buf;
            while (c != bs) {
                i++;
                *p++ = (u8)c;
                if (i >= 0x1F) break;
                c = path[i];
                if (c == 0) break;
                if (c == colon) {
                    *p++ = (u8)c;
                    *p = 0;
                    found = 1;
                    break;
                }
            }
        }
    }
    s32 ret = found ? func_002B61D0(arg0, buf, 1, colon, found) : func_002B6100(arg0, buf, i, colon, found);
    if (ret == 0) {
        func_003F9698(D_0047EDB8, path);
    }
    return ret;
}
