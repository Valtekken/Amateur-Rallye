extern char D_00448800[];
extern int func_003F9698(char *,...);
extern int func_002B4740(void),func_002B2360(int,int,int),func_002B4570(int,int,int),func_002B4658(int,int,int);
typedef struct { char pad[16]; int state,value,pad18,tick; } A;
void func_00129068(A *a) {
 int r,v;
 if(a->tick==0) {
 func_003F9698(D_00448800); r=func_002B2360(func_002B4740(),0,0);
 if(r==-10) { v=2; goto set; } v=3; if(r==-1) goto set; if(r==0) { a->state=0; goto next; } if(r==1) { v=4; goto set; } v=6; if(r==2) v=5; set: a->state=v; next:
 a->value=func_002B4570(func_002B4740(),0,0);
 if(a->state==4 && a->value) { if(func_002B4658(func_002B4740(),0,0)) a->state=0; }
 } else a->state=7;
 if(++a->tick==50) a->tick=0;
}
