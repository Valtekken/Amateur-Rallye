typedef struct { u32 *data; void *allocation; int capacity, count, tag; } Buf;
extern int D_0043C000; extern void *D_002AD5A8(int); extern void D_002AD530(void *); extern void func_003F931C(void *,void *,int);
void func_002EFED0(void *unused, Buf *p, u32 arg2, u32 arg3) {
 int n=p->count; u32 v=arg3>>4;
 if(p->capacity-n<4) { unsigned want=n+36; int shift=0, size, capacity; void *raw; u32 *aligned;
 D_0043C000=p->tag; while ((unsigned)(1<<shift)<want) shift++;
 size=1<<shift; capacity=size-32; raw=D_002AD5A8(size*4); aligned=(u32 *)(((u32)raw+127)&~127);
 if(p->count>0) func_003F931C(aligned,p->data,p->count*4);
 if(p->allocation) D_002AD530(p->allocation);
 p->allocation=raw;p->data=aligned;p->capacity=capacity;D_0043C000=0;
 }
 p->data[p->count++]=v|0x30000000; p->data[p->count++]=arg2; p->data[p->count++]=0; p->data[p->count++]=v|0x50000000;
}
