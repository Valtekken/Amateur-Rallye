extern s32 func_003D4D70(s32);
extern s32 func_003D4EA0(void **);
extern s32 func_003D6F68(s32, s8);
extern s8 func_003DA6B8(s32);
extern u8 D_0048BD29[263];

typedef struct {
    void *field_0;
    s32 field_4;
    s32 field_8;
    s64 field_10;
    u8 pad_18[2];
    u8 field_1A;
} Struct_003D3680;

void **func_003D3680(void **arg0, s8 *arg1) {
    Struct_003D3680 *obj = (Struct_003D3680 *)*arg0;
    s8 *buf = arg1;
    s8 *buf_start = buf;
    s32 count = obj->field_8;
    u8 flags = obj->field_1A;
    s32 var_4;
    s32 field_0;
    s32 ch;
    u8 table_val;
    
    obj->field_8 = 0;
    
    if (flags != 0) {
        obj->field_1A = flags | 0x2;
    } else {
        if (obj->field_4 != 0) {
            func_003D4D70(obj->field_4);
        }
        var_4 = 1;
        if ((obj->field_10 & 1) != 0) {
            var_4 = func_003D4EA0(arg0);
        }
        if (var_4 != 0) {
            field_0 = (s32)obj->field_0;
            while (1) {
                ch = func_003DA6B8(field_0);
                if (ch == -1) {
                    obj->field_1A |= 0x1;
                    break;
                }
                table_val = D_0048BD29[(u8)ch];
                if ((table_val & 0x8) != 0) {
                    func_003D6F68(field_0, ch);
                    break;
                }
                if (count == 1) {
                    func_003D6F68(field_0, ch);
                    break;
                }
                *buf = ch;
                count--;
                buf++;
            }
            if (buf == buf_start) {
                obj->field_1A |= 0x2;
            }
        }
    }
    
    *buf = 0;
    return arg0;
}
