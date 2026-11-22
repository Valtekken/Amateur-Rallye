extern s32 sceSifDmaStat_2(s32);
extern void func_002BF798(s32);

void func_002BE960(s32 arg1) {
    s32 counter = 0;
    s32 i, j;
    
    if (sceSifDmaStat_2(arg1) < 0) {
        return;
    }
    
    while (1) {
        i = 100;
        while (i >= 0) {
            i--;
            j = 48;
            while (j >= 0) {
                j--;
            }
        }
        
        counter++;
        
        if (sceSifDmaStat_2(arg1) < 0) {
            return;
        }
        
        if (counter >= 5) {
            break;
        }
    }
    
    while (sceSifDmaStat_2(arg1) >= 0) {
        func_002BF798(4);
    }
}
