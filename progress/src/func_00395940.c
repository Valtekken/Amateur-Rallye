extern void func_003A3170(s32,s32);
long long *func_00395940(register long long *a, register long long *b, register long long *c, register s32 d, register s32 e) {
 s32 count = b-a;
 while(count>0) { c--; b--; func_003A3170((s32)c,(s32)b); count--; }
 return c;
}
