extern void func_003F9698(char *a, char *b);
extern void func_0023ED98(void *a, s32 b);
extern void D_002AD530(void *p);
extern void func_002B2028(void *p);
extern u8 D_0040E618[];
extern char D_0047A908[];
extern char D_0047A9B0[];

typedef struct Obj {
    u8 *vtable;
    u8 *p04; u8 *p08; u8 *p0C;
    u8 *p10; u8 *p14; u8 *p18;
    u8 *p1C; u8 *p20; u8 *p24;
} Obj;

void func_00279DD8(Obj *arg0) {
    func_003F9698(D_0047A908, D_0047A9B0);

    ((void (*)(u8*))*(u32*)((u8*)arg0->vtable + 0xC))((u8*)arg0 + *(s16*)((u8*)arg0->vtable + 8));
    ((void (*)(u8*))*(u32*)((u8*)arg0->vtable + 0x14))((u8*)arg0 + *(s16*)((u8*)arg0->vtable + 0x10));

    if (arg0->p1C != arg0->p20) {
        for (;;) {
            u8 **it = (u8**)arg0->p20;
            u8 *obj = *(--it);
            arg0->p20 = (u8*)it;
            if (obj != 0) {
                s32 n = *(s32*)(obj - 0x10);
                u8 *end = obj + n * 0x5C;
                if (obj != end) {
                    u8 *cur = end - 0x5C;
                    while (1) { func_0023ED98(cur, 0); if (obj == cur) break; cur -= 0x5C; }
                }
                D_002AD530(obj - 0x10);
            }
            if (arg0->p1C == arg0->p20) break;
        }
    }

    {
        u8 *v1C=arg0->p1C,*v24=arg0->p24,*v04=arg0->p04,*v08=arg0->p08,*v0C=arg0->p0C;
        u8 *v10=arg0->p10,*v14=arg0->p14,*v18=arg0->p18,*v20=arg0->p20;
        s32 c1 = (s32)(v24-v1C) >> 2;
        arg0->p24=0; arg0->p04=0; arg0->p08=0; arg0->p0C=0; arg0->p10=0; arg0->p14=0; arg0->p18=0; arg0->p1C=0; arg0->p20=0;
        if (c1 != 0) {
            if (c1*4 != 0) func_002B2028(v1C);
            else { *(void**)v1C = *(void**)(D_0040E618-4); *(void**)(D_0040E618-4)=v1C; }
        }
        { s32 c2=(s32)(v18-v10)>>2; if (c2!=0){ if(c2*4!=0) func_002B2028(v10); else { *(void**)v10=*(void**)(D_0040E618-4); *(void**)(D_0040E618-4)=v10; } } }
        { s32 c3=(s32)(v0C-v04)>>2; if (c3!=0){ if(c3*4!=0) func_002B2028(v04); else { *(void**)v04=*(void**)(D_0040E618-4); *(void**)(D_0040E618-4)=v04; } } }
    }
}
