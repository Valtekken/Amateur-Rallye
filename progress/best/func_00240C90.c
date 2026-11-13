typedef struct{ s32 *begin; s32 end; s32 cap;} Vec;
typedef struct{Vec a,b,c;} Vectors;
s32 func_0024C4F8(s32,s32);s32 func_002502D0(s32,s32);
s32 func_00240C90(register Vectors*p){register s32 n=(p->a.end-(s32)p->a.begin)>>2; register s32 i=0;if(n>0){register Vec *b=&p->b;register Vec*c=&p->c;do{s32 offset=i*4; s32 *base=p->a.begin; register s32 j=0; register s32 m; register s32 found=0; register s32 item; m=(b->end-(s32)p->b.begin)>>2;item=*(s32*)((u8*)base+offset);if(m>0){do{found |= (func_0024C4F8(*(s32*)((u8*)p->b.begin+j*4),item)!=0);j++;}while(j<m);}if(!found)return 0;m=(c->end-(s32)p->c.begin)>>2;j=0;if(m>0){do{found |= (func_002502D0(*(s32*)((u8*)p->c.begin+j*4),item)!=0);j++;}while(j<m);}i++;if(!found)return 0;}while(i<n);}return 1;}
