typedef unsigned int U128 __attribute__((mode(TI)));
void *func_003F931C(void *dest,const void *src,int n){
 unsigned char *d=dest,*tail=dest;const unsigned char*s=src;int left;
 if((u32)n>=32&&!(((u32)s|(u32)dest)&15)){do{*(U128 *)d=*(const U128 *)s;d+=16;s+=16;*(U128 *)d=*(const U128 *)s;d+=16;s+=16;n-=32;}while((u32)n>=32);
 while((u32)n>=8){*(u64 *)d=*(const u64 *)s;d+=8;s+=8;n-=8;}tail=d;}
 n--;if(n!=-1){do{unsigned char b=*s;n--;s++;*tail=b;tail++;}while(n!=-1);}return dest;
}
