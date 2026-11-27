typedef struct {u64 a,b;} Pair;
extern Pair D_00488F38,D_00488F48,D_00488F58,D_00489120;
void *func_003D55C0(char *p,int flag){
Pair a,b,c; char *x,*y;
if(flag){ *(char **)p=*(char **)(p+8)=p+16; x=p+16; x[26]=4; x[27]=0; *(Pair **)(x+40)=&D_00489120; *(short *)(x+24)=32; *(long long *)(x+16)=17; *(int *)(p+16)=0; *(int *)(x+28)=6; *(int *)(x+32)=0; *(int *)(x+8)=0; *(int *)(x+4)=0; }
x=*(char **)p; y=*(char **)(p+8);
*(Pair **)(x+40)=&D_00488F48; a=D_00488F48; *(Pair **)(x+40)=&a;
*(Pair **)(y+40)=&D_00488F58; *(int *)(p+4)=0; b=D_00488F58; *(Pair **)(y+40)=&b;
*(u16 *)&a.b = *(u16 *)&D_00488F48.b + (p-(x-8)); *(u16 *)&b.b = *(u16 *)&D_00488F58.b + (p-y+16);
*(Pair **)(x+40)=&D_00488F38;
if(!flag){c=D_00488F38; *(Pair **)(x+40)=&c; *(u16 *)&c.b = *(u16 *)&D_00488F38.b + (p-(x-16));}
return p;}
