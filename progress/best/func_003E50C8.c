extern s32 func_003E0EF0(s32, s32);
extern s32 D_0043AF40[];
s16 func_003E50C8(void *arg0, s32 arg1) {
    s32 temp16 = arg1 << 26;
    s32 var18 = 0, var7 = 0;
    s32 val, ret;
    s64 v64, t;
    if ((*(volatile s32 *)0x10002010 & 0x80004000) == 0x80000000) {
        do {
            if (var7++ >= 5001) { func_003E0EF0(*(s32 *)((char *)arg0 + 0x858), arg1); var7 = 0; }
        } while ((*(volatile s32 *)0x10002010 & 0x80004000) == 0x80000000);
    }
    val = temp16 | 0x30000000;
    *(volatile s32 *)0x10002000 = val;
    *(s32 *)((char *)arg0 + 0x818) = D_0043AF40[val >> 28];
    v64 = *(volatile s64 *)0x10002000;
    if ((s32)v64 < 0) {
        do {
            if (var18++ >= 5001) { func_003E0EF0(*(s32 *)((char *)arg0 + 0x858), 0x80000000); var18 = 0; }
            v64 = *(volatile s64 *)0x10002000;
        } while ((s32)v64 < 0);
    }
    t = *(volatile s64 *)0x10002030;
    *(s32 *)((char *)arg0 + 0x838) = (s32)t;
    *(s32 *)((char *)arg0 + 0x83C) = t < 0 ? (-(*(volatile s32 *)0x10002020 & 0x1F) & 0x1F) : 32;
    *(s32 *)((char *)arg0 + 0x11C) = ((s64)(s32)v64 == 0);
    ret = (s16)((u32)v64 & 0xFFFF);
    return ret;
}
