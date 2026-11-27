typedef struct S { char p[0x200]; } S;
#define I(x,off) (*(int*)((char*)(x)+(off)))
#define F(x,off) (*(float*)((char*)(x)+(off)))
#define P(x,off) (*(void**)((char*)(x)+(off)))

extern void func_0016FCF8(S *, int, int);
extern void func_0016FD78(S *);
extern void func_0016FE20(S *);
extern void func_0016FEE0(S *, int);

void func_0016FF88(S *arg0, int arg1, int arg2, int arg3) {
    int var_8;
    int var_9;
    int i;

    I(arg0,0x7C) = 0;
    I(arg0,0x104) = I(arg0,0x104) + 1;
    if (I(arg0,0x78) == 0) {
        if (I(arg0,0x74) != 0) {
            var_8 = I(arg0,0x80);
            if (var_8 != 0) {
                var_9 = 0;
                if (arg2 != 0) {
                    if (I(arg0,0x8C) != 0) {
                        var_9 = 2;
                    } else {
                        for (i = 3; i < 11; i++) {
                            if (((int*)arg0)[0x21 + i] != 0) { var_9 = i; break; }
                        }
                    }
                    if (var_8 != var_9) {
                        if (var_8 != 1) {
                            char *t2 = *(char**)(*(char**)((char*)P(arg0,0x34)+0xC)+0x4);
                            float f0 = *(float*)(t2+0x11C) * *(float*)(t2+0xF8) + *(float*)(t2+0x120) * *(float*)(t2+0xFC) + *(float*)(t2+0x124) * *(float*)(t2+0x100);
                            if (f0 < 6.0f) {
                                func_0016FCF8(arg0, 0, 0);
                            } else if (var_8 < 3) {
                            } else if (arg3 == 0) {
                                func_0016FEE0(arg0, arg2);
                            }
                        } else {
                            func_0016FCF8(arg0, 0, 0);
                        }
                    } else {
                        func_0016FCF8(arg0, 0, 0);
                    }
                } else {
                    float f2 = F(arg0,0x28);
                    if (!(F(arg0,0x48) < f2) || (var_8 != 1)) {
                        if (((float*)P(arg0,0x6C))[var_8] < f2) {
                            if (var_8 >= I(arg0,0x60)-1) {
                            } else if (arg3 == 0) {
                            } else {
                                goto L144;
                            }
                        }
                        if (f2 < ((float*)P(arg0,0x68))[var_8]) {
                            if (var_8 < 3) {
                            } else if (arg3 == 0) {
                                func_0016FEE0(arg0, arg2);
                            }
                        }
                    } else {
                        L144:
                        func_0016FE20(arg0);
                    }
                }
            } else if (arg1 != 0) {
                func_0016FE20(arg0);
            }
        } else if (arg1 != 0) {
            func_0016FE20(arg0);
        } else if (arg2 != 0) {
            func_0016FEE0(arg0, 0);
        }
    }
    func_0016FD78(arg0);
}
