extern s32 func_0011E528(void*);
extern s32 func_001E4280(void);
extern void func_001D4040(void*,const char*);
extern s32 func_001E3598(s32,void*);
extern void func_0011E650(void*,s32,s32);
extern void func_0012C558(void*);
extern void func_0012D1D8(void*);
extern void func_0012C038(void*);
extern void func_0011E278(void*,s32);
extern void func_0011DFB8(void*);
extern char D_004477F0[];
typedef struct { char pad[0xC]; void *c; char pad2[0x4C]; s32 f5C; char pad3[8]; s32 f68; } A;

void func_0012C1E0(A *arg0){
    s32 kb[4];
    if (func_0011E528(arg0->c) == 0) {
        s32 k = func_001E4280();
        func_001D4040(kb, D_004477F0);
        if (func_001E3598(k, kb) != 0)
            func_0011E650(arg0->c, 4, 0);
        else
            func_0011E650(arg0->c, 1, 0);
        func_0012C558(arg0);
        func_0012D1D8(arg0);
        if (arg0->f68 != 0) func_0012C038(arg0);
        if (arg0->f5C != 0) func_0011E278(arg0->c, 0xE);
        func_0011DFB8(arg0->c);
        arg0->f68 = 0;
    }
}
