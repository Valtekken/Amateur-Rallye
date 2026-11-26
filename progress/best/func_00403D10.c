extern void WaitSema_2(s32);
extern void RotateThreadReadyQueue_2(u8, s32, u8 *);
extern void WakeupThread_2(u8, s32, u8 *);
extern void SuspendThread_2(u8, s32, u8 *);
extern void func_00404E70(void);
extern s32 D_0049DC20;
extern char D_0048C9C8[];

void func_00403D10(s32 *arg0) {
    u8 *state_array = (u8 *)arg0 + 8;
    u8 *thread_array = (u8 *)arg0 + 9;
    s32 index;
    s32 offset;
    u8 state;
    u8 thread;
    s32 state_lt_2;

    while (1) {
        WaitSema_2(D_0049DC20);
        index = *arg0 & 0x1FF;
        *arg0 = index + 1;
        offset = index * 2;
        state = state_array[offset];
        thread = thread_array[offset];
        state_lt_2 = state < 2;

        if (state == 1) {
            RotateThreadReadyQueue_2(thread, state_lt_2, &thread_array[offset]);
            continue;
        }
        if (state_lt_2) {
            if (state == 0) {
                WakeupThread_2(thread, state_lt_2, &thread_array[offset]);
                continue;
            }
        } else if (state != 2) {
        } else {
            SuspendThread_2(thread, state_lt_2, &thread_array[offset]);
            continue;
        }
        func_00404E70();
    }
}
