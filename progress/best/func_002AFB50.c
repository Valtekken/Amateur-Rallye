typedef struct {u64 x[95];} Block;
extern char *func_002AF480(void),*func_002AF568(void*,void*),*func_002AF670(char*,void*,void*,u32*),*func_002AEE70(char*,int*);
extern void *func_003F94D0(void*,int,int);
void *func_002AFB50(u32 a,Block *out){
 struct {char *s; int v; int pad[2];u16 h;} hdr;
 Block buf; int len; u32 idx; char *base,*p,*end,*data; int *off;
 base=func_002AF480();if(!base)return 0;p=func_002AF568(base,&hdr);if(!p)return 0;
 func_003F94D0(&buf,0,0x2f8);*(u16*)((char*)&buf+0x29a)=hdr.h;((int*)&buf)[1]=hdr.v;
 off=(int *)(base-(*(int*)(base+4)-4));end=(char*)off+*off+4;
 if(p<end){data=base+0x10;do {p=func_002AF670(p,&buf,&hdr,0);} while(p<end);} else data=base+0x10;
 if(*hdr.s=='z')data=func_002AEE70(data,&len)+len;
 end=base+*(int*)base+4;idx=*(u32*)(base+8);
 while(data<end && a>=idx)data=func_002AF670(data,&buf,&hdr,&idx);
 *out=buf;return out;
}
