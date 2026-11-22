extern f32 D_00426508[4];

typedef struct {
    u32 field_00;
    u32 field_04;
    u32 field_08;
    u32 field_0C;
    f32 field_14;
    f32 field_18;
    f32 field_1C;
    f32 field_20;
    f32 field_24;
    f32 field_28;
    f32 field_2C;
    f32 field_30;
    f32 field_34;
    f32 field_38;
    f32 field_3C;
    f32 field_40;
    s32 field_44;
    f32 field_48;
    f32 field_4C;
    f32 field_50;
    f32 field_54;
    f32 field_58;
    f32 field_5C;
    f32 field_60;
    s32 field_64;
    f32 field_68;
    f32 field_6C;
    f32 field_70;
} State;

State* func_002445B0(State* dst, const State* src) {
    State* dst_1c = (State*)((char*)dst + 0x1C);
    State* dst_28 = (State*)((char*)dst + 0x28);
    State* dst_34 = (State*)((char*)dst + 0x34);
    State* dst_48 = (State*)((char*)dst + 0x48);
    State* dst_54 = (State*)((char*)dst + 0x54);
    State* dst_68 = (State*)((char*)dst + 0x68);

    State* src_1c = (State*)((char*)src + 0x1C);
    State* src_28 = (State*)((char*)src + 0x28);
    State* src_34 = (State*)((char*)src + 0x34);
    State* src_48 = (State*)((char*)src + 0x48);
    State* src_54 = (State*)((char*)src + 0x54);
    State* src_68 = (State*)((char*)src + 0x68);

    dst->field_08 = 0;
    dst->field_1C = 0;
    dst_1c->field_20 = 0;
    dst_1c->field_24 = 0;
    dst->field_28 = 0;
    dst_28->field_2C = 0;
    dst_28->field_30 = 0;
    dst->field_48 = 0;
    dst_48->field_4C = 0;
    dst_48->field_50 = 0;
    dst->field_68 = 0;
    dst_68->field_6C = 0;
    dst_68->field_70 = 0;
    dst->field_00 = 0;
    dst->field_04 = 0;
    dst->field_08 = 0;
    dst->field_0C = 0;

    dst_34->field_34 = D_00426508[0];
    dst_34->field_38 = D_00426508[1];
    dst_34->field_3C = D_00426508[2];
    dst_34->field_40 = 0;
    dst_34->field_44 = -1;

    dst_48->field_48 = 0;
    dst_48->field_4C = 0;
    dst_48->field_50 = 0;

    dst_54->field_54 = D_00426508[0];
    dst_54->field_58 = D_00426508[1];
    dst_54->field_5C = D_00426508[2];
    dst_54->field_64 = -1;
    dst_54->field_60 = 0;

    dst_68->field_68 = 0;
    dst_68->field_6C = 0;
    dst_68->field_70 = 0;

    dst->field_14 = src->field_14;
    dst->field_18 = src->field_18;
    dst->field_1C = src->field_1C;
    dst_1c->field_20 = src_1c->field_20;
    dst_1c->field_24 = src_1c->field_24;
    dst->field_28 = src->field_28;
    dst_28->field_2C = src_28->field_2C;
    dst_28->field_30 = src_28->field_30;
    dst_34->field_34 = src_34->field_34;
    dst_34->field_38 = src_34->field_38;
    dst_34->field_3C = src_34->field_3C;
    dst_34->field_40 = src_34->field_40;
    dst_34->field_44 = src_34->field_44;
    dst->field_48 = src->field_48;
    dst_48->field_4C = src_48->field_4C;
    dst_48->field_50 = src_48->field_50;
    dst_54->field_54 = src_54->field_54;
    dst_54->field_58 = src_54->field_58;
    dst_54->field_5C = src_54->field_5C;
    dst_54->field_60 = src_54->field_60;
    dst_54->field_64 = src_54->field_64;
    dst->field_68 = src->field_68;
    dst_68->field_6C = src_68->field_6C;
    dst_68->field_70 = src_68->field_70;

    return dst;
}
