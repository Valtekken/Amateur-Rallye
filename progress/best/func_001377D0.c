extern void func_001D4040(s32 *, const char *);
extern void func_001E3EC0(s32, s32 *, s32);
extern s32 func_001E4280(void);
extern void func_003FA310(char *, const char *, ...);
extern char D_0044AA50[];

typedef struct {
    s32 pad[4];
    s32 index;
    s32 array[11];
} RaceSelectContext;

void func_001377D0(RaceSelectContext *arg0) {
    char buf[64];
    s32 parsed;
    s32 index = arg0->index;
    s32 array_base_val = arg0->array[index];

    s32 i = 0;
    s32 const_111 = 111;
    s32 const_375 = 375;
    char *fmt = D_0044AA50;

    do {
        s32 value = arg0->array[index];
        s32 computed = (i - value) * const_111 + const_375;

        func_003FA310(buf, fmt, i);
        s32 id = func_001E4280();
        func_001D4040(&parsed, buf);
        func_001E3EC0(id, &parsed, computed);

        i++;
    } while (i < 11);
}
