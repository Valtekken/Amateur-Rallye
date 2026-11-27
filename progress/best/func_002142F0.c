typedef struct E {float key;u32 a,b,c;} E;
extern void func_00214210(E *,int,int,E *);
void func_002142F0(E *a,int start,int end,E *value){int i=start; int original=i; int child=original*2+2;E tmp=*value; E *t=&tmp;
while(child<end){int less=a[child].key<a[child-1].key; child-=less; a[i]=a[child];i=child;child=(i+1)*2;}
if(child==end){a[i]=a[child-1];i=child-1;}
func_00214210(a,i,original,t);
}
