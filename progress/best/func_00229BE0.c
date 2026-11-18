extern void func_002B2028(void *);
extern void *D_002AD408(s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);

void func_00229C98(void **arg0) {
    void *node = *arg0;
    void *next = *(void **)((u8 *)node + 4);
    void *prev = *(void **)node;
    *(void **)next = prev;
    *(void **)((u8 *)prev + 4) = next;
    func_002B2028(node);
}

void func_00229BE0(void *arg0, void *arg1) {
    void *newnode = D_002AD408(0xC);
    *(f32 *)newnode = *(f32 *)arg1;
    *(f32 *)((u8 *)newnode + 4) = *(f32 *)((u8 *)arg1 + 4);
    *(f32 *)((u8 *)newnode + 8) = *(f32 *)((u8 *)arg1 + 8);
    void *list = *(void **)((u8 *)arg0 + 4);
    void *result = func_002B1FC0(0xC);
    if (result == 0) {
        result = func_003D2910(0xC);
    }
    void *inner = (u8 *)result + 8;
    if (inner != 0) {
        *(void **)((u8 *)result + 8) = newnode;
    }
    *(void **)result = list;
    *(void **)((u8 *)result + 4) = *(void **)((u8 *)list + 4);
    **(void ***)((u8 *)list + 4) = result;
    *(void **)((u8 *)list + 4) = result;
}
