extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E25B0(void *, const char *, void *);
extern void func_001E2998(void *, const char *, void *);
extern void func_003FA310(void *, const char *, s32);
extern char D_0044BC38[];
extern char D_0044C138[];
extern char D_0044C148[];
extern char D_0044C158[];
extern char D_0044C168[];
extern char D_0044C180[];
extern char D_0044C190[];
extern char D_0044C1A0[];
extern char D_0044C1B8[];

void func_00149D18(void *arg0, s32 arg1, s32 arg2) {
    (void)arg1;
    char key[0x10];
    char pad[0x20];
    struct {
        char data[4];
        s32 sp34;
        char more[8];
    } writer;

    func_001E2460(&writer, arg2);
    func_001E25B0(&writer, D_0044BC38, (char *)arg0 + 0xC);
    func_001E2470(&writer, D_0044C138, (char *)arg0 + 0x14);
    func_001E2470(&writer, D_0044C148, (char *)arg0 + 0x18);
    func_001E2470(&writer, D_0044C158, (char *)arg0 + 0x1C);
    func_001E25B0(&writer, D_0044C168, &writer.sp34);
    func_001E25B0(&writer, D_0044C180, (char *)arg0 + 0x24);
    func_001E25B0(&writer, D_0044C1A0, (char *)arg0 + 0x28);
    func_001E2998(&writer, D_0044C190, (char *)arg0 + 0x50);
    func_003FA310(key, D_0044C1B8, writer.sp34);
    func_001D4040((char *)arg0 + 0x20, key);
}
