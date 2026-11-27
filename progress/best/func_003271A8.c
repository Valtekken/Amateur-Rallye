typedef struct {char *start,*end,*cap;} Vec;
extern Vec D_0042DB58,D_0042DB70;
extern char D_0040E618[];
extern void func_002B2028(void *);
void func_003271A8(int a,int b) {
 char *p,*end,*base; int n; volatile char pad[16];
 if(b!=0xffff)return;
 if(a) {D_0042DB58.start=0;D_0042DB58.cap=(D_0042DB58.end=0);D_0042DB70.start=0;D_0042DB70.cap=(D_0042DB70.end=0);return;}
 p=D_0042DB70.start;end=D_0042DB70.end;
 while(p<end) {
 Vec *v=(Vec *)p; base=v->start;n=(v->cap-base)>>2;
 if(n) {if(n*4)func_002B2028(base);else {*(void **)base=*(void **)(D_0040E618-4);*(void **)(D_0040E618-4)=base;}}
 p+=0x20;
 }
 base=D_0042DB70.start;n=(D_0042DB70.cap-base)>>5;
 if(n) {if(n*32)func_002B2028(base);else {*(void **)base=*(void **)(D_0040E618-4);*(void **)(D_0040E618-4)=base;}}
 base=D_0042DB58.start;n=(D_0042DB58.cap-base)>>2;
 if(n) {if(n*4)func_002B2028(base);else {*(void **)base=*(void **)(D_0040E618-4);*(void **)(D_0040E618-4)=base;}}
}
