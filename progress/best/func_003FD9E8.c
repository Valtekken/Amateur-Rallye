char *func_003FD9E8(char *arg0, char *arg1) {
    char v7;
    int v9;
    int i;
    char *p;
    char t9;
    char *s;

    v7 = *arg1;
    arg1++;
    if (v7 == 0x5E) {
        v7 = *arg1;
        v9 = 1;
        arg1++;
    } else {
        v9 = 0;
    }

    i = 0xFF;
    p = arg0 + 0xFF;
    do {
        *p = (char)v9;
        i--;
        p--;
    } while (i >= 0);

    if (v7 == 0) {
        return arg1 - 1;
    }

    t9 = (char)(1 - v9);
    s = arg1;
loop_8:
    {
        char *n = s + 1;
        arg0[(unsigned char)v7] = t9;
    loop_9:
        {
            char t8 = *s;
            s = n;
            if (t8 == 0x2D) {
                char t82 = *n;
                if (t82 == 0x5D) goto block_20;
                if (t82 < v7) goto block_20;
                s = n + 1;
                n = n + 2;
                do {
                    v7++;
                    arg0[(unsigned char)v7] = t9;
                } while (v7 < t82);
                goto loop_9;
            block_20:
                v7 = 0x2D;
                goto loop_8;
            }
            if (t8 < 0x2E) {
                if (t8 == 0) return n - 1;
                v7 = t8;
                goto loop_8;
            }
            if (t8 == 0x5D) return n;
            v7 = t8;
            goto loop_8;
        }
    }
}
