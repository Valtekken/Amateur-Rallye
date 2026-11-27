typedef struct {
    f32 x;   /* +0x00 */
    f32 y;   /* +0x04 */
    f32 z;   /* +0x08 */
    u8 pad[0x2C - 0x0C];
    u8 c0;   /* +0x2C */
    u8 c1;   /* +0x2D */
    u8 c2;   /* +0x2E */
    u8 c3;   /* +0x2F */
} Elem;      /* size 0x30 */

void func_00322220(void *thisp, void *arg1, void *arg2)
{
    u64 *begin;
    u64 *end;
    s32 n;
    s32 i;
    u8 *base;
    Elem *e;

    if (arg2 == NULL) {
        return;
    }
    begin = *(u64 **)((u8 *)arg2 + 0x74);
    end = *(u64 **)((u8 *)arg2 + 0x78);
    n = (s32)((u8 *)end - (u8 *)begin) >> 3;
    if (n == 0) {
        return;
    }
    if (n <= 0) {
        return;
    }
    base = *(u8 **)((u8 *)arg1 + 0x18);
    for (i = 0; i < n; i++) {
        u64 elem = *(u64 *)((u8 *)begin + i * 8);
        s32 fieldA;
        s32 fieldB;
        s32 total;
        elem = (elem & 0xFFF0000FFFFFFFFFULL) | 0x8000000000000000ULL;
        fieldA = (s32)((elem >> 16) & 0x7FFFF);
        fieldB = (s32)(elem & 0xFFFF);
        total = fieldA + fieldB;
        if (fieldA < total) {
            s32 idx = fieldA;
            s32 count = total - fieldA;
            s32 c;
            do {
                volatile f32 tmp[3];
                f32 f1;
                tmp[0] = 0.0f;
                tmp[1] = 1.0f;
                tmp[2] = 0.0f;
                e = (Elem *)(base + (idx++) * 0x30);
                f1 = e->x * 0.0f + e->y + e->z * 0.0f;

                c = (s32)((f1 * 0.1875f + 0.4f) * 255.0f);
                if (c < 2) c = 2; else if (c > 0xFE) c = 0xFE;
                e->c0 = (u8)c;

                c = (s32)((f1 * 0.1875f + 0.4f) * 255.0f);
                if (c < 2) c = 2; else if (c > 0xFE) c = 0xFE;
                e->c1 = (u8)c;

                c = (s32)((f1 * 0.1875f + 0.4f) * 255.0f);
                if (c < 2) c = 2; else if (c > 0xFE) c = 0xFE;
                e->c2 = (u8)c;

                e->c3 = 0xFE;
            } while (--count != 0);
        }
    }
}
