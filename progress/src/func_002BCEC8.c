extern void func_002B2028(void *);
extern void func_003F9698(const char *);
extern char D_00480598[];

void func_002BCEC8(void *arg0)
{
    if (arg0 != NULL)
    {
        if (*(s32 *)((u8 *)arg0 + 0xC) != 0)
        {
            func_003F9698(D_00480598);
            return;
        }
        func_002B2028(arg0);
    }
}
