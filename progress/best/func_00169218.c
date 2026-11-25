extern f32 func_00169000(void *, void *);

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} Entry;

void func_00169218(void *arg0, void *arg1) {
    Entry *base = *(Entry **)((u8 *)arg1 + 0x0);
    Entry *end = *(Entry **)((u8 *)arg1 + 0x4);
    u32 diff = (u8 *)end - (u8 *)base;
    u32 magic = 0xAAAAAAAB;
    u32 count = (diff * magic) >> 2;
    
    if (count == 0) return;
    
    base[0].unk4 = func_00169000(arg0, &base[0]);
    
    if (count <= 1) return;
    
    u32 i = 1;
    u32 offset = 0;
    u32 elem_size = 12;
    
    do {
        f32 val = base[i].unk4;
        base[i].unk4 = val;
        base[i].unk4 = func_00169000(arg0, &base[i]);
        i++;
        offset += elem_size;
        count = (diff * magic) >> 2;
    } while (i < count);
}
