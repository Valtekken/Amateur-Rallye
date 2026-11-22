typedef struct Obj {
    int id;
    int pad4[2];
    void *vtable;
} Obj;

extern void *D_00486D18;
extern void D_002AD390(Obj *);

void func_003805A0(Obj *self, int arg1) {
    self->vtable = (void *)&D_00486D18;
    if (self->id >= 0) {
        self->id = -1;
    }
    if ((arg1 & 1)) {
        D_002AD390(self);
        return;
    }
    return;
}
