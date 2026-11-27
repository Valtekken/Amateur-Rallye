typedef struct N {struct N *next; short key; short pad; int value,extra;} N;
typedef struct {int unk; N **begin,**end,**cap; int count;} T;
typedef struct {short key; short pad; int value,extra;} K;
typedef struct {N *node; T *table;} Pair;
typedef struct {Pair pair; int inserted;} R;
typedef struct {int *map; char pad[32]; struct {int x,refs;} *entries;} G;
extern G D_004262D0;
extern void *func_002B1FC0(int);
extern void *func_003D2910(int);
R *func_003604D0(R *out,T *table,K *key) {
 unsigned h=(unsigned)key->key % (unsigned)(table->end-table->begin);
 N *head=table->begin[h], *p=head; Pair pair;
 while(p) {
  if(p->key==key->key) {pair.node=p; pair.table=table; out->pair=pair; out->inserted=0; goto done;}
  p=p->next;
 }
 p=func_002B1FC0(16); if(!p) p=func_003D2910(16);
 p->next=0;
 if (&p->key) {
  p->key=key->key; { int val=key->value; p->value=val; if(val>=0) D_004262D0.entries[D_004262D0.map[val]].refs++; }
  p->extra=key->extra;
 }
 p->next=head; table->begin[h]=p; table->count++;
 pair.node=p; pair.table=table; out->pair=pair; out->inserted=1; done: return out;
}
