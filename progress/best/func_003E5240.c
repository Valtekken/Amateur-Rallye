/* func_003E5240: with locals to grow stack */ 
s32 D_0043AF40;

void func_003E0EF0(s32, s32, s32);

s32 func_003E5240(s32 arg0) {
    s32 var_5 = arg0;
    s32 temp_18 = var_5;
    s32 var_6 = 0;
    s32 local_10 = 0;
    s32 local_14 = 0;
    
    if (var_5 != 0) {
        var_6 = 0;
        if ((*(s32 *)0x10002010 & 0x80004000) == 0x80000000) {
            do {
                var_6 += 1;
                if (var_6 >= 0x1389) {
                    func_003E0EF0(local_10, var_5, var_6);
                    var_6 = 0;
                }
                var_5 = 0x80000000;
            } while ((*(s32 *)0x10002010 & 0x80004000) == 0x80004000);
        }
        /* *(s32 *)0x10002000 = 0x40000000 */;
    }
    
    return 0;
}
