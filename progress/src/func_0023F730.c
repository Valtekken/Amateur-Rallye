s32 func_0023F730(void *arg0, s32 arg1)
{
    s32 *base = *((s32 **) ((char *) arg0 + 0x18));
    s32 i = 0;
    s32 n = ((*((s32 *) ((char *) arg0 + 0x1C))) - ((s32) base)) >> 2;
    int new_var;
    s32 *p;
    new_var = 0;
    if (n > new_var)
    {
        p = base;
        do
        {
            if (arg1 == (*p))
            {
                return i;
            }
            i++;
            p++;
        }
        while (i < n);
    }
    return -1;
}
