extern s32 func_00193B60(void);
extern s32 func_00191710(s32);
extern s32 func_00196028(void);
extern f32 func_00195CF0(s32, s32);
extern s32 func_00196E10(void);
extern f32 func_001969A0(s32, s32);
extern void func_00195C68(s32, s32, f32);
extern s32 func_00194C40(void);
extern s32 func_00194738(s32);
extern s32 func_002A1700(void);
extern void func_001D4040(void *, const char *);
extern void func_002A1290(s32, void *, s32);
extern char D_00445BE0[];

void func_00116BD0(void) {
    s32 id;
    s32 flag = 0;
    f32 a, b;
    u32 key[4];
    s32 h;
    s32 temp;

    id = func_00191710(func_00193B60());
    a = func_00195CF0(func_00196028(), id);
    temp = func_00196E10();
    b = func_001969A0(temp, 0);
    if (b <= a) {
        flag = 1;
        func_00195C68(func_00196028(), id, b);
    }
    if (func_00194738(func_00194C40())) {
        f32 a2 = func_00195CF0(func_00196028(), id);
        temp = func_00196E10();
        f32 b2 = func_001969A0(temp, 1);
        if (b2 <= a2) {
            flag = 1;
            func_00195C68(func_00196028(), id, b2);
        }
    }
    if (flag) {
        h = func_002A1700();
        func_001D4040(key, D_00445BE0);
        func_002A1290(h, key, 3);
    }
}
