typedef struct { char *begin, *end; } Outer;
typedef struct { s32 f0,f4,f8,fC,f10,f14,f18,f1C,f20,f24,f28,f2C,f30; } Item;
typedef struct { s32 f0,f4,f8,fC; } Counter;
extern Counter D_004262B0;
extern char D_004774D8[], D_004780A8[], D_004780C8[], D_004780E8[];
extern volatile unsigned short func_003F9698(char *, ...);
void func_001F97B8(Outer *arg0) {
 Outer *o; Item *it; s32 var2;
 func_003F9698(D_004780A8, (s32)(((char*)arg0->end-(char*)arg0->begin)*0xAAAAAAAB)>>2);
 D_004262B0.fC++;
 o=arg0->begin;
 if(o!=(Outer*)arg0->end) {
  u32 m1=0xC4EC4EC5;
  for(;;) {
   func_003F9698(D_004780C8, (s32)(((char*)o->end-(char*)o->begin)*m1)>>2);
   D_004262B0.fC++;
   it=(Item*)o->begin;
   if(it!=(Item*)o->end) {
    u32 m2=0xC4EC4EC5;
    var2=it->f18;
    for(;;) {
     s32 n=(s32)(((char*)it-(char*)o->begin)*m2)>>2;
     func_003F9698(D_004780E8,n,it->f0,it->f4,it->f8,it->fC,it->f10,it->f14,var2,it->f1C,it->f20,it->f24,it->f28,it->f2C,it->f30);
     it=(Item*)((char*)it+0x34);
     if(it==(Item*)o->end) break;
     var2=it->f18;
    }
   }
   o=(Outer*)((char*)o+0xC);
   D_004262B0.fC--;
   func_003F9698(D_004774D8);
   if(o==(Outer*)arg0->end) break;
  }
 }
 D_004262B0.fC--;
 func_003F9698(D_004774D8);
}
