extern char D_00488890[]; extern void func_003F9698(char *);
int func_003C7EC0(unsigned int a, unsigned int b) {
 unsigned int n=0, t;
 volatile unsigned int *ch=(void *)0x1000a000;
 if (*ch & 0x100) { do { if(n++>0x1000000) goto fail; } while (*ch & 0x100); }
 *(volatile unsigned int *)0x1000a020=6;
 if ((a&0x70000000)==0x70000000) *(volatile unsigned int *)0x1000a010=(a&0xfffffff)|0x80000000; else *(volatile unsigned int *)0x1000a010=a&0xfffffff;
 *ch=0x101;
 if (*ch & 0x100) { do { if(n++>0x1000000) goto fail; } while (*ch & 0x100); }
 *(volatile unsigned int *)0x1000a020=*(u64 *)(a+0x50)&0x7fff;
 if ((b&0x70000000)==0x70000000) *(volatile unsigned int *)0x1000a010=(b&0xfffffff)|0x80000000; else *(volatile unsigned int *)0x1000a010=b&0xfffffff;
 *ch=0x101; return 0;
 fail: func_003F9698(D_00488890); return -1;
}
