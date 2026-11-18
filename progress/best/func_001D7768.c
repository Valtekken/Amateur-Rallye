/* func_003978C8 */
typedef struct { s32 value; } CopyTag;
extern s32 func_002C5160(s32, s32, s32, CopyTag);

s32 func_003978C8(register s32 a, register s32 b, register s32 c, register s32 d) {
    return func_002C5160(a, b, c, (CopyTag){0});
}

/* func_001DAE40 */
extern char D_00475D78[];
extern char D_00475DB0[];
extern char D_00475DB8[];
extern int func_001D4010(void *);
extern int func_003F9698(const char *, ...);

typedef struct {
    void *vt;
} TDAE;

void func_001DAE40(TDAE *arg0) {
    void *base;
    unsigned char *p = 0;
    int n = 0;
    base = *(void **)((char *)arg0 + 0);
    if (base != 0) {
        p = *(unsigned char **)((char *)base + 8);
        n = *(int *)((char *)base + 12);
    }
    func_003F9698(D_00475D78, func_001D4010((char *)arg0 + 16), p, n);
    if (n > 0) {
        int i = n;
        do {
            unsigned char c = *p;
            p++;
            func_003F9698(D_00475DB0, c);
            i--;
        } while (i != 0);
    }
    func_003F9698(D_00475DB8);
}

/* func_001D8080 */
typedef void (*Handler)(void);
extern Handler D_00437E58;
extern char D_00439570[], D_004761A0[];
extern Handler func_002ABA80(int);
extern int func_002B1FC0(int);
extern void *func_003D4938(void *,void *);
extern void func_003D4F40(void *);
void func_001D8080(int p) {
    void (*raise_error)(void *)=func_003D4F40;
    Handler h;
    do {
        h=D_00437E58;
        if(!h) {
            char *msg=D_004761A0;
            raise_error(func_003D4938(D_00439570,msg));
            h=func_002ABA80(1);
        }
        h();
    } while(!func_002B1FC0(p));
}

/* func_001D7768 */
s32 func_001D7768(void *arg0, s32 *arg1) {
    s32 idx = *arg1;
    if (idx < 0) return -1;
    s32 cap = *(s32 *)((char *)arg0 + 0x18);
    if (idx >= cap) return -1;
    s32 *arr = *(s32 **)((char *)arg0 + 0x00);
    return arr[idx];
}
