extern void D_002AD390(void*);extern void func_001D1900(void*);extern void func_001D3250(void*,int);
typedef struct N{void*data;struct N*next;}N;
static inline void* first(N*p){void*n=0;if(p->next!=p)n=p->next->data;return n;}
void func_001D39A0(char*p){N*l;p+=12;l=(N*)p;if(l->next!=l){do{void*n=first(l);if(n){func_001D1900((char*)n+4);func_001D3250(n,2);D_002AD390(n);}}while(l->next!=l);}}
void func_001D3208(char**p){char*q=*p;if(q){char*v=*(char**)q;s16 d=*(s16*)(v+32);void(*f)(void*)=*(void(**)(void*))(v+36);f(q+d);}}
u32 func_001D30E8(u32*p,s8*s){long h=0;u32 t;u8 c=(u8)*s;if(*s){do{h=(h<<4)+(s8)c;t=h&0xf0000000;s++;if(t)h=h^(t>>24)^t;c=(u8)*s;}while(*s);}return h%*p;}
