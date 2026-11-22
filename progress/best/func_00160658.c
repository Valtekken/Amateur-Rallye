#include "context.h"

extern void func_001D4040(void *, const char *);
extern void func_00193B60(void);
extern s32 func_00192398(void *);
extern void *D_002AD5A8(void);
extern void func_00262C98(void *);
extern void func_00262E10(void *, void *);
extern void func_003FA310(void *, void *, void *);
extern void *D_002AD408(void);
extern void func_00262988(void *, void *);
extern void func_00262B68(void *, void *, void *, void *, void *);
extern void func_003F9698(void *, s32);
extern void func_00262838(void);
extern void func_002624A0(void *, void *, f32, f32);

extern u32 D_0040E8A8[];
extern u32 D_004267B0[];
extern char D_0044EE48[];
extern char D_0044EE60[];
extern char D_0044EE68[];
extern char D_0044EEB0[];
extern u32 jtbl_0044EEC0[];
extern u32 jtbl_0044EF40[];
extern u32 D_0044F1D0[];
extern u32 D_0044F248[];
extern u32 D_0044F2C0[];
extern u32 D_0044F338[];
extern u32 D_0044F3B0[];
extern u32 D_0044F428[];
extern u32 D_0044F4A0[];
extern u32 D_0044F518[];
extern u32 D_00473600[];
extern u32 D_00475928[];

typedef struct {
    u32 field_0x0;
    s32 field_0x4;
    void *field_0x8;
    void *field_0xC;
    s32 field_0x10;
    f32 field_0x14;
    f32 field_0x18;
    f32 field_0x1C;
    f32 field_0x20;
    f32 field_0x24;
    f32 field_0x28;
    f32 field_0x2C;
    f32 field_0x30;
    f32 field_0x34;
    f32 field_0x38;
    f32 field_0x3C;
    f32 field_0x40;
    s32 field_0x44;
    s32 field_0x48;
    s32 field_0x4C;
    s32 field_0x50;
    s32 field_0x54;
    s32 field_0x58;
    s32 field_0x5C;
    s32 field_0x60;
    s32 field_0x64;
    s32 field_0x68;
    s32 field_0x6C;
    s32 field_0x70;
    s32 field_0x74;
    s32 field_0x78;
    s32 field_0x7C;
    s32 field_0x80;
    s32 field_0x84;
    s32 field_0x88;
    s32 field_0x8C;
    s32 field_0x90;
    s32 field_0x94;
    s32 field_0x98;
    s32 field_0x9C;
    s32 field_0xA0;
    s32 field_0xA4;
    s32 field_0xA8;
    s32 field_0xAC;
    s32 field_0xB0;
    s32 field_0xB4;
    s32 field_0xB8;
    s32 field_0xBC;
    s32 field_0xC0;
} VehicleSoundStruct;

void func_00160658(VehicleSoundStruct *a, void *b) {
    u32 stack[0x6C];
    u32 *sp = stack;
    u32 *saved_regs = &stack[0x40];
    
    u32 v17 = (u32)b;
    u32 v18 = (u32)a;
    
    func_001D4040(sp, D_0044EE48);
    
    u32 *ptr = (u32 *)sp;
    u32 val = ptr[0];
    u32 *a_ptr = (u32 *)a;
    
    a_ptr[0] = (u32)-1;
    a_ptr[1] = val;
    a_ptr[2] = (u32)D_00473600;
    a_ptr[0x17] = 0;
    a_ptr[0x18] = 0;
    a_ptr[0x19] = 0;
    a_ptr[0x1A] = 0;
    a_ptr[0x1B] = 0;
    a_ptr[0x1C] = 0;
    a_ptr[0x1D] = 0;
    a_ptr[0x1E] = 0;
    
    u32 *field_7C = &a_ptr[0x1F];
    for (int i = 3; i != -1; i--) {
        field_7C[i] = 0;
    }
    
    a_ptr[0x15] = v17;
    a_ptr[0x27] = 0;
    s32 v20 = 0x17;
    a_ptr[0x2A] = (v17 < 2) ? 1 : 0;
    
    func_00193B60();
    s32 v22 = -1;
    
    u32 v5 = a_ptr[0x15];
    func_00192398((void *)v5);
    a_ptr[0x28] = (s32)v5;
    
    void *v2 = D_002AD5A8();
    u32 *v2_ptr = (u32 *)v2;
    v2_ptr[0] = 0x18;
    u32 v21 = (u32)v2 + 0x10;
    u32 v16 = v21;
    
    for (int i = 0x17; i != -1; i--) {
        func_00262C98((void *)v16);
        v16 += 0x70;
    }
    
    a_ptr[0x4] = v21;
    s32 v20_new = 0;
    
    f32 f20_val = 0.05f;
    s32 v8 = 1;
    s32 v2_saved = a_ptr[0x28];
    u32 v4 = a_ptr[0x28];
    u32 *D_004267B0_ptr = D_004267B0;
    u32 *D_00475928_ptr = D_00475928;
    u32 v22_new = 0;
    u32 v9 = 0;
    u32 v7 = (u32)D_00475928 + 0x18;
    
    for (int v20_loop = 0; v20_loop < 0x18; v20_loop++) {
        u32 *field_10 = (u32 *)a_ptr[0x4];
        u32 *D_00475928_base = D_00475928;
        u32 *v3_ptr = field_10 + v22_new / 4;
        u32 *v6_ptr = D_00475928_base + v9 / 4;
        
        u32 v2_val = v3_ptr[3];
        v2_val |= 0x40;
        v3_ptr[3] = v2_val;
        
        u32 v16_val = (u32)field_10 + v22_new;
        u32 v5_val = v6_ptr[1];
        
        u32 stack_vals[4];
        stack_vals[0] = v7;
        stack_vals[1] = v8;
        stack_vals[2] = v9;
        stack_vals[3] = 0x42000000;
        
        func_001D4040((void *)v16_val, (const char *)ptr);
        func_00262E10(ptr, (void *)v16_val);
        
        v9 = stack_vals[2];
        v8 = stack_vals[1];
        v7 = stack_vals[0];
        
        u32 *D_00475928_ptr2 = D_00475928;
        u32 *field_10_2 = (u32 *)a_ptr[0x4];
        u32 *v4_ptr = D_00475928_ptr2 + (v9 + 0xC) / 4;
        u32 *v3_ptr2 = field_10_2 + v22_new / 4;
        
        f32 f0_val = *(f32 *)v4_ptr;
        v3_ptr2[2] = v7;
        *(f32 *)&v3_ptr2[10] = f0_val;
        
        u32 *field_10_3 = (u32 *)a_ptr[0x4];
        f32 f0_val2 = *(f32 *)v4_ptr;
        u32 *v2_ptr2 = field_10_3 + v22_new / 4;
        *(f32 *)&v2_ptr2[11] = f0_val2;
        v2_ptr2[2] = v7;
        
        u32 v7_val = v7;
        f32 f2_val = *(f32 *)(v7_val - 8);
        
        if (f20_val <= f2_val) {
            f32 f0_val3 = *(f32 *)(&v3_ptr2[8]);
            if (f0_val3 < f20_val) {
                u32 v2_global = D_004267B0[0];
                v2_global += 1;
                D_004267B0[0] = v2_global;
            }
        } else {
            f32 f1_val = 0.05f;
            if (f2_val < f1_val) {
                *(f32 *)(&v3_ptr2[8]) = f2_val;
                f32 f0_val4 = *(f32 *)(&v3_ptr2[8]);
                if (f1_val <= f0_val4) {
                    u32 v2_global = D_004267B0[0];
                    v2_global -= 1;
                    D_004267B0[0] = v2_global;
                }
                *(f32 *)(&v3_ptr2[8]) = f2_val;
            }
        }
        
        v3_ptr2[2] = v7_val;
        u32 *field_10_4 = (u32 *)a_ptr[0x4];
        u32 v3_val = v7_val;
        u32 *v2_ptr3 = field_10_4 + v22_new / 4;
        v2_ptr3[7] = v3_val;
        
        if (a_ptr[0x2A] == 0) {
            if (v2_val == 0) {
                v20_loop++;
            } else {
                u32 *field_10_5 = (u32 *)a_ptr[0x4];
                u32 *v4_val = (u32 *)(v21 + v22_new);
                if (v4_val[6] != 0) {
                    f32 f0_val5 = *(f32 *)(&v4_val[8]);
                    if (f20_val <= f0_val5) {
                        u32 v2_global = D_004267B0[0];
                        v2_global += 1;
                        D_004267B0[0] = v2_global;
                    }
                }
                u32 *global_ptr = (u32 *)0x001067AC;
                global_ptr[0] += 1;
                v4_val[6] = v7_val;
            }
        } else {
            s32 v2_check = v20_loop - 0xF;
            if (v2_check < 5) {
                v20_loop++;
            } else {
                u32 *field_10_6 = (u32 *)a_ptr[0x4];
                u32 *v4_ptr2 = field_10_6 + v22_new / 4;
                if (v4_ptr2[6] != 0) {
                    f32 f0_val6 = *(f32 *)(&v4_ptr2[8]);
                    if (f20_val <= f0_val6) {
                        u32 v2_global = D_004267B0[0];
                        v2_global += 1;
                        D_004267B0[0] = v2_global;
                    }
                }
                u32 *global_ptr = (u32 *)0x001067AC;
                global_ptr[0] += 1;
                v4_ptr2[6] = v7_val;
            }
        }
        
        v22_new += 0x70;
        v7 += 0x1C;
        v9 += 0x1C;
    }
    
    a_ptr[0x2F] = 0;
    a_ptr[0x5] = 0;
    
    if (a_ptr[0x2C] != 0) {
        u32 *jtbl = jtbl_0044EEC0;
        u32 idx = a_ptr[0x28];
        u32 target = jtbl[idx];
        goto *target;
    }
    
    return;
}
