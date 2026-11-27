extern void *D_002AD408(int);
extern void func_00327D08(void *, void *);
extern char D_004854F0[];

typedef struct Obj {
    int ref;
    void *vt;
    int f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
    int f30;
    int f34;
    int f38;
    int f3C;
} Obj;

void *func_0031F1C8(void **arg0, void *arg1, int arg2, int arg3) {
    Obj *obj = (Obj *)D_002AD408(0x40);
    char *sub = (char *)obj + 0x20;
    obj->fC = 2;
    obj->vt = D_004854F0;
    obj->f18 = 0x7FFFFFFF;
    obj->ref = 0;
    obj->f8 = 0;
    obj->f10 = 0;
    obj->f14 = 0;
    obj->f20 = 0;
    *(int *)(sub + 0xC) = 0;
    *(int *)(sub + 4) = 0;
    *(int *)(sub + 8) = 0;
    obj->f38 = 1;
    func_00327D08(obj, sub);
    {
        void *sp0 = obj;
        if (obj) obj->ref++;
        {
            typedef void (*Fn)(void *, void *, int, int);
            char *b = (char *)arg1;
            char *vt = *(char **)(b + 0x148);
            ((Fn)(*(void **)(vt + 0x7C)))(b + *(short *)(vt + 0x78), &sp0, arg2, arg3);
        }
        *arg0 = sp0;
        if (sp0) ((Obj *)sp0)->ref++;
        if (sp0) {
            Obj *o = (Obj *)sp0;
            if (--o->ref == 0) {
                typedef void (*Dtor)(void *, int);
                char *vt2 = (char *)o->vt;
                ((Dtor)(*(void **)(vt2 + 0xC)))( (char *)o + *(short *)(vt2 + 8), 3 );
            }
        }
    }
    return arg0;
}
