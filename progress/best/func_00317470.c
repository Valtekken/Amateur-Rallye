typedef struct CmdBuf {
    s32 *data;
    s32 *alloc;
    s32 capacity;
    s32 count;
    void *unk10;
} CmdBuf;

extern s32 D_0043C000;
extern u8 D_1870;
extern void *D_002AD5A8(s32, u32);
extern void D_002AD530(s32);
extern void func_003F931C(void *, void *, s32);

void func_00317470(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5, void *arg6) {
    CmdBuf *cb;
    s32 temp_3;
    u32 temp_5;
    s32 shift;
    s32 newcap;
    s32 raw;
    s32 aligned;
    s32 n;
    s32 c;

    cb = *(CmdBuf **)((u8 *)arg0 + 0x14);
    temp_3 = cb->count;
    if ((cb->capacity - temp_3) < 0x5C) {
        temp_5 = temp_3 + 0x7C;
        D_0043C000 = (s32)cb->unk10;
        shift = 0;
        if (temp_5 > 1U) {
            do {
                shift += 1;
            } while ((u32)(1 << shift) < temp_5);
        }
        newcap = 1 << shift;
        raw = (s32)D_002AD5A8(newcap * 4, temp_5);
        n = cb->count;
        aligned = (raw + 0x7F) & 0xFFFFFF80;
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
    cb->data[c] = 0x10000016;
    cb->count = c + 1;
    cb->data[c + 1] = 0;
    cb->count = c + 2;
    cb->data[c + 2] = 0x01000404;
    cb->count = c + 3;
    cb->data[c + 3] = 0x6C158000;
    cb->count = c + 4;
    /* arg1 0x10 */
    func_003F931C(cb->data + cb->count, arg1, 0x10);
    cb->count += 4;
    /* arg2 0x40 */
    func_003F931C(cb->data + cb->count, arg2, 0x40);
    cb->count += 0x10;
    /* arg3 0x40 */
    func_003F931C(cb->data + cb->count, arg3, 0x40);
    cb->count += 0x10;
    /* arg4 0x40 */
    func_003F931C(cb->data + cb->count, arg4, 0x40);
    cb->count += 0x10;
    /* arg5 0x40 */
    func_003F931C(cb->data + cb->count, arg5, 0x40);
    cb->count += 0x10;
    /* arg6 0x40 */
    func_003F931C(cb->data + cb->count, arg6, 0x40);
    cb->count += 0x10;
    c = cb->count;
    cb->data[c] = ((u32)&D_1870 >> 3) | 0x14000000;
    cb->count = c + 1;
    cb->data[c + 1] = 0;
    cb->count = c + 2;
    cb->data[c + 2] = 0;
    cb->count = c + 3;
    cb->data[c + 3] = 0;
    cb->count = c + 4;
}
