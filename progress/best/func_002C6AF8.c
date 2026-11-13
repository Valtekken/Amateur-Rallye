extern u32 D_0040E618[];
extern u32 D_0040E658[];

struct DataHeader {
    void *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Obj {
    void *unk0;
    s32 unk4;
};

struct D_004262D0 {
    u32 *unk0;
    u32 unk4;
    u32 unk8;
    u32 *unkC;
    u32 unk10;
    u32 unk14;
    u32 *vec_begin;
    u32 *vec_end;
    u32 *vec_cap;
    struct Obj *unk24;
    u32 unk28;
    u32 unk2C;
    s32 unk30;
};

extern struct D_004262D0 D_004262D0;

struct Handle {
    u16 unk0;
    s32 unk4;
};

extern s32 func_00151930(void *);
extern void func_002B2028(void *);
extern void *func_00152720(void *, u32 *, u32 *);

struct Handle *func_002C6AF8(struct Handle *arg0, struct Handle *arg1) {
    s32 old_idx;
    u32 *unk0_arr;
    u32 *pos_arr;
    u32 handle;
    struct Obj *obj;
    s32 new_count;
    struct Obj *last_obj;
    struct DataHeader *hdr;
    struct DataHeader *last_hdr;
    struct DataHeader *val_hdr;
    void *sp_result;
    u8 *sp;
    void **sp_slot;
    void *val;
    struct DataHeader *hdr3;
    u32 **vec_end;
    u32 **vec_cap;
    u32 handle2;
    struct Obj *obj2;
    u8 pad[16];

    old_idx = arg0->unk4;
    arg0->unk0 = arg1->unk0;

    if (old_idx != arg1->unk4) {
        if (old_idx >= 0) {
            unk0_arr = D_004262D0.unk0;
            pos_arr = D_004262D0.unkC;
            handle = unk0_arr[old_idx];
            obj = &D_004262D0.unk24[handle];

            obj->unk4 -= 1;

            if (obj->unk4 == 0) {
                new_count = D_004262D0.unk30 - 1;

                if (handle != (u32)new_count) {
                    D_004262D0.unk30 = new_count;
                    last_obj = &D_004262D0.unk24[new_count];
                    hdr = (struct DataHeader *)((u8 *)obj->unk0 - 0x10);

                    hdr->unk8 -= 1;
                    if (hdr->unk8 == 0) {
                        if ((s32)((u32)hdr->unk4 + 0x10) != 0) {
                            func_002B2028(hdr);
                        } else {
                            hdr->unk0 = (void *)D_0040E618[-1];
                            D_0040E618[-1] = (u32)hdr;
                        }
                    }

                    if (obj != last_obj) {
                        last_hdr = (struct DataHeader *)((u8 *)last_obj->unk0 - 0x10);

                        if (last_hdr->unkC == 0) {
                            last_hdr->unk8 += 1;
                        } else {
                            func_00151930((void *)&last_hdr->unk8);
                        }
                        obj->unk0 = last_obj->unk0;
                    }

                    obj->unk4 = last_obj->unk4;

                    {
                        u32 pos_of_new = pos_arr[new_count];
                        unk0_arr[pos_of_new] = handle;
                        pos_arr[handle] = pos_of_new;
                    }
                }

                if (D_0040E658[3] != 0) {
                    sp_result = (void *)func_00151930((void *)D_0040E658);
                } else {
                    sp_result = (void *)((u8 *)D_0040E658 + 0x10);
                    D_0040E658[2]++;
                }

                sp_slot = &sp_result;
                *sp_slot = sp_result;

                sp = (u8 *)&sp_result;
                if (sp != (u8 *)last_obj) {
                    sp_slot[1] = NULL;

                    last_hdr = (struct DataHeader *)((u8 *)last_obj->unk0 - 0x10);
                    last_hdr->unk8 -= 1;
                    if (last_hdr->unk8 == 0) {
                        if ((s32)((u32)last_hdr->unk4 + 0x10) != 0) {
                            func_002B2028(last_hdr);
                        } else {
                            last_hdr->unk0 = (void *)D_0040E618[-1];
                            D_0040E618[-1] = (u32)last_hdr;
                        }
                    }

                    val = (void *)sp_slot[0];
                    val_hdr = (struct DataHeader *)((u8 *)val - 0x10);
                    if (val_hdr->unkC == 0) {
                        val_hdr->unk8 += 1;
                    } else {
                        func_00151930((void *)&val_hdr->unk8);
                        last_obj->unk0 = (void *)&val_hdr->unk8;
                    }
                }

                last_obj->unk4 = 0;

                hdr3 = (struct DataHeader *)((u8 *)sp_result - 0x10);
                hdr3->unk8 -= 1;
                if (hdr3->unk8 == 0) {
                    if ((s32)((u32)hdr3->unk4 + 0x10) != 0) {
                        func_002B2028(hdr3);
                    } else {
                        hdr3->unk0 = (void *)D_0040E618[-1];
                        D_0040E618[-1] = (u32)hdr3;
                    }
                }

                vec_end = &D_004262D0.vec_end;
                vec_cap = &D_004262D0.vec_cap;
                if (*vec_end == *vec_cap) {
                    func_00152720((u8 *)&D_004262D0 + 0x18, unk0_arr, &old_idx);
                } else {
                    if (*vec_end != NULL) {
                        **vec_end = old_idx;
                    }
                    *vec_end = *vec_end + 1;
                }
            }
        }

        arg0->unk4 = arg1->unk4;

        if (arg1->unk4 >= 0) {
            handle2 = unk0_arr[arg1->unk4];
            obj2 = &D_004262D0.unk24[handle2];
            obj2->unk4 += 1;
        }
    }

    return arg0;
}
