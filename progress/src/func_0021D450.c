typedef s32 M2C_UNK;
typedef struct { char pad[0x14]; } S20;
#define F(e,t,o) (*(t)((s8*)(e)+(o)))
M2C_UNK D_002AD390(void *);
M2C_UNK func_002106B0(void *, M2C_UNK);
M2C_UNK func_002B2028(u32);
extern u32 D_0040E618[];

void func_0021D450(void *arg0, s32 arg1) {
    s32 temp_3;
    u32 temp_19, temp_4, var_17, next;
    S20 *var_16;
    void *var_4;

    temp_19 = F(arg0, u32 *, 4);
    var_17 = F(arg0, u32 *, 0);
    while (var_17 < temp_19) {
        var_4 = F(var_17, void **, 0x54);
        D_002AD390(var_4);
        next = var_17 + 0x58;
        if (var_17 != 0) {
            var_16 = (S20*)(var_17 + 0x3C);
            while (var_17 != (u32)var_16) {
                var_16--;
                D_002AD390(F(var_16, void **, 0x10));
                func_002106B0((char*)var_16 + 0xC, 2);
            }
        }
        var_17 = next;
    }
    temp_3 = (s32) ((F(arg0, s32 *, 8) - (s32)F(arg0, u32 *, 0)) * 0xBA2E8BA3) >> 3;
    temp_4 = F(arg0, u32 *, 0);
    if (temp_3 != 0) {
        if ((temp_3 * 0x58) != 0) func_002B2028(temp_4);
        else {
            F(temp_4, u32 *, 0) = D_0040E618[-1];
            D_0040E618[-1] = temp_4;
        }
    }
    if (arg1 & 1) D_002AD390(arg0);
}
