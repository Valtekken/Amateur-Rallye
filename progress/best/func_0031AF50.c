typedef struct CmdBuf {
    s32 *data;      /* +0x0 */
    s32 *alloc;     /* +0x4 */
    s32 capacity;   /* +0x8 */
    s32 count;      /* +0xC */
    void *unk10;    /* +0x10 */
} CmdBuf;

extern s32 D_0043C000;
extern u8 D_1B50;
extern void *D_002AD5A8(s32, u32);
extern void D_002AD530(s32);
extern void func_003F931C(void *, void *, s32);

void func_0031AF50(void *arg0, s32 arg1) {
    CmdBuf *cb;
    s32 temp_3;
    s32 temp_5;
    s32 shift;
    s32 newcap;
    s32 raw;
    s32 aligned;
    s32 n;
    s32 c;

    cb = *(CmdBuf **)((u8 *)arg0 + 0x14);
    temp_3 = cb->count;
    if ((cb->capacity - temp_3) < 0xC) {
        temp_5 = temp_3 + 0x2C;
        D_0043C000 = (s32)cb->unk10;
        shift = 0;
        if ((u32)temp_5 > 1U) {
            do {
                shift += 1;
            } while ((u32)(1 << shift) < (u32)temp_5);
        }
        newcap = 1 << shift;
        raw = (s32)D_002AD5A8(newcap * 4, temp_5);
        n = cb->count;
        aligned = (raw + 0x7F) & ~0x7F;
        if (n > 0) {
            func_003F931C((void *)aligned, cb->data, n * 4);
        }
        if (cb->alloc != NULL) {
            D_002AD530((s32)cb->alloc);
        }
        cb->alloc = (s32 *)raw;
        cb->data = (s32 *)aligned;
        cb->capacity = newcap - 0x20;
        D_0043C000 = 0;
    }
    c = cb->count;
    cb->data[c] = 0x10000002;
    cb->count = c + 1;
    cb->data[c + 1] = 0;
    cb->count = c + 2;
    cb->data[c + 2] = 0x01000404;
    cb->count = c + 3;
    cb->data[c + 3] = 0x6C018000;
    cb->count = c + 4;
    cb->data[c + 4] = 0x37800080;
    cb->count = c + 5;
    cb->data[c + 5] = 0x3F000800;
    cb->count = c + 6;
    cb->data[c + 6] = 0x400DD174;
    cb->count = c + 7;
    cb->data[c + 7] = arg1;
    cb->count = c + 8;
    cb->data[c + 8] = ((u32)&D_1B50 >> 3) | 0x14000000;
    cb->count = c + 9;
    cb->data[c + 9] = 0;
    cb->count = c + 10;
    cb->data[c + 10] = 0;
    cb->count = c + 11;
    cb->data[c + 11] = 0;
    cb->count = c + 12;
}
