/* func_0040AFB8 - creates semaphores */
extern s32 CreateSema_2(s32, void *);
extern s32 D_004411D4;
extern s32 D_004411D8;

void func_0040AFB8(void) {
    char sema_buf1[0x20];
    char sema_buf2[0x20];
    s32 val = 1;
    
    /* First call - return value kept in $v0 for delay slot store */
    CreateSema_2(val, sema_buf1);
    D_004411D4 = val;  /* This should be in delay slot of second call */
    
    /* Second call */
    CreateSema_2(val, sema_buf2);
    D_004411D8 = val;  /* Second return value */
}
