typedef struct SimpleTagged {
    s32 unk0;
    s32 *payload;
    s32 tag;
} SimpleTagged;

extern void func_001E5C58(void *, void *, s32);
extern void *D_002AD408(s32);

void func_001E5588(SimpleTagged *p)
{
    if (p->tag != 4) {
        func_001E5C58(p, p, 4);
        p->payload = (s32 *)D_002AD408(4);
        *p->payload = 0;
    }
    *p->payload = 0;
}
