typedef void (*FnV)(void *, s32);
typedef struct {
    u8 pad0[8];
    s16 off8;
    u8 pad1[2];
    FnV fnC;
} VtblX;
typedef struct { u8 pad0[0xC]; VtblX *vt; } ObjC;

extern void D_002AD390(void *);
extern void func_001D6F38(void *, s32);
extern void func_001D7610(void *, s32);

void func_00262EB0(void *arg0, s32 arg1) {
    D_002AD390(*(void **)arg0);
    {
        void *o = *(void **)((u8 *)arg0 + 4);
        if (o) { VtblX *vt = *(VtblX **)o; vt->fnC((u8 *)o + vt->off8, 3); }
    }
    {
        void *o = *(void **)((u8 *)arg0 + 0x78);
        if (o) { VtblX *vt = *(VtblX **)o; vt->fnC((u8 *)o + vt->off8, 3); }
    }
    {
        void *p = *(void **)((u8 *)arg0 + 8);
        if (p) func_001D6F38(p, 3);
    }
    D_002AD390(*(void **)((u8 *)arg0 + 0x10));
    {
        void *o = *(void **)((u8 *)arg0 + 0x14);
        if (o) { VtblX *vt = ((ObjC *)o)->vt; vt->fnC((u8 *)o + vt->off8, 3); }
    }
    {
        void *p = *(void **)((u8 *)arg0 + 0x18);
        if (p) func_001D7610(p, 3);
    }
    if (arg1 & 1) D_002AD390(arg0);
}
