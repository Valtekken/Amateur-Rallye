extern void func_002D9828(void *,void *,void *),func_0036AF00(void *),func_0036B0D0(void *),func_0036F788(void *,void *);
typedef struct {char *start,*end,*cap;} V;
void func_0036AD18(char *a) {
 V *groups=(V *)(a+0x24),*freev,*g,*data;
 unsigned k=0; int j; unsigned short id,last; char *item; short *end;
 if((int)((unsigned)(groups->end-groups->start)*0xaaaaaaabu)>>2) do {
 g=(V *)(groups->start+k*12); j=((g->end-g->start)>>1)-1;
 for(;j>=0;j--) {
 id=((unsigned short *)g->start)[j]; item=*(char **)(a+4)+id*0x54; data=*(V **)(item+0x30);
 if(((int)((unsigned)(data->end-data->start)*0xaaaaaaabu)>>4)==0) {
 if(++*(int *)(item+0x34)>=9) {
 func_0036F788(a+0x10,item+0x40);func_0036AF00(item);
 end=(short *)g->end;last=end[-1];g->end-=2;((unsigned short *)g->start)[j]=last;
 *(int *)(*(char **)(a+4)+last*0x54+0x3c)=j;
 freev=(V *)(a+0x30); if(freev->end==freev->cap)func_002D9828(freev,freev->end,&id);
 else {if(freev->end) *(unsigned short *)freev->end=id;freev->end+=2;}
 }
 } else {func_0036B0D0(item);*(int *)(item+0x34)=0;}
 }
 k++;
 } while(k<(unsigned)((int)((unsigned)(groups->end-groups->start)*0xaaaaaaabu)>>2));
}
