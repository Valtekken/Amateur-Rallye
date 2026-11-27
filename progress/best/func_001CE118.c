extern char D_0040E618[], D_004731A0[];
extern void func_002B2028(void *);
extern void func_001CEE20(void *, int);
extern void D_002AD390(void *);
typedef struct { char *start,*end,*cap; } V;
void func_001CE118(char *obj, int mode) {
 V *v=(V *)(obj+0xb8); char *p,*end; int n;
 end=v->end; p=v->start;
 while(p<end) p+=20;
 p=v->start; n=(s32)((u32)(v->cap-p)*0xcccccccdu)>>2;
 if(n) { if(n*20) func_002B2028(p); else { *(void **)p=*(void **)(D_0040E618-4); *(void **)(D_0040E618-4)=p; } }
 v=(V *)(obj+0xac); end=v->end; p=v->start;
 if(p<end) { do { p+=4; } while(p<end); }
 p=v->start; n=(v->cap-p)>>2;
 if(n) { if(n*4) func_002B2028(p); else { *(void **)p=*(void **)(D_0040E618-4); *(void **)(D_0040E618-4)=p; } }
 func_001CEE20(obj+0x48,2);
 v=(V *)(obj+0x30); end=v->end; p=v->start;
 if(p<end) { do { p+=4; } while(p<end); }
 p=v->start; n=(v->cap-p)>>2;
 if(n) { if(n*4) func_002B2028(p); else { *(void **)p=*(void **)(D_0040E618-4); *(void **)(D_0040E618-4)=p; } }
 *(void **)obj=D_004731A0;
 if(mode&1) D_002AD390(obj);
}
