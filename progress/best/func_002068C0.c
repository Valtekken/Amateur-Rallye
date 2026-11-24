typedef struct Node { struct Node *next; s16 key, idx; } Node;
void func_002068C0(void *arg0, s8 *arg1, s32 *arg2, s32 *arg3) {
    Node *v6;
    s32 sp30, sp34, temp6;
    s16 sp10;
    *arg2 = 0;
    *arg3 = 0;
    if (*arg1 != 0) {
        u8 c = (u8)*arg1;
        do {
            Node **b = *(Node***)((char*)arg0+4);
            s32 n = *(Node***)((char*)arg0+8) - b;
            temp6 = (s8)c;
            if (temp6 <= -1) temp6 += 0x100;
            sp10 = (s16)temp6;
            v6 = b[(u32)temp6 % (u32)n];
            if (v6 != 0 && v6->key != temp6) {
                do { v6 = v6->next; } while (v6 != 0 && v6->key != temp6);
            }
            if (v6 == 0) { sp30 = 0; sp34 = 0; }
            else {
                s32 *pair = *(s32**)((char*)arg0+0x14) + v6->idx * 2;
                sp30 = pair[0]; sp34 = pair[1];
            }
            *arg2 += sp30;
            if (*arg3 < sp34) *arg3 = sp34;
            arg1++;
            c = (u8)*arg1;
        } while (*arg1 != 0);
    }
}
