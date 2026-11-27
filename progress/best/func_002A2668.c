extern void **func_001E6D58(void);
extern void *D_002AD408(int);
extern void *func_002A28E8(void *);
extern void *func_002A2D60(void *);
extern void *func_0026AAC8(void *);
extern void *func_0026B070(void *);
extern void *func_0026B218(void *);
extern void *func_001E6E48(void *);
extern void func_001C4898(void *, void *, void *);
extern void func_001D4040(void *, const char *);
extern char D_0047C528[];
extern char D_0047A088[];

void func_002A2668(void) {
    void *sp10;
    void *sp14;
    void *sp18;
    void *sp1C;
    void *sp20;
    void *sp24;
    void *sp28;
    char sp0[16];
    void **vec;
    void **end;
    void **cap;
    void *slot;
    void *obj;

    vec = *func_001E6D58();

    obj = func_002A28E8(D_002AD408(0x70));
    sp10 = obj;
    end = (void **)vec[1];
    cap = (void **)vec[2];
    slot = &sp10;
    if (end != cap) {
        if (end != 0) { *end = obj; }
        vec[1] = (void **)((char *)vec[1] + 4);
    } else {
        func_001C4898(vec, end, slot);
    }

    obj = func_002A2D60(D_002AD408(0x18));
    sp14 = obj;
    end = (void **)vec[1];
    cap = (void **)vec[2];
    slot = &sp14;
    if (end != cap) {
        if (end != 0) { *end = obj; }
        vec[1] = (void **)((char *)vec[1] + 4);
    } else {
        func_001C4898(vec, end, slot);
    }

    obj = func_0026AAC8(D_002AD408(0x5C));
    sp18 = obj;
    end = (void **)vec[1];
    cap = (void **)vec[2];
    slot = &sp18;
    if (end != cap) {
        if (end != 0) { *end = obj; }
        vec[1] = (void **)((char *)vec[1] + 4);
    } else {
        func_001C4898(vec, end, slot);
    }

    obj = D_002AD408(0xC);
    func_001D4040(sp0, D_0047C528);
    sp1C = obj;
    ((int *)obj)[0] = *(int *)sp0;
    ((char **)obj)[1] = D_0047A088;
    end = (void **)vec[1];
    cap = (void **)vec[2];
    slot = &sp1C;
    if (end != cap) {
        if (end != 0) { *end = obj; }
        vec[1] = (void **)((char *)vec[1] + 4);
    } else {
        func_001C4898(vec, end, slot);
    }

    obj = func_0026B070(D_002AD408(0x28));
    sp20 = obj;
    end = (void **)vec[1];
    cap = (void **)vec[2];
    slot = &sp20;
    if (end != cap) {
        if (end != 0) { *end = obj; }
        vec[1] = (void **)((char *)vec[1] + 4);
    } else {
        func_001C4898(vec, end, slot);
    }

    obj = func_0026B218(D_002AD408(0x44));
    sp24 = obj;
    end = (void **)vec[1];
    cap = (void **)vec[2];
    slot = &sp24;
    if (end != cap) {
        if (end != 0) { *end = obj; }
        vec[1] = (void **)((char *)vec[1] + 4);
    } else {
        func_001C4898(vec, end, slot);
    }

    obj = func_001E6E48(D_002AD408(0x64));
    sp28 = obj;
    end = (void **)vec[1];
    cap = (void **)vec[2];
    slot = &sp28;
    if (end != cap) {
        if (end != 0) { *end = obj; }
        vec[1] = (void **)((char *)vec[1] + 4);
    } else {
        func_001C4898(vec, end, slot);
    }
}
