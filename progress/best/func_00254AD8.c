typedef struct P {int x,side;} P; typedef struct V {P **begin,**end,**limit;} V;
typedef struct N {struct N *next,*prev; P *p;} N;
extern N *func_002B1FC0(int),*func_003D2910(int); extern void func_001CAB58(V *,P **,P **);
void func_00254AD8(int unused,V *src,V *a,V *b,N **list){
 volatile char pad[16]; int i,n; P *p,*t1,*t2,*t3,*t4; P **end; N *volatile at; N *node;
 n=src->end-src->begin;
 for(i=0;i<n;i++){P **q=src->begin;q+=i;p=*q;
 if(p->side==0){at=*list;node=func_002B1FC0(12);if(!node)node=func_003D2910(12);if(&node->p)node->p=p;node->next=at;node->prev=at->prev;at->prev->next=node;at->prev=node; {N *volatile ret=node;}
 t1=p;end=a->end;if(end!=a->limit){if(end)*end=p;a->end++;}else func_001CAB58(a,end,&t1);
 t2=p;end=b->end;if(end!=b->limit)goto insert;else func_001CAB58(b,end,&t2);
 }else if(p->side==-1){t3=p;end=a->end;if(end!=a->limit){if(end)*end=p;a->end++;}else func_001CAB58(a,end,&t3);
 }else{t4=p;end=b->end;if(end!=b->limit){insert: if(end)*end=p;b->end++;}else func_001CAB58(b,end,&t4);}
 }
}
