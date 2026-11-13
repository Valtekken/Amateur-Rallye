typedef struct {float x,y,z;} V;
V *func_00151630(V *a,V *b,V *d){V *r=d;if(a!=b){do{if(r){r->x=a->x;r->y=a->y;r->z=a->z;}a++;r++;}while(a!=b);}return r;}
