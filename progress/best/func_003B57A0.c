void func_003B57A0(void *arg1, void *arg2, void *arg3, void *arg4) {
    void *callback_obj;
    int (*callback)(void *, s32 *);
    s16 offset;
    s32 sp0;
    s32 sp4;
    int dummy;
    
    callback_obj = *(void **)((char *)arg4 + 0x08);
    callback = *(int (**)(void *, s32 *))((char *)callback_obj + 0x94);
    offset = *(s16 *)((char *)callback_obj + 0x90);
    
    dummy = callback((char *)arg4 + offset, &sp0);
    *(s32 *)((char *)arg3 + 0x18) = *(s32 *)(*(void **)((char *)arg2 + 0x18) + (sp0 << 2));
    
    callback_obj = *(void **)((char *)arg4 + 0x08);
    callback = *(int (**)(void *, s32 *))((char *)callback_obj + 0x94);
    offset = *(s16 *)((char *)callback_obj + 0x90);
    
    dummy = callback((char *)arg4 + offset, &sp4);
    *(s32 *)((char *)arg3 + 0x1C) = *(s32 *)(*(void **)((char *)arg2 + 0x18) + (sp4 << 2));
}
