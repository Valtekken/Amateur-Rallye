extern void func_0040AF58(void);
extern void func_0040AFA0(s32);

#define MASK 0x0FFFFFFF

void func_003E63C8(void *arg0, void *arg1)
{
    u8 *sp0 = (u8 *)arg0;
    u8 *a1 = (u8 *)arg1;
    s32 sp4;
    s32 sp8;
    s32 var_18;
    s32 var_3;
    s32 var_5;
    s32 var_16;
    s32 var_17;
    s32 var_20;
    s32 var_21;
    s32 var_23;
    s32 var_30;
    s32 temp_4;

    var_18 = *(s32 *)(a1 + 0x0) & MASK;
    sp8 = *(s32 *)(sp0 + 0xD8) & MASK;

    if (*(s32 *)(sp0 + 0x174) != 3) {
        temp_4 = *(s32 *)(sp0 + 0xE0);
        var_3 = temp_4;
        if (temp_4 == 0) goto block_4;
        var_30 = (temp_4 >> 4) * 0xC0;
        var_21 = (*(s32 *)(a1 + 0x10) >> 1) * 0x180;
        sp4 = 2;
        var_20 = var_21 >> 4;
    } else {
        var_3 = *(s32 *)(sp0 + 0xE0);
    block_4:
        var_21 = *(s32 *)(a1 + 0x10) * 0x180;
        var_20 = var_21 >> 4;
        if (var_3 != 0) var_30 = (var_3 >> 4) * 0x180;
        else var_30 = var_21;
        sp4 = 1;
    }

    var_5 = 0;
    if (sp4 != 0) {
        do {
            var_17 = sp8;
            var_16 = 0;
            if (*(s32 *)(a1 + 0xC) > 0) {
                var_23 = var_5 + 1;
                do {
                    func_0040AF58();
                    *(volatile s32 *)0x1000D480 = 0;
                    *(volatile s32 *)0x1000D410 = var_18;
                    *(volatile s32 *)0x1000D420 = var_20;
                    *(volatile s32 *)0x1000D400 = 0x101;
                    var_16 += 1;
                    func_0040AFA0(0x1000D400);
                loop_14:
                    if (*(volatile s32 *)0x1000D400 & 0x100) goto loop_14;
                    func_0040AF58();
                    *(volatile s32 *)0x1000D080 = 0;
                    *(volatile s32 *)0x1000D010 = var_17;
                    *(volatile s32 *)0x1000D020 = var_20;
                    *(volatile s32 *)0x1000D000 = 0x100;
                    func_0040AFA0(0x1000D000);
                loop_16:
                    if (*(volatile s32 *)0x1000D000 & 0x100) goto loop_16;
                loop_18:
                    if (*(volatile s32 *)0x1000D020 != 0) goto loop_18;
                    var_17 += var_30;
                    var_18 += var_21;
                } while (var_16 < *(s32 *)(a1 + 0xC));
            } else {
                var_23 = var_5 + 1;
            }
            var_5 = var_23;
            sp8 += *(s32 *)(sp0 + 0xE4) * 0xC0;
        } while (var_5 < sp4);
    }
}
