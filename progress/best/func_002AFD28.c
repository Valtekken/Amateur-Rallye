typedef struct E { int a,b,key; } E;
typedef struct A { E **items; u32 count; } A;
void func_002AFD28(A *a, A *out) {
 u32 n=a->count, i=0, top=0xffffffff, j, next, k;
 volatile char pad[16]; u32 *stack=__builtin_alloca((n<<5)>>3);
 if(n) do {
   j=top;
   if(j!=0xffffffff && a->items[i]->key-a->items[j]->key<0) {
     E **dst=out->items;
loop:
     dst[out->count++]=a->items[j];
     next=stack[j];
     a->items[j]=0;
     j=next;
     if(j!=0xffffffff && a->items[i]->key-a->items[j]->key<0) goto loop;
   }
   top=i;
   stack[i]=j;
   i++;
 } while(i<n);
 i=0; k=0;
 if(n) do {
   E *p=a->items[i];
   if(p) a->items[k++]=p;
   i++;
 } while(i<n);
 a->count=k;
}
