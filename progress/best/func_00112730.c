extern s32 func_001E4280(void);
extern void *func_001E37E8(s32, s32);
extern s32 func_001E3650(s32, s32);
extern s32 func_001E3EC0(s32, void *, s32);
extern s32 func_00262838(void);
extern void func_001D4040(void *, const char *);
extern void func_002623F0(s32, void *);
extern void func_00112730(void *);

char frame[0x50]; // 80-byte frame

void func_00112730(void *arg0) {
    // Compute vector pointer: arg0 + 0x38 (56) bytes -> 14 s32 words
    s32 *obj = (s32 *)arg0 + 14;  // obj points to the V struct (begin at offset 0)
    if (!obj) return;

    // Compute limit: func_001E3650(func_001E4280(), arg0 + 0x3c) + 1
    s32 limit = func_001E3650(func_001E4280(), (s32)((char *)arg0 + 0x3c)) + 1;

    // Compute count = (obj->end - obj->begin) / 4
    s32 count = obj[1] - obj[0];  // obj[1] = end, obj[0] = begin
    count >>= 2;  // divide by 4

    // Clamp limit
    s32 s0 = limit;
    if ((u32)s0 < (u32)count) {
        // keep s0
    } else {
        s0 = s0 - count;
    }

    // Call func_001E3EC0 with (arg0 + 0x3c) and s0
    func_001E3EC0(func_001E4280(), (char *)((char *)arg0 + 0x3c), s0);

    // Call func_00262838
    s32 v0 = func_00262838();

    // Prepare arguments for func_001D4040:
    // $4 = sp + 0x10 (saved $16 location)
    // $5 = node->ptr_40 (the string address)
    char temp_buf[64];
    func_001D4040((void *)&frame[0x10], (const char *)((char *)arg0 + 0x40));
    func_002623F0(v0, (void *)temp_buf);

    // Call func_00112730 with arg0
    func_00112730(arg0);
}
