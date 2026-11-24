/* identical to func_00397EF0 (matched), with its names changed by decompdecomp */
extern void func_002C6AF8(s32,s32);
long long *func_003991B8(register long long *a, register long long *b, register long long *c, register s32 d, register s32 e) {
 s32 count = b-a;
 while(count>0) { c--; b--; func_002C6AF8((s32)c,(s32)b); count--; }
 return c;
}
