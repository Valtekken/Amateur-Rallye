/* identical to func_001FDBA8 (matched), with its names changed by decompdecomp */
typedef struct {void **begin,**end,**cap;} V6; void *func_00293270(volatile V6 *v,u32 index){void **p=v->begin;void **e=v->end;index=*(volatile u32*)index; if(index>=(u32)(e-p))return 0;return *(void**)((u32)p + (index<<2));}
