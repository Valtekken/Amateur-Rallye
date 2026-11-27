typedef struct {char pad[24]; unsigned char **data; char pad2[16]; int enabled;} A;
typedef struct {char pad[116]; u64 *begin,*end;} B;
extern void func_00321098(void *);
void func_00320F90(void *arg0,A *a,B *b) {
 int n,i,j,start,end;
 if(b && a->enabled) {
 n=b->end-b->begin;
 if(n) for(i=0;i<n;i++) {
  u64 t=(b->begin[i] & 0xfff0000fffffffffULL) | 0x400000000000ULL;
  start=(int)((t>>16)&0x7ffff); end=start+(unsigned short)t;
  for(j=start;j<end;j++) {
   unsigned char *p=*a->data+j*48+44;
   p[0]=0xfe; p[1]=0xfe; p[3]=0xfe; p[2]=0xfe;
  }
 }
 }
 func_00321098(arg0);
}
