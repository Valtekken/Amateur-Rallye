extern void func_002C2910(void);
extern void func_002C1C80(void*,s32);
extern void D_002AD390(void*);
extern u32 D_004815E8,D_00481660;
void func_002C27E0(void*p,s32 f){
 *(u32*)p=(u32)&D_004815E8;
 func_002C2910();
 func_002C1C80((char*)p+0x1C,2);
 *(u32*)p=(u32)&D_00481660;
 if(f&1)D_002AD390(p);
}
