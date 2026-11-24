typedef struct {u64 a,b;} V;
extern V D_00488F28,D_00488F48,D_00489120;
extern void D_002AD530(void*), D_002AD390(void*);
typedef struct {char pad[32]; void *p; char pad2[4]; V *v;} Obj;
void func_003D54E0(Obj **a,int flags){Obj *p=*a; V x,y; p->v=&D_00488F28; if(!flags){x=D_00488F28; p->v=&x; *(u16*)((char*)&x+8)+=(char*)a-((char*)p-8);} p->v=&D_00488F48; y=D_00488F48; *(u16*)((char*)&y+8)+=(char*)a-((char*)p-8); p->v=&y; if(flags&2){p->v=&D_00489120; if(p->p) D_002AD530(p->p);} if(flags&1) D_002AD390(a);}
