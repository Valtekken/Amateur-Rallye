typedef struct { u8 data[24]; } Item;
extern Item* func_002C5160(Item* p, Item* e, Item* q);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return (s32)func_002C5160((Item*)a, (Item*)b, (Item*)c);
}

extern s32 func_003CEA50(void*, s32, u32, u32);
extern s32 func_003FA9B8(s32);

u32 func_003CEC00(s32 arg0, s32 arg1) {
    return (u32)~func_003CEA50((void*)arg1, arg0, 0, func_003FA9B8(arg1)) >> 31;
}

s32 func_003CEC50(s32 arg0, s32 arg1) {
    return func_003CE988((void*)arg0, (void*)arg1, 0, 0xFFFFFFFF) < 1;
}

u32 func_003CECC8(s32 arg0, s32 arg1) {
    return (u32)func_003CEA50((void*)arg1, arg0, 0, func_003FA9B8(arg1)) >> 31;
}

extern s32 func_003CE988(void*, void*, u32, u32);
