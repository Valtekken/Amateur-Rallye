void func_003770A0(u8 *arg0, u8 *arg1)
{
    u8 *temp_7 = *(u8 **)(arg1 + 0x1C);
    u8 *temp_11 = *(u8 **)(arg1 + 0x20);
    u8 *pool = arg0 + 0x18000 + 0x1420C;
    s32 *freelist = (s32 *)(arg0 + 0x18000 + 0x12200);
    s32 *flcount = (s32 *)(arg0 + 0x18000 + 0x14200);
    s32 *active = (s32 *)(arg0 + 0x18000 + 0x14204);
    s32 *poolcount = (s32 *)(arg0 + 0x420C + 0x18000 - 0x18000 + 0x18000); /* placeholder */
    s32 *pcount = (s32 *)(arg0 + 0x1C20C);
    s32 i;

    if (temp_7 == NULL || temp_11 == NULL) {
        return;
    }
    if (*(s32 *)(temp_7 + 0x10) != 2) {
        return;
    }
    if (*(s32 *)(temp_11 + 0x10) != 2) {
        return;
    }

    /* helper inline: remove node from list & return to pool */
    {
        u8 *node = *(u8 **)(temp_7 + 0x14);
        *(u8 **)(temp_7 + 0x14) = NULL;
        *(u8 **)(*(u8 **)(node + 0x8) + 0x4) = *(u8 **)(node + 0x4);
        *(u8 **)(*(u8 **)(node + 0x4) + 0x8) = *(u8 **)(node + 0x8);
        i = *pcount - 1;
        *pcount = i;
        if (node != pool + i * 0x10) {
            /* copy last pool entry into node (16 bytes) */
            s32 *src = (s32 *)(pool + i * 0x10);
            s32 *dst = (s32 *)node;
            dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = src[3];
            *(u8 **)(*(u8 **)(node + 0x0) + 0x14) = node;
            *(u8 **)(*(u8 **)(node + 0x8) + 0x4) = node;
            *(u8 **)(*(u8 **)(node + 0x4) + 0x8) = node;
        }
    }
    *(s32 *)(temp_7 + 0x10) = 0;

    {
        u8 *node = *(u8 **)(temp_11 + 0x14);
        *(u8 **)(temp_11 + 0x14) = NULL;
        *(u8 **)(*(u8 **)(node + 0x8) + 0x4) = *(u8 **)(node + 0x4);
        *(u8 **)(*(u8 **)(node + 0x4) + 0x8) = *(u8 **)(node + 0x8);
        i = *pcount - 1;
        *pcount = i;
        if (node != pool + i * 0x10) {
            s32 *src = (s32 *)(pool + i * 0x10);
            s32 *dst = (s32 *)node;
            dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = src[3];
            *(u8 **)(*(u8 **)(node + 0x0) + 0x14) = node;
            *(u8 **)(*(u8 **)(node + 0x8) + 0x4) = node;
            *(u8 **)(*(u8 **)(node + 0x4) + 0x8) = node;
        }
    }
    *(s32 *)(temp_11 + 0x10) = 0;

    /* free temp_7 (unk1C) */
    if (*(u8 **)(arg1 + 0x1C) != NULL) {
        s32 idx = *flcount;
        freelist[idx] = (s32)*(u8 **)(arg1 + 0x1C);
        *flcount = idx + 1;
        *active = *active - 1;
        *(u8 **)(arg1 + 0x1C) = NULL;
    }
    /* free temp_11 (unk20) */
    if (*(u8 **)(arg1 + 0x20) != NULL) {
        s32 idx = *flcount;
        freelist[idx] = (s32)*(u8 **)(arg1 + 0x20);
        *flcount = idx + 1;
        *active = *active - 1;
        *(u8 **)(arg1 + 0x20) = NULL;
    }

    /* remove arg1->unk14 node */
    {
        u8 *node = *(u8 **)(arg1 + 0x14);
        *(u8 **)(arg1 + 0x14) = NULL;
        *(u8 **)(*(u8 **)(node + 0x8) + 0x4) = *(u8 **)(node + 0x4);
        *(u8 **)(*(u8 **)(node + 0x4) + 0x8) = *(u8 **)(node + 0x8);
        i = *pcount - 1;
        *pcount = i;
        if (node != pool + i * 0x10) {
            s32 *src = (s32 *)(pool + i * 0x10);
            s32 *dst = (s32 *)node;
            dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = src[3];
            *(u8 **)(*(u8 **)(node + 0x0) + 0x14) = node;
            *(u8 **)(*(u8 **)(node + 0x8) + 0x4) = node;
            *(u8 **)(*(u8 **)(node + 0x4) + 0x8) = node;
        }
    }
    *(s32 *)(arg1 + 0x10) = 0;

    /* alloc pool node */
    {
        u8 *node;
        s32 cnt = *pcount;
        if (cnt == 0x800) {
            node = NULL;
        } else {
            node = pool + cnt * 0x10;
            *pcount = cnt + 1;
            *(s32 *)(node + 0x4) = 0;
            *(s32 *)(node + 0xC) = -1;
            *(s32 *)(node + 0x8) = 0;
            *(s32 *)(node + 0x0) = 0;
        }
        *(s32 *)(arg1 + 0x10) = 2;
        *(u8 **)(node + 0x0) = arg1;
        *(u8 **)(arg1 + 0x14) = node;
        {
            s32 off = *(s32 *)(arg1 + 0x4) * 0x10;
            u8 **slot = (u8 **)(arg0 + 8 + off);
            u8 *prev = *slot;
            *slot = node;
            *(u8 **)(prev + 0x4) = node;
            *(u8 **)(node + 0x8) = prev;
            *(u8 **)(node + 0x4) = arg0 + off;
        }
    }

    if (*(u8 **)(arg1 + 0x18) != NULL) {
        func_003770A0(arg0, *(u8 **)(arg1 + 0x18));
    }
}
