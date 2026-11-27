extern char D_004777C8[],D_004777E0[],D_00477808[],D_00477850[],D_00477858[],D_004774D8[];
extern int D_004262B0[];
extern void func_003F9698(char *, ...);
typedef struct { char *start,*end; } List;
void func_001F45B8(void *unused, List *l) {
 char *p; int i; char *q,*a,*b,*next; int *flags; int off1,off2;
 func_003F9698(D_004777C8, (s32)((u32)(l->end-l->start)*0xBA2E8BA3u)>>3);
 D_004262B0[3]++;
 for(p=l->start;p!=l->end;p=next) {
  next=p+0x58; q=p+0x10; flags=(int *)(p+0x3c); b=p+8;
  func_003F9698(D_004777E0,(s32)((u32)(p-l->start)*0xBA2E8BA3u)>>3,*(int *)(p+0x54));
  D_004262B0[3]++;
  a=p+4; off1=off2=0;
  for(i=0;i<3;i++,q+=0x14,flags++,off2+=0x14,off1+=0x14) {
   if(*flags) func_003F9698(D_00477808,i,*(int *)(q-0x10)?D_00477850:D_00477858,*(int *)(a+off1)?D_00477850:D_00477858,*(int *)(b+off2)?D_00477850:D_00477858,*(int *)q);
  }
  D_004262B0[3]--;
 }
 D_004262B0[3]--;
 func_003F9698(D_004774D8);
}
