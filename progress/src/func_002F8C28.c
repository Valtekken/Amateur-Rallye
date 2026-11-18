typedef struct {s32 v;s32 pad[3];} It;extern void func_002F8BE8(void*,s32*);
void func_002F8C28(void *a){volatile It i;It cur;volatile It saved;i.v=0;cur.v=*(s32*)((u8*)a+48);if(cur.v){do{s32 n=i.v;saved.v=n;cur.v=*(s32*)((u8*)*(s32**)((u8*)a+12)+(n<<2));func_002F8BE8(a,&cur.v);{s32 c;n=i.v+1;c=*(s32*)((u8*)a+48);i.v=n;cur.v=c;if(n==c)break;}}while(1);}}
