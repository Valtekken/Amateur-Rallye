extern void *func_003CD828(void *); extern void func_003CDDB0(void **,int,int,int,int); extern void func_002B2028(void *); extern void *D_00437E18[];
void **func_003CEF78(void **out, void **in, s8 c) {
 char *p=*in,*h=p-16; void *volatile tmp; void *v; int size; void **slot; volatile char pad[16];
 if(*(int *)(h+12)) p=func_003CD828(h); else ++*(int *)(h+8);
 tmp=p; func_003CDDB0((void **)&tmp,*(int *)((char *)tmp-16),0,1,c);
 p=tmp; h=p-16;
 if(*(int *)(h+12)) v=func_003CD828(h); else {v=p; ++*(int *)(h+8);}
 *out=v; p=tmp; h=p-16;
 if(--*(int *)(h+8)==0) {size=*(int *)(h+4); if((unsigned)(size+16)>128) func_002B2028(h); else {slot=&D_00437E18[((unsigned)(size+23)>>3)-1]; *(void **)h=*slot; *slot=h;}}
 return out;
}
