extern s32 sceSifDmaStat_2(s32, void *);
extern s32 sceSifSetDma_2(void *, s32);
extern void func_004037D8(void *, void *, s32);
extern void func_003F9698(void *);
extern s32 D_00436154;
extern char D_00488AE8[];
extern char D_0049B9D0[];

typedef struct { s32 cnt; void *buf; s32 size; s32 id; } Slot;
typedef struct { void *p; s32 size; s32 count; s32 flag; } Dma;

s32 func_003C9D98(s32 arg0, s32 arg1) {
  Dma dma;
  volatile char pad[0x100];
  s32 off = arg1 * 0x1C + arg0 * 0x70;
  Slot *e = (Slot *)(D_0049B9D0 + off);
  if (e->id == 0 || sceSifDmaStat_2(e->id, e) < 0) {
    void *buf = e->buf;
    s32 n = *(s32 *)buf + 1;
    s32 sz = ((Slot *)(D_0049B9D0 + (arg1 * 0x1C + arg0 * 0x70)))->size + ((n & 1) << 5);
    *(s32 *)buf = n;
    func_004037D8(buf, (char *)buf + 0x20, n);
    dma.p = buf;
    dma.size = sz;
    dma.count = 0x20;
    dma.flag = 0;
    {
      s32 id = sceSifSetDma_2(&dma, 1);
      if (id) {
        ((Slot *)(D_0049B9D0 + (arg1 * 0x1C + arg0 * 0x70)))->id = id;
        return 1;
      }
    }
  }
  if (D_00436154) func_003F9698(D_00488AE8);
  return 0;
}
