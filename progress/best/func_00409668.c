extern int D_004411A8;
typedef struct {
    int id;
    int *result;
    int size;
    unsigned char name[1024];
    unsigned char buf2[1024];
    int unk80C;
    int unk810;
    int unk814;
    int unk818;
} Msg;
extern Msg D_0049FF80;
extern char D_004A0BC0[], D_004A1240[];
extern void func_00406B18(int), func_00406B48(void), func_00406C18(void);
extern int CreateSema_2(void *), DeleteSema_2(int), WaitSema_2(int);
extern int func_004055A0(void *, int);
extern int func_00405E90(void *, int, int, void *, int, void *, int, int, int);

int func_00409668(unsigned char *arg0, int arg1, unsigned char *arg2, int arg3, int arg4, int arg5) {
    int sem[8];
    int result;
    int i;
    int id;
    int val;
    Msg *p = &D_0049FF80;
    s8 c;

    func_00406B18(0x17);
    if (!D_004411A8) func_00406C18();

    i = 0;
    c = (p->name[0] = arg0[0]);
    if (c) {
        do {
            i++;
            if (i >= 0x400) break;
            c = (p->name[i] = arg0[i]);
        } while (c);
    }
    if (i == 0x400) {
        p->name[0x3FF] = 0;
        i = 0x3FF;
    }

    p->unk80C = arg1;

    if (arg3 != 0) {
        unsigned char *dst = p->buf2;
        unsigned char *src = arg2;
        int n = arg3;
        do {
            *dst++ = *src++;
        } while (--n);
    }

    p->unk810 = arg3;

    sem[1] = 1;
    sem[2] = 0;
    sem[5] = 0;
    id = CreateSema_2(sem);
    p->result = &result;
    p->id = id;
    p->size = 4;
    p->unk814 = arg4;
    p->unk818 = arg5;

    if (func_00405E90(D_004A1240, 0x17, 0, &D_0049FF80, i + 0x17, D_004A0BC0, 4, 0, 0) < 0) {
        DeleteSema_2(id);
        func_00406B48();
        return -0x16;
    }
    val = *(int *)((unsigned int)D_004A0BC0 | 0x20000000);
    func_00406B48();
    if (!val) {
        DeleteSema_2(id);
        return -0xB;
    }
    WaitSema_2(id);
    DeleteSema_2(id);
    return result;
}
