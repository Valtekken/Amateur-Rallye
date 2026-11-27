typedef struct { char pad[0x18]; s16 off18; s16 pad1A; void *(*fn1C)(void *); } VT;
typedef struct { void *child, *next; char pad[8]; VT *vt; } Arg2;
typedef struct { s32 f0,f4,f8,fC,f10,f14,f18,f1C,f20,f24,f28,f2C,f30; } Item;
typedef struct { Item *begin,*insert,*end; } Vec;
typedef struct { char pad[0x34]; Vec vec; } Arg1;
typedef struct { char pad[0x14]; Vec *inner; } Out1;
typedef struct { char pad[0x1C]; s32 count; } Out2;
extern void *func_00212D50(void **, s32, void **);
extern void func_0020F310(Vec *, Item *, Item *);
void func_001F4248(s32 arg0, Arg1 *arg1, Arg2 *arg2);
void func_001F4248(s32 arg0, Arg1 *arg1, Arg2 *arg2) {
 void *p; Out1 *o1,*o1c; Out2 *o2; Vec *v; Item *src,*sp,*dst; Arg2 *child; s32 *d0,*d4,*d7,*d10;
 p=arg2->vt->fn1C((char*)arg2+arg2->vt->off18);
 if(p!=0) {
  func_00212D50(&o1,arg0+0x24,&p);
  o2=(Out2*)p; o1c=o1;
  o2->count=(((s32)arg1->vec.end-(s32)arg1->vec.begin)*(s32)0xC4EC4EC5)>>2;
  v=o1c->inner;
  src=v->begin;
  if(src!=v->end) {
   sp=(Item*)((char*)src+0x28);
   for(;src!=v->end;src=(Item*)((char*)src+0x34),sp=(Item*)((char*)sp+0x34)) {
    dst=arg1->vec.insert;
    d0=(s32*)dst; d4=d0+4; d7=d0+7; d10=d0+10;
    if(dst!=arg1->vec.end) {
     if(dst!=0) {
      d0[0]=*(s32*)((char*)sp-0x28); d0[1]=*(s32*)((char*)sp-0x24); d0[2]=*(s32*)((char*)sp-0x20); d0[3]=*(s32*)((char*)sp-0x1C); d0[4]=*(s32*)((char*)sp-0x18);
      d4[1]=*(s32*)((char*)sp-0x14); d4[2]=*(s32*)((char*)sp-0x10); d0[7]=*(s32*)((char*)sp-0xC);
      d7[1]=*(s32*)((char*)sp-8); d7[2]=*(s32*)((char*)sp-4); d0[10]=*(s32*)sp;
      d10[1]=*(s32*)((char*)sp+4); d10[2]=*(s32*)((char*)sp+8);
     }
     arg1->vec.insert=(Item*)((char*)dst+0x34);
    } else func_0020F310(&arg1->vec,dst,src);
   }
  }
 }
 for(child=arg2->child;child!=0;child=child->next) func_001F4248(arg0,arg1,child);
}
