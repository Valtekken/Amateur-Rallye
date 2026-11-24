#define FIELD(e,t,o) (*(t)((s8*)(e)+(o)))
s32 D_002AD408(s32); void *func_001F32E8(s32); void func_001D2CD8(s32*,s32);
void *func_001F3340(void *arg0) {
    f32 v1c, v28, v20, v24;
    void *dst = func_001F32E8(D_002AD408(0x34));
    void *s, *d;
    volatile f32 *vd;
    func_001D2CD8((s32*)((char*)dst+0x14), FIELD(arg0,s32*,0x14));
    FIELD(dst,s32*,0x18) = FIELD(arg0,s32*,0x18);
    s = (char*)arg0+0x1C; d = (char*)dst+0x1C;
    vd = (volatile f32*)d;
    v1c = FIELD(arg0,f32*,0x1C);
    v28 = FIELD(arg0,f32*,0x28);
    FIELD(d,f32*,0) = v1c;
    v20 = FIELD(s,f32*,4);
    FIELD(d,f32*,4) = v20;
    v24 = FIELD(s,f32*,8);
    vd[4] = v28 * v28;
    vd[2] = v24;
    vd[3] = v28;
    FIELD(dst,s32*,0x30) = FIELD(arg0,s32*,0x30);
    return dst;
}
