extern void *func_00201350(void *);

typedef struct S_D_0047CCF8 {
    u32 unk_00;
    u32 unk_04;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    float unk_1C;
    u32 unk_20;
    u32 unk_24;
    float unk_28;
    u32 unk_2C;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    u32 unk_3C;
    u32 unk_40;
    float unk_44;
    float unk_48;
    float unk_4C;
    float unk_50;
    float unk_54;
    float unk_58;
    float unk_5C;
    float unk_60;
    float unk_64;
    float unk_68;
    float unk_6C;
    float unk_70;
    float unk_74;
    float unk_78;
    u32 unk_7C;
    u32 unk_80;
    float unk_84;
    s32 unk_88;
    s32 unk_8C;
} S_D_0047CCF8;

typedef struct S_Target_Data {
    float unk_00;
    float unk_04;
    float unk_08;
    float unk_0C;
} S_Target_Data;

void func_00291488(S_D_0047CCF8 *obj) {
    if (obj->unk_14 != 0) {
        void *v_func = *(void **)((u8 *)obj + 0x0C); // Not sure if it's a vtable call or just a function pointer
        // The assembly says:
        // lw $2, 0x14($16) -> $2 = obj->unk_14
        // beqz $2, .L002914FC
        // jal func_00201350 -> calling func_00201350
        // lw $3, 0xC($16)  -> $3 = obj->unk_0C
        // sll $3, $3, 2
        // addu $2, $2, $3  -> $2 = obj->unk_14 + (obj->unk_0C * 4)
        // lw $4, 0x0($2)   -> $4 = data at $2
        
        void *vfunc_ptr = func_00201350(obj); 
        // Wait, the assembly is:
        // lw $2, 0x14($16)
        // beqz $2, .L002914FC
        // jal func_00201350
        // lw $3, 0xC($16)
        // sll $3, $3, 2
        // addu $2, $2, $3
        // lw $4, 0x0($2)
        
        // It looks like:
        // if (obj->unk_14 != 0) {
        //    void *v = func_00201350(obj);
        //    S_Target_Data *data = (S_Target_Data *)((u8 *)v + (obj->unk_0C * 4));
        //    obj->unk_1C = data->unk_0C; // Wait, lwc1 $f1, 0xC0($4)
        //    ...
        // }
    }
}
