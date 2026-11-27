extern float func_003F3058(float);
typedef struct { char *start,*end; } Range;
void func_00370930(Range *a, Range *b, float t) {
 int n=(a->end-a->start)>>2, i, count; float scaled, f, r; float *x,*y; char *out;
 if(!n)return;
 scaled=t*(float)(unsigned int)(n-1); f=func_003F3058(scaled); i=(int)f; r=scaled-f;
 if(i<0 || (unsigned)i >= (unsigned)((a->end-a->start)>>2)) i=0;
 x=**(float ****)(a->start+i*4); y=**(float ****)(a->start+(i+1)*4);
 out=b->start; count=(int)((unsigned)(b->end-out)*0xaaaaaaabu)>>4;
 if(count>0) do { count--;
 *(float *)(out+0x20)=x[0]+(y[0]-x[0])*r;
 *(float *)(out+0x24)=x[1]+(y[1]-x[1])*r;
 *(float *)(out+0x28)=x[2]+(y[2]-x[2])*r;
 x+=3;y+=3;out+=0x30;
 } while(count);
}
