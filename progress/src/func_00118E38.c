extern void func_001D2488(void*,void*);
extern void *func_00196E10(void);
extern void func_001965F0(void*,s32,void*);
extern void func_001966C0(void*,s32,s32);
extern void func_00196860(void*,s32,s32);
extern void func_00196930(void*,s32,f32);
extern void func_00196A00(void*,s32,f32);
extern void func_00196AD0(void*,s32,s32);
extern void func_00196BA0(void*,s32,s32);
extern void func_00196C70(void*,s32,s32);
extern void func_00196D40(void*,s32,s32);
extern void D_002AD390(s32);
void func_00118E38(s32 a0, s32 a1, s32 a2, s32 a3, void *a4){
    f32 f = 0.f;
    s32 buf[4];
    func_001D2488(buf, a4);
    func_001965F0(func_00196E10(), a1, buf);
    func_001966C0(func_00196E10(), a1, a2);
    func_00196860(func_00196E10(), a1, a3);
    func_00196930(func_00196E10(), a1, f);
    func_00196A00(func_00196E10(), a1, f);
    func_00196AD0(func_00196E10(), a1, 0);
    func_00196BA0(func_00196E10(), a1, 0);
    func_00196C70(func_00196E10(), a1, 0);
    func_00196D40(func_00196E10(), a1, 0);
    D_002AD390(*(s32*)a4);
}
