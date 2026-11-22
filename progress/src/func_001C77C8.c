typedef struct { u8 data[48]; } Item;
Item *func_001C77C8(Item *p, Item *e, Item *q) {
    while (p != e) {
        if (q) *q = *p;
        p++;
        q++;
    }
    return q;
}
