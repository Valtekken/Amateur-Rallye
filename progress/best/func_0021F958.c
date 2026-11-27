typedef struct Node { void *item; struct Node *next,*prev; } Node;
typedef struct { char pad[4]; Node kill,make; char pad2[8]; Node tick[7]; } Manager;
typedef struct { int a,b,c,depth; } Log;
extern Log D_004262B0;
extern char D_00478E78[],D_00478E80[],D_00478E98[],D_00478EA8[],D_00478EB8[],D_00478EC0[],D_00478ED0[];
extern void func_003F9698(const char *,...);
extern void func_0021FBA0(void *,void *);
void func_0021F958(void *unused, Manager *m) {
 char tmp[16]; Node *p,*head; int i;
 func_003F9698(D_00478E80); D_004262B0.depth++;
 func_003F9698(D_00478E98); D_004262B0.depth++;
 head=&m->kill; p=head->next;
 while(p!=head) {func_0021FBA0(tmp,((volatile Node *)p)->item); func_003F9698(D_00478E78); p=((volatile Node *)p)->next;}
 D_004262B0.depth--; func_003F9698(D_00478EA8); D_004262B0.depth++;
 head=&m->make; p=head->next;
 if(p!=head) { do { void *item=p->item; func_0021FBA0(tmp,item); func_003F9698(D_00478E78); p=p->next; } while(p!=head); }
 D_004262B0.depth--; func_003F9698(D_00478EB8); func_003F9698(D_00478EC0); D_004262B0.depth++;
 for(i=6;i>=0;i--) { head=(Node *)((char *)m+0x24+i*12); if(head->next!=head) {
 func_003F9698(D_00478ED0,i); D_004262B0.depth++;
 p=head->next; if(p!=head) do {func_0021FBA0(tmp,p->item); p=p->next;} while(p!=head);
 D_004262B0.depth--; func_003F9698(D_00478EB8);
 }}
 D_004262B0.depth--; func_003F9698(D_00478EB8); D_004262B0.depth--; func_003F9698(D_00478EB8);
}
