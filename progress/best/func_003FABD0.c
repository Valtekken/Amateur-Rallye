int func_003FABD0(const unsigned char *a,const unsigned char *b,unsigned int n) {
 unsigned long long x; const unsigned char *p=a,*q=b;
 if(!n) return 0;
 if(!(((unsigned int)a|(unsigned int)b)&7)) {
 if(n>=8 && *(u64 *)p==*(u64 *)q) {
 do { n-=8; if(!n) return 0; x=*(u64 *)p; p+=8; if((x-0x0101010101010101ULL)&~x&0x8080808080808080ULL) return 0; q+=8; } while(n>=8 && *(u64 *)p==*(u64 *)q);
 a=p;b=q;
 }}
 while(n) { if(*a!=*b) return *a-*b; if(!*a) return 0; a++;b++; n--; } return 0;
}
