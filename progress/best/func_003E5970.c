extern int func_003E5438(void *, int);
void func_003E5970(char *p) {
 int x;
 *(int*)(p+0x164)=func_003E5438(p,4);
 *(int*)(p+0x168)=func_003E5438(p,4);
 *(int*)(p+0x16c)=func_003E5438(p,4);
 *(int*)(p+0x170)=func_003E5438(p,4);
 x=func_003E5438(p,2); *(unsigned*)0x10002010=(*(unsigned*)0x10002010 & 0xfffcffff)|(x<<16);
 x=func_003E5438(p,2); *(int*)(p+0x174)=x; if(!*(int*)(p+0xd4)) *(int*)(p+0xd4)=x;
 *(int*)(p+0x178)=func_003E5438(p,1);
 *(int*)(p+0x17c)=func_003E5438(p,1);
 *(int*)(p+0x180)=func_003E5438(p,1);
 x=func_003E5438(p,1); *(unsigned*)0x10002010=(*(unsigned*)0x10002010 & 0xffbfffff)|(x<<22);
 x=func_003E5438(p,1); *(unsigned*)0x10002010=(*(unsigned*)0x10002010 & 0xffdfffff)|(x<<21);
 x=func_003E5438(p,1); *(unsigned*)0x10002010=(*(unsigned*)0x10002010 & 0xffefffff)|(x<<20);
 *(int*)(p+0x184)=func_003E5438(p,1);
 func_003E5438(p,1); *(int*)(p+0x188)=func_003E5438(p,1);
 if(func_003E5438(p,1)) {func_003E5438(p,1);func_003E5438(p,3);func_003E5438(p,1);func_003E5438(p,7);func_003E5438(p,8);}
}
