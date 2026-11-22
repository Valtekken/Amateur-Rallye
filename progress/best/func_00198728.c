typedef struct {
    void *ptr;        // +0x0
    f32 f4;           // +0x4
    f32 f8;           // +0x8
    f32 fC;           // +0xC
    f32 f10;          // +0x10
    f32 f14;          // +0x14
    f32 f18;          // +0x18
    f32 f1C;          // +0x1C
    f32 f20;          // +0x20
    f32 f24;          // +0x24
    f32 f28;          // +0x28
    f32 f2C;          // +0x2C
    f32 f30;          // +0x30
    f32 f34;          // +0x34
    f32 f38;          // +0x38
} Struct_198728;

typedef struct {
    s32 unk_174[2];   // +0x174, +0x178
    f32 f68;          // +0x68
    f32 f70;          // +0x70
} Struct_198728_Ptr;

void func_00198728(Struct_198728 *arg0) {
    f32 f2 = arg0->f34;
    f32 f1 = arg0->f24;
    if (f1 < f2) {
        f32 f3 = arg0->f38;
        if (f3 < arg0->f30) {
            f32 ratio = f2 / f1;
            u32 bits = *(u32*)&ratio;
            u32 sign = bits >> 31;
            u32 exp = (bits >> 23) & 0xFF;
            u32 mantissa = bits & 0x7FFFFF;
            
            exp -= 0x7F;
            s32 exp_signed = (s32)exp;
            u32 neg_exp_mask = ~(exp_signed >> 31);
            u32 shift = 0x1F - exp;
            
            u32 recip_bits = ((mantissa | 0x800000) << 8) >> shift;
            recip_bits &= neg_exp_mask;
            
            u32 mantissa_check = (mantissa << 8) & ((1u << shift) - 1);
            if (mantissa_check == 0) {
                recip_bits ^= sign;
                recip_bits -= sign;
            }
            
            f32 recip = (f32)(s32)recip_bits;
            
            f32 f0 = arg0->f2C * recip;
            arg0->f34 = arg0->f28;
            arg0->f38 = f3 + f0;
            
            Struct_198728_Ptr *ptr = (Struct_198728_Ptr*)arg0->ptr;
            s32 diff = ptr->unk_174[1] - ptr->unk_174[0];
            s32 count = (diff * 0xAAAAAAAB) >> 4;
            
            if (count > 0) {
                s32 i = count;
                s32 offset = 0;
                void *base = (void*)ptr->unk_174[0];
                do {
                    i--;
                    void *elem = (void*)((char*)base + offset);
                    f32 val = *(f32*)((char*)elem + 0x10);
                    offset += 0x30;
                    *(f32*)((char*)elem + 0x10) = val - (arg0->f2C * recip);
                } while (i != 0);
            }
        }
    }
    
    f32 f2_2 = arg0->f18;
    f32 f1_2 = arg0->f8;
    if (f1_2 < f2_2) {
        f32 f5 = arg0->f1C;
        if (f5 < arg0->f14) {
            f32 ratio = f2_2 / f1_2;
            u32 bits = *(u32*)&ratio;
            u32 sign = bits >> 31;
            u32 exp = (bits >> 23) & 0xFF;
            u32 mantissa = bits & 0x7FFFFF;
            
            exp -= 0x7F;
            s32 exp_signed = (s32)exp;
            u32 neg_exp_mask = ~(exp_signed >> 31);
            u32 shift = 0x1F - exp;
            
            u32 recip_bits = ((mantissa | 0x800000) << 8) >> shift;
            recip_bits &= neg_exp_mask;
            
            u32 mantissa_check = (mantissa << 8) & ((1u << shift) - 1);
            if (mantissa_check == 0) {
                recip_bits ^= sign;
                recip_bits -= sign;
            }
            
            f32 recip = (f32)(s32)recip_bits;
            
            f32 f0 = arg0->f10 * recip;
            arg0->f18 = arg0->fC;
            arg0->f1C = f5 + f0;
            
            Struct_198728_Ptr *ptr = (Struct_198728_Ptr*)arg0->ptr;
            f32 f2_3 = ptr->f68;
            f32 f1_3 = ptr->f70;
            f32 f5_2 = f2_3 - f0;
            f32 f0_div = f0 / f2_3;
            
            f32 f4 = 5000.0f;
            f32 f3 = 1.0f - f0_div;
            
            f32 f6 = f4;
            if (f4 < f5_2) {
                f6 = f5_2;
            }
            
            f32 f0_clamp = 1000.0f;
            ptr->f68 = f6;
            f32 f1_new = f1_3 * f3;
            if (f0_clamp < f1_new) {
                f0_clamp = f1_new;
            }
            ptr->f70 = f0_clamp;
        }
    }
}
