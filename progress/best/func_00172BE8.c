extern s32 func_0021E9C0(s32, void*);
extern s32 func_0021F4B0(void);

typedef struct Element {
    u8 pad[0x20];
    s32 unk20;
} Element;

typedef struct Container {
    u8 pad[0x14];
    Element** base;
    Element** end;
} Container;

Element* func_00172BE8(Container* container, s32 arg1) {
    s32 count = container->end - container->base;
    s32 i = 0;
    s32 i4 = 0;
    
    if (count <= 0) {
        return 0;
    }
    
    while (1) {
        i4 = i << 2;
        Element** base = container->base;
        Element* elem = *(Element**)((u8*)base + i4);
        s32 val = elem->unk20;
        
        if (val == 0) {
            val = func_0021E9C0(func_0021F4B0(), (u8*)elem + 0x1C);
            elem->unk20 = val;
        }
        
        if (val != arg1) {
            i++;
            if (i < count) {
                continue;
            }
            return 0;
        }
        
        base = container->base;
        return *(Element**)((u8*)base + i4);
    }
}
