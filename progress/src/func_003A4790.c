extern char D_004262D0[]; 
extern int func_003FA9B8(int), func_003A4568(void *), func_003ABB20(void *, int), func_003ABDC0(void *, int), func_003ABEA8(void *, int), func_003AB828(int); 
extern void func_003AC488(int *), func_003ABFC8(void *, void *, int), func_003ABE58(void *, int), func_003AB7F8(int), func_003A33E8(void *, int);

int *func_003A4790(register int *a, register int b) {
    char tmp[16];
    int idx, flag;
    
    if (!b || !func_003FA9B8(b)) {
        func_003AC488(a);
        goto Lend;
    }
    
    func_003ABFC8(tmp, D_004262D0, b);
    idx = func_003ABB20(D_004262D0, func_003A4568(tmp));
    
    if (idx >= 0) {
        if (*a != idx) {
            if (*a >= 0) {
                flag = func_003AB828(func_003ABEA8(D_004262D0, *a));
                if (!flag) func_003ABE58(D_004262D0, *a);
            }
            *a = idx;
            func_003AB7F8(func_003ABEA8(D_004262D0, *a));
        }
    } else {
        if (*a >= 0) {
            flag = func_003AB828(func_003ABEA8(D_004262D0, *a));
            if (!flag) func_003ABE58(D_004262D0, *a);
        }
        *a = func_003ABDC0(D_004262D0, func_003A4568(tmp));
        func_003AB7F8(func_003ABEA8(D_004262D0, *a));
    }
    
    func_003A33E8(tmp, 2);
Lend:
    return a;
}
