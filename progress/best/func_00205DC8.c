extern void *func_002063F0(void *, s32, s32 *);
extern void func_00218A68(void *, void *, s16 *);

typedef struct {
    s32 pad;
    u8 *begin;
    u8 *end;
} SBuf;

typedef struct {
    s16 pos;
    s32 flag;
    s16 neg;
} SLocal;

void func_00205DC8(void *arg0, s8 *str) {
    SLocal sp;
    SBuf *item = (SBuf *)func_002063F0(arg0, 0, &sp.flag);
    while (*str) {
        s8 c = (s8)(u8)*str;
        if (c >= 0) {
            sp.pos = c;
            if (item->begin == item->end) {
                func_00218A68(item, item->begin, &sp.pos);
            } else {
                if (item->begin) *(s16 *)item->begin = sp.pos;
                item->begin += 2;
            }
        } else {
            sp.neg = c + 0x100;
            if (item->begin != item->end) {
                if (item->begin) *(s16 *)item->begin = sp.neg;
                item->begin += 2;
            } else {
                func_00218A68(item, item->begin, &sp.neg);
            }
        }
        str++;
    }
    ((s32 *)arg0)[0x84 / 4]++;
}
