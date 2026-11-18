extern void func_003B3D88(void *, s32 *);
extern void func_003B3DC0(s32, s32, void *);
extern void func_003A3A38(void *, s32);

void func_003B31F0(register s32 arg0, register s32 arg1) {
    char buf[16];
    s32 val = -1;

    func_003B3D88(buf, &val);
    func_003B3DC0(arg0, arg1, buf);
    func_003A3A38(buf, 2);
}
