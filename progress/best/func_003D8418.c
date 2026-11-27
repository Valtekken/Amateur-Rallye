typedef signed int s32;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed long long s64;
typedef unsigned char u8;

typedef struct Buf {
    u8 pad0[0x14];
    u8 *ptr;
    u8 *end;
} Buf;

extern s32 func_003D7F50(Buf *buf, u8 c);
extern void func_003F931C(u8 *dst, u8 *src, s64 n);

s32 func_003D8418(Buf *arg0, u8 *arg1, u64 arg2) {
    u64 var_18;
    u8 *var_17;
    s64 count;
    u8 *p;

    var_18 = arg2;
    var_17 = arg1;
    if (arg2 == 0) {
        return 0;
    }
    while (1) {
        s32 avail = arg0->end - arg0->ptr;
        p = arg0->ptr;
        if (avail > 0) {
            count = (s64)(s32)avail;
            if (var_18 < (u64)count) {
                count = (s64)(s32)(u32)var_18;
            }
            if (count >= 0x15) {
                s64 n = count;
                func_003F931C(p, var_17, n);
                var_17 += n;
                arg0->ptr = p + n;
            } else {
                s32 i = (s32)count - 1;
                if ((s32)count > 0) {
                    s64 n = (s64)(s32)count;
                    if (i >= 0) {
                        do {
                            *p++ = *var_17++;
                        } while (--i >= 0);
                        arg0->ptr = p;
                    } else {
                        arg0->ptr = p;
                    }
                    count = n;
                } else {
                    count = 0;
                }
            }
            var_18 -= (u64)count;
        }
        if (var_18 == 0) {
            break;
        }
        {
            u8 c = *var_17++;
            if (func_003D7F50(arg0, c) == -1) {
                break;
            }
            var_18--;
        }
    }
    return (s32)(arg2 - var_18);
}
