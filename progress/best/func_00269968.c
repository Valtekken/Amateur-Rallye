void func_00269968(void *arg0, s32 arg1, f32 arg2, f32 arg3) {
    s32 count;
    s32 *array;
    s32 sum;
    s32 i;
    void *obj;
    
    if (arg1 == 0) {
        func_002698B8(arg0);
    } else if (arg1 == 1) {
        func_00269808(arg0, 0);
    }
    
    *(f32 *)((u8 *)arg0 + 0x8) = arg2;
    *(f32 *)((u8 *)arg0 + 0xC) = arg3;
    
    count = *(s32 *)arg0;
    if (count <= 0) {
        return;
    }
    
    array = *(s32 **)((u8 *)arg0 + 0x10);
    sum = 0;
    i = 0;
    
    do {
        obj = *(void **)(array + i);
        if (*(s32 *)obj == 0) {
            func_00268190(obj, 0, 0);
        }
        sum += *(s32 *)((u8 *)obj + 0x10);
        i++;
    } while (i < count);
}
