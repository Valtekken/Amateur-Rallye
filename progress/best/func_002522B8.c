typedef struct N { struct N *next, *prev; s32 value; } N;
extern void *func_002B1FC0(s32), *func_003D2910(s32);
extern void func_002B2028(void *);
extern void func_00271A28(N **);
extern void func_00276D00(void *, N **, N *, N *);
extern s32 func_0024C568(s32, s32);

#define ALLOC(p) do { p = (N *)func_002B1FC0(12); if (!p) p = (N *)func_003D2910(12); } while (0)

void func_002522B8(void *unused, N **arg1) {
    u32 slots[20];
    N *sp0, *sp10, *sp20, *sp30;
    s32 *pcount;
    N *temp2, *temp3, *temp16, *temp2c, *temp3b, *temp5, *temp9;
    N *var2, *var3, *var4, *var4b;
    s32 v17, v16;

#define S0   (*(N **)&slots[0])
#define S10  (*(N **)&slots[4])
#define S20  (*(N **)&slots[8])
#define S30  (*(N **)&slots[12])
#define sp0 S0
#define sp10 S10
#define sp20 S20
#define sp30 S30
#define sp40 (*pcount)
    ALLOC(var2);
    sp0 = var2;
    sp0->next = sp0;
    sp0->prev = sp0;
    temp2 = *arg1;
    temp9 = sp0->next;
    sp20 = temp9;
    sp30 = temp9;
    func_00276D00((void *)slots, &sp30, temp2->next, temp2);
    func_00271A28(arg1);
    temp5 = *arg1;
    sp10 = sp0->next;
    v17 = (s32)sp10->value;
    sp30 = temp5;
    ALLOC(var4);
    if (&var4->value) var4->value = v17;
    var4->next = sp30;
    var4->prev = sp30->prev;
    sp30->prev->next = var4;
    sp30->prev = var4;
    sp20 = var4;
    sp30 = sp10;
    temp16 = sp10->next;
    temp3 = sp10->prev;
    *(N **)temp3 = temp16;
    temp16->prev = temp3;
    func_002B2028(sp30);
    sp20 = temp16;
    pcount = (s32 *)&slots[16];
loop_7:
    sp40 = 0;
    var3 = sp0->next;
    if (var3 != sp0) {
        do {
            var3 = var3->next;
            sp40 += 1;
        } while (var3 != sp0);
    }
    if (sp40 != 0) {
        temp3b = sp0->next;
        sp20 = sp0;
        sp10 = temp3b;
        if (temp3b != sp0) {
            do {
                v16 = (s32)sp10->value;
                if (func_0024C568(v16, v17) != 0) {
                    sp30 = *arg1;
                    ALLOC(var4b);
                    if (&var4b->value) var4b->value = v16;
                    v17 = v16;
                    var4b->next = sp30;
                    var4b->prev = sp30->prev;
                    sp30->prev->next = var4b;
                    sp30->prev = var4b;
                    sp20 = var4b;
                    sp30 = sp10;
                    temp16 = sp10->prev;
                    temp2c = sp10->next;
                    *(N **)temp16 = temp2c;
                    temp2c->prev = temp16;
                    func_002B2028(sp30);
                    sp10 = sp0;
                    sp20 = sp0;
                } else {
                    sp30 = sp10;
                    sp20 = sp10;
                    sp10 = sp10->next;
                }
                sp20 = sp0;
            } while (sp10 != sp0);
        }
        goto loop_7;
    }
    func_00271A28(&sp0);
    func_002B2028(sp0);
}
