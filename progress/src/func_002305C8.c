typedef struct Node5 { struct Node5 *first; struct Node5 *next; } Node5;
typedef struct S5 { void *p0; void *p1; void *p2; } S5;
extern void *D_002AD408(s32);
extern void *func_0022C938(void *);
extern void func_0022CF08(void *);
extern Node5 *func_00230A10(s32, Node5 *, s32 *);
extern void func_00230700(s32 *, void *, Node5 *);
extern void func_00230AC8(S5 *, Node5 *);
extern void func_0022D0D0(void *, s32 *);
extern s32 func_00230D18(s32);
extern void *func_00230D48(s32 *, S5 *);
extern void func_0022C9E0(void *, s32);
extern void func_00230D20(s32 *, s32);
extern void func_002B2028(void *, void *);
extern s32 D_0040E618[];
typedef struct Ref5 { void *next; void *vt; s32 ref; } Ref5;
s32 func_002305C8(S5 *arg0, s32 arg1) {
    s32 sp0[4]; volatile s32 sp10; s32 sp14; Node5 *n; void *old;
    arg0->p2 = (void *)arg1;
    arg0->p0 = func_0022C938(D_002AD408(0x6C));
    func_0022CF08(arg0->p0);
    sp14 = 0;
    n = func_00230A10((s32)arg0, (Node5 *)arg0->p2, &sp14);
    if (n != NULL) {
        func_00230700(sp0, arg0, n);
        func_00230AC8(arg0, n);
        func_0022D0D0(arg0->p0, sp0);
        func_00230D18((s32)&sp10);
        arg0->p1 = func_00230D48((s32 *)&sp10, arg0);
        old = arg0->p0;
        if (old != NULL) func_0022C9E0(old, 3);
        arg0->p0 = 0;
        { void *vt = *(void **)((char *)n + 0x10);
          s16 off = *(s16 *)((char *)vt + 8);
          void (*fn)(void *, s32) = *(void (**)(void *, s32))((char *)vt + 0xC);
          fn((char *)n + off, 3); }
        func_00230D20((s32 *)&sp10, 2);
        { void *p = (void *)sp0[0]; Ref5 *r = (Ref5 *)((char *)p - 0x10);
          s32 rc = r->ref - 1; r->ref = rc;
          if (rc == 0) {
            if ((s32)r->vt + 0x10 != 0) func_002B2028(r, p);
            else { r->next = (void *)D_0040E618[-1];
                   D_0040E618[-1] = (s32)r; } } }
    }
    return 0;
}
