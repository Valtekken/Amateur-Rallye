typedef struct CtrlNode CtrlNode;
struct CtrlNode {
    void *data;
    CtrlNode *next;
};

typedef struct Controller {
    u8 pad0[0xC];
    s32 player;
    s32 type;
    void *unk14;
} Controller;

typedef struct ControllerVTable {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad12[2];
    void (*unk14)(void *, void *);
} ControllerVTable;

extern s32 D_0042903C;
extern s32 D_00429040;
extern s32 D_00429044;
extern s32 D_00429048;
extern CtrlNode *D_004267BC;
extern char D_0049AEC0[];
extern char D_00482180[];
extern char D_00482190[];
extern char D_004821B0[];
extern char D_00482218[];
extern char D_00482260[];
extern char D_00482290[];

extern void func_001D4040(char *dst, const char *src);
extern void *D_002AD408(s32);
extern void *func_0026BC18(void *);
extern void *func_002C96E8(void *, void *);
extern void *func_002CAFB0(void *, void *, s32);
extern void *func_002CC530(void *, void *);
extern void func_003F9698(const char *fmt, ...);
extern void func_003FA310(char *buf, const char *fmt, ...);

void func_002C8E10(void) {
    CtrlNode *iter;
    Controller *ctrl;
    s32 type;
    s32 players;
    s32 player;
    s32 player2;
    s32 n;
    s32 tmp;
    void *obj;
    ControllerVTable *vt;
    char sp0[0x40];
    char sp40[0x10];

    if (D_0042903C == 0) {
        func_001D4040(D_0049AEC0, D_00482180);
        D_0042903C = 1;
    }
    if (D_004267BC == NULL) {
        D_004267BC = func_0026BC18(D_002AD408(0xC));
    }
    iter = D_004267BC->next;
    for (;;) {
        if (D_004267BC == NULL) {
            D_004267BC = func_0026BC18(D_002AD408(0xC));
        }
        if (iter == D_004267BC) break;
        ctrl = (Controller *)iter->data;
        if (ctrl != NULL) {
            type = ctrl->type;
            if (ctrl->unk14 == NULL) {
                players = func_001E3650(func_001E4280(), (s32)D_0049AEC0);
                player = ctrl->player;
                if (type == 0) {
                    if (player < players && player >= 0) {
                        func_003FA310(sp0, D_00482190, player + 1);
                        tmp = func_001E4280();
                        func_001D4040(sp40, sp0);
                        n = func_001E3650(tmp, (s32)sp40);
                        ctrl->unk14 = func_002CAFB0(D_002AD408(0x110), ctrl, n);
                    }
                } else if (type == 1) {
                    ctrl->unk14 = func_002C96E8(D_002AD408(0x10), ctrl);
                } else if (type == 2) {
                    if (player < players || players == 0) {
                        ctrl->unk14 = func_002CC530(D_002AD408(0x20), ctrl);
                    } else {
                        D_00429040++;
                        if (D_00429040 < 10) {
                            func_003F9698(D_004821B0);
                        }
                    }
                } else {
                    D_00429044++;
                    if (D_00429044 < 10) {
                        func_003F9698(D_00482218, type, player);
                    }
                }
            }
        }
        if (ctrl != NULL) {
            obj = ctrl->unk14;
            if (obj != NULL) {
                vt = *(ControllerVTable **)obj;
                vt->unk14((u8 *)obj + vt->unk10, obj);
            } else {
                player2 = ctrl->player;
                if (func_001E3650(func_001E4280(), (s32)D_0049AEC0) > player2 && player2 >= 0) {
                    D_00429048++;
                    if (D_00429048 < 0x1E) {
                        func_003F9698(D_00482260, D_00482290, type);
                    }
                }
            }
        }
        iter = iter->next;
    }
}
