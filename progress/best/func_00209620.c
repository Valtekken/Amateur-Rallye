extern void D_002AD390(void *);
extern void D_002AD530(void *);
extern void *D_002AD5A8(int);
extern void func_002B2028(void *);
extern void *D_0040E618[];
typedef struct { int *start; int *x; int *end; } Item;
typedef struct { char pad[12]; Item **items; char pad2[0x7c]; char *begin; char *end; } Obj;
void func_00209620(Obj *o, int n) {
 Item **p, **end; Item *it; int *a; int count; int *mem; Item **out, **q; int i; char *b,*e,*v; unsigned diff; char **field;
 if (o->items) {
  p = o->items + *(int *)((char *)o->items-16);
  if (o->items != p) {
   do {
    --p; it=*p;
    if(it) {
     count=it->end-it->start; a=it->start;
     if(count) {
      if(count*4) func_002B2028(a);
      else { *a=(int)D_0040E618[-1]; D_0040E618[-1]=a; }
     }
     D_002AD390(it);
    }
   } while(o->items != p);
  }
  D_002AD530((char *)o->items-16);
 }
 mem=D_002AD5A8(n*4+16); out=(Item **)(mem+4); *mem=n; field=&o->begin;
 q=out; i=n-1;
 if(n) { do { *q=0; i--; q++; } while(i!=-1); }
 o->items=out;
 e=field[1]; b=o->begin; diff=e-b;
 v=b; while(v<e) { v+=0x38; }
 field[1]=e-diff;
}
