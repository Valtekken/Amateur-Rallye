void *D_002AD408(s32);
s32 func_001D3BF0(void*);
s32 func_001D3D18(s32,s32);
s32 func_001D4280(void*,s32*);
s32 func_001D4420(void*,s32);
void *func_001D4610(void*);
extern s32 D_00475E78;
void *func_001D40C0(void *arg0) {
 volatile char pad[16];
 void *temp_2;
 *(s32**)arg0 = (s32*)func_001D3BF0(D_002AD408(0x10));
 temp_2 = D_002AD408(0xC);
 *(void**)((char*)arg0+4) = temp_2;
 *(s32*)((char*)temp_2+4) = 0;
 *(s32*)((char*)temp_2+8) = 0;
 *(s32*)temp_2 = 0;
 *(void**)((char*)arg0+8) = func_001D4610(D_002AD408(0x3E88));
 func_001D4420(*(void**)((char*)arg0+4), 0x1000);
 func_001D3D18((s32)*(s32**)arg0, 0x28000);
 func_001D4280(arg0, &D_00475E78);
 return arg0;
}
