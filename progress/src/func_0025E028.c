extern void func_0025E0D8(void *, void *); extern void func_0025E298(void *); extern void func_0025E338(void *); extern void func_0025E4A0(void *); extern void func_0025E670(void *); extern void func_0025E708(void *);
void func_0025E028(void *arg0, void *arg1) {
 s32 n = (*(s32 *)((u8 *)arg1 + 0x14) - *(s32 *)((u8 *)arg1 + 0x10)) * (s32)0xAAAAAAAB >> 2;
 if (n > 0) { s32 i = 0; s32 cnt = n; do {
 cnt--; func_0025E0D8(arg0, (void *)((u8 *)*(void **)((u8 *)arg1 + 0x10) + i)); i += 0xC;
 func_0025E338(arg0); func_0025E4A0(arg0); func_0025E670(arg0); func_0025E298(arg0); func_0025E708(arg0);
 } while (cnt != 0); }
}
