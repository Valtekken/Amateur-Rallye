extern void func_003F9698(void *, void *);
extern void func_0024C220(void *, int);
extern void D_002AD530(void *);
extern void func_002B2028(void *, ...);
extern char D_0047A908[], D_0047AA10[];
extern int D_0040E618[];
void func_0027A558(void *self) {
 char *t = (char *)self;
 volatile char pad[0x40];
 pad[0] = 0;
 func_003F9698(D_0047A908, D_0047AA10);
 void **vt = *(void ***)t;
 {
  short off = *(short *)((char *)vt + 0x8);
  void (*fn)(void *) = (void (*)(void *))vt[3];
  fn(t + off);
 }
 {
  void **vt2 = *(void ***)t;
  short off = *(short *)((char *)vt2 + 0x10);
  void (*fn)(void *) = (void (*)(void *))vt2[5];
  fn(t + off);
 }
 {
  char *f1cp = t + 0x1C;
  if (*(int *)f1cp != *(int *)(f1cp + 4)) {
   void *p17 = *(void **)((char *)*(void **)(f1cp + 4) - 4);
   for (;;) {
    void *f20 = *(void **)(f1cp + 4);
    *(void **)(f1cp + 4) = (char *)f20 - 4;
    if (p17 != NULL) {
     int sz = *(int *)((char *)p17 - 0x10);
     void *end = (char *)p17 + (sz * 0x48);
     void *blk;
     if (p17 != end) {
      blk = (char *)end - 0x48;
      do {
       func_0024C220(blk, 0);
       if (p17 != blk) blk = (char *)blk - 0x48;
      } while (p17 != blk);
     }
     D_002AD530((char *)p17 - 0x10);
    }
    if (*(int *)f1cp == *(int *)(f1cp + 4)) break;
    p17 = *(void **)((char *)*(void **)(f1cp + 4) - 4);
   }
  }
 }
 {
  void *f4 = *(void **)(t + 0x4);
  void *f8 = *(void **)(t + 0x8);
  void *fC = *(void **)(t + 0xC);
  void *f10 = *(void **)(t + 0x10);
  void *f14 = *(void **)(t + 0x14);
  void *f18 = *(void **)(t + 0x18);
  void *f1C = *(void **)(t + 0x1C);
  void *f20orig = *(void **)(t + 0x20);
  void *f24 = *(void **)(t + 0x24);
  int count1 = (int)(((char *)f24 - (char *)f1C) >> 2);
  (void)f14;
  *(int *)(t + 0x24) = 0;
  *(int *)(t + 0x4) = 0;
  *(int *)(t + 0x8) = 0;
  *(int *)(t + 0xC) = 0;
  *(int *)(t + 0x10) = 0;
  *(int *)(t + 0x14) = 0;
  *(int *)(t + 0x18) = 0;
  *(int *)(t + 0x1C) = 0;
  *(int *)(t + 0x20) = 0;
  if (count1 != 0) {
   int sz = count1 << 2;
   if (sz != 0) {
    func_002B2028(f1C, f20orig, fC, f4, f8, f24, f1C, count1);
   } else {
    *(int *)f1C = D_0040E618[-1];
    D_0040E618[-1] = (int)f1C;
   }
  }
  {
   int count2 = (int)(((char *)f18 - (char *)f10) >> 2);
   if (count2 != 0) {
    int sz2 = count2 << 2;
    if (sz2 != 0) {
     func_002B2028(f10);
    } else {
     *(int *)f10 = D_0040E618[-1];
     D_0040E618[-1] = (int)f10;
    }
   }
  }
  {
   int count3 = (int)(((char *)fC - (char *)f4) >> 2);
   if (count3 != 0) {
    int sz3 = count3 << 2;
    if (sz3 != 0) {
     func_002B2028(f4);
    } else {
     *(int *)f4 = D_0040E618[-1];
     D_0040E618[-1] = (int)f4;
    }
   }
  }
 }
}
