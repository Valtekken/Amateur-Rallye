typedef struct S25960_node { u8 *b; u8 *e; } S25960_node;
typedef struct S25960_sub { u8 *b; u8 *e; } S25960_sub;
typedef struct S25960 {
    S25960_node **lb;
    S25960_node **le;
    u8 *cap;
    S25960_sub sub;
    s32 unk14;
} S25960;
typedef struct { s32 a, b, c, indent; } Sindent;

extern Sindent D_004262B0;
extern char D_00478EB8[], D_004796B8[], D_004796E8[], D_004796F8[], D_00479700[];
extern s32 func_001D4010(u8 *);
extern void func_003F9698(const char *, ...);

void func_00225960(s32 unused, S25960 *arg1) {
    S25960_node **layer;
    u8 *s;

    func_003F9698(D_004796B8, ((char *)arg1->le - (char *)arg1->lb) >> 2,
                  ((char *)arg1->cap - (char *)arg1->lb) >> 2);
    D_004262B0.indent++;
    layer = arg1->lb;
    if (layer != arg1->le) {
        do {
            func_003F9698(D_004796E8, ((char *)layer - (char *)arg1->lb) >> 2);
            D_004262B0.indent++;
            s = (*layer)->b;
            if (s != (*layer)->e) {
                do {
                    func_003F9698(D_004796F8, func_001D4010(s));
                    s += 4;
                } while (s != (*layer)->e);
            }
            layer++;
            D_004262B0.indent--;
            func_003F9698(D_00478EB8);
        } while (layer != arg1->le);
    }
    func_003F9698(D_00479700);
    D_004262B0.indent++;
    s = arg1->sub.b;
    if (s != arg1->sub.e) {
        do {
            func_003F9698(D_004796F8, func_001D4010(s));
            s += 4;
        } while (s != arg1->sub.e);
    }
    D_004262B0.indent--;
    func_003F9698(D_00478EB8);
    D_004262B0.indent--;
    func_003F9698(D_00478EB8);
}
