extern int D_004411A8;
typedef struct { int id; int *result; int size; unsigned char name[1024], name2[1024], data[1024]; int count; } Msg;
extern Msg D_0049FF80;
extern char D_004A0BC0[], D_004A1240[];
extern void func_00406B18(int), func_00406B48(void), func_00406C18(void);
extern int CreateSema_2(void *), DeleteSema_2(int), WaitSema_2(int);
extern int func_004055A0(void *, int);
extern int func_00405E90(void *, int, int, void *, int, void *, int, int, int);
int func_004082E0(unsigned char *a, unsigned char *b, unsigned char *src, int d) {
 Msg *p=&D_0049FF80; int sem[8], result, i, id, val; s8 cc;
 func_00406B18(14); if (!D_004411A8) func_00406C18();
 i=0; cc=(p->name[0]=a[0]);
 if(cc) { do { i++; if(i>=1024) break; cc=(p->name[i]=a[i]); } while(cc); }
 if(i==1024) p->name[1023]=0;
 if (b != NULL) {
   i=0; cc=(p->name2[0]=b[0]);
   if(cc) { do { i++; if(i>=1024) break; cc=(p->name2[i]=b[i]); } while(cc); }
   if(i==1024) p->name2[1023]=0;
 } else {
   p->name2[0]=0;
 }
 if (d >= 0x401) { func_00406B48(); return -7; }
 if (d > 0) {
   for (i=0; i<d; i++) p->data[i]=src[i];
 }
 p->count=d;
 sem[1]=1; sem[2]=0; sem[5]=0; id=CreateSema_2(sem);
 p->result=&result; p->id=id; p->size=4;
 func_004055A0(p, 0xC10);
 if(func_00405E90(D_004A1240,14,0,p,0xC10,D_004A0BC0,4,0,0)<0) { DeleteSema_2(id); func_00406B48(); return -11; }
 val=*(int *)((unsigned int)D_004A0BC0 | 0x20000000); func_00406B48();
 if(!val) { DeleteSema_2(id); return -11; }
 WaitSema_2(id); DeleteSema_2(id); return result;
}
