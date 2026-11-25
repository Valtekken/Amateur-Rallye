extern void func_003F9698(const char *, ...);
extern char D_0046F670[];
extern char D_0046F688[];
extern char D_0046F6B8[];
extern s32 D_00421E78[];

void func_0017E1F0(void) {
    s32 max_id = 0;
    s32 *entry;
    s32 *next_entry;
    s32 *check_entry;
    s32 id;
    s32 check_id;
    s32 first_id;
    
    func_003F9698(D_0046F670);
    
    first_id = D_00421E78;
    entry = &D_00421E78;
    if (first_id != -2) {
        do {
            id = entry[0];
            next_entry = entry + 3;
            if (id >= 0) {
                if (max_id < id) {
                    max_id = id;
                }
                check_id = next_entry[0];
                if (check_id != -2) {
                    check_entry = next_entry;
                    do {
                        if (entry[0] == check_entry[0] && entry[1] == check_entry[1]) {
                            func_003F9698(D_0046F688, entry[0]);
                        }
                        check_entry += 3;
                        check_id = check_entry[0];
                    } while (check_id != -2);
                }
            }
            entry = next_entry;
        } while (entry[0] != -2);
    }
    func_003F9698(D_0046F6B8, max_id);
}
