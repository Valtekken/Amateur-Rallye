typedef struct {
    float x, y, z, w;
} V4;

typedef struct {
    s32 pad0[8];
    V4 v0;
    V4 v1;
    V4 v2;
    V4 v3;
    s32 pad64[4];
    s64 u78;
    s32 pad80[3];
    s32 u88;
} T2;

extern void *D_002AD408(u32);
extern void *func_0021E290(s32);
extern void *func_00205BF8(s32);
extern void func_0021E540(void *, void *, s32);
extern void func_001D4040(void *, void *);
extern void func_0021E748(void *, void *);
extern void func_0021E740(void *, s32);

extern char D_0044BC38[], D_0044BD40[], D_0044BD60[], D_0044BD70[];
extern u32 D_0044DD18[];

void func_00111718(void *arg0) {
    T2 *p;
    void *r17;
    void *r16;
    s32 count;
    s32 limit;
    s32 val_1bc;
    s32 val_entry_0;
    s32 val_res;
    s32 val_xor;
    s32 val_sll;
    s32 val_slt;
    s32 val_mult;
    s32 val_final;
    s32 sp0;

    r17 = func_0021E290(D_002AD408(0x7C));
    p = func_00205BF8(D_002AD408(0x90));
    
    p->u88++;
    p->u78 &= -4;
    p->pad64[0] = 2;

    func_0021E540(r17, p, -2);
    
    func_001D4040(&sp0, arg0);
    func_0021E748(r17, &sp0);
    func_0021E740(r17, 0);
    
    // Hand-coding the logic to match assembly flow
    // ...
}
