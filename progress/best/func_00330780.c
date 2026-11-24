extern void func_001D4010(void *);
extern void *D_002AD408(s32);
extern void *func_00362458(void *);
extern void func_003615A0(void *, void *);
extern void func_00362FD0(void *, void *);
extern void func_002631A0(void *, void *);

extern void *func_002DDA20(void);
extern void func_003387C8(void *);
extern void func_00338AB8(void *);
extern void func_00330668(void *, void *);
void func_00330780(register u8 *a0, register u8 *a1)
{
    u8 *d = *(u8 **)(a1 + 0x50);
    s32 v18;

    func_001D4010(d + 0xC);
    func_001D4010(a1 + 0x5C);
    if (*(s32 *)(d + 0xC) == 0)
        return;
    if ((*(u32 *)(d + 0x74) & 1) == 0)
        return;
    v18 = *(s32 *)(d + 0x78);
    if (v18 == 0) {
        v18 = (s32)func_00362458(D_002AD408(0xC0));
        func_003615A0((void *)v18, d);
        func_00362FD0((void *)v18, d + 0xC);
        func_002631A0(d, (void *)v18);
    }
    { u8 *manager = *(u8 **)func_002DDA20(); int id=*(int *)(v18+8);
      if (id != 0) {
        u8 *entries=*(u8 **)(manager+0x14);
        register u8 *end=*(u8 **)(manager+0x18);
        if (id >= (end-entries)/8) {
          register int size=(id+32)&~31;
          extern void func_002C6528(void*,int,int,void*);
          int z[2]={0,0};
          func_002C6528(manager+0x14,0,size-(end-entries)/8,z);
          entries=*(u8 **)(manager+0x14);
        }
        u8 *entry=entries+id*8;
        if (*(int *)(entry+4) != *(int *)(manager+0x20)) {
          extern int func_00303038(void *, void *);
          *(int *)entry=func_00303038(manager,(void *)(v18+8));
          *(int *)(entry+4)=*(int *)(manager+0x20);
        }
        if (*(int *)entry) {
          if (*(int *)(d+0x60)==0 || *(int *)(d+0x60)==2) func_003387C8(a0);
          else func_00338AB8(a0);
          func_00330668(a1,a0+0x40);
        }
      }
    }
}
