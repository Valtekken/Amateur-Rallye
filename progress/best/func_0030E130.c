extern void FlushCache_2(s32);
extern s32 sceSifDmaStat_2(s32);
extern s32 sceSifSetDma_2(void *, s32);
extern void func_003F9698(const char *);

extern s32 D_0042D670;
extern s32 D_0048D530;
extern char D_00484DA0[];
extern char D_00484DC0[];

s32 func_0030E130(s32 arg0, s32 arg1, s32 arg2) {
    s32 dma_chain[4];
    
    FlushCache_2(0);
    
    if (D_0042D670 != 0) {
        do {
        } while (sceSifDmaStat_2(D_0048D530) >= 0);
    }
    
    dma_chain[0] = arg0;
    D_0042D670 = 1;
    dma_chain[1] = arg1;
    dma_chain[2] = arg2;
    dma_chain[3] = 0;
    
    if (sceSifSetDma_2(dma_chain, 1) == 0) {
        func_003F9698(D_00484DA0);
        func_003F9698(D_00484DC0);
        D_0042D670 = 0;
        return -1;
    }
    
    D_0048D530 = sceSifSetDma_2(dma_chain, 1); // This is wrong - would call twice
    return 0;
}
