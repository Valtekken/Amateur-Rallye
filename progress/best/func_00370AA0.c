extern float func_003F3058(float);
typedef struct { char *start,*end; } Range;
void func_00370AA0(Range *a, Range *b, float t, float blend) {
 int n=(a->end-a->start)>>2, i, count; float scaled, f, r; float *x,*y; char *out;
 if(!n)return;
 scaled=t*(float)(unsigned int)(n-1); f=func_003F3058(scaled); i=(int)f; r=scaled-f;
 if(i<0 || (unsigned)i >= (unsigned)((a->end-a->start)>>2)) i=0;
 x=**(float ****)(a->start+i*4); y=**(float ****)(a->start+(i+1)*4);
 out=b->start; count=(int)((unsigned)(b->end-out)*0xaaaaaaabu)>>4;
 if(count>0) do { float a0,a1,a2; count--;
 a0=x[0]+(y[0]-x[0])*r; a1=x[1]+(y[1]-x[1])*r; a2=x[2]+(y[2]-x[2])*r;
 *(float *)(out+0x20)=a0+(*(float *)(out+0x20)-a0)*blend;
 *(float *)(out+0x24)=a1+(*(float *)(out+0x24)-a1)*blend;
 *(float *)(out+0x28)=a2+(*(float *)(out+0x28)-a2)*blend;
 x+=3;y+=3;out+=0x30;
 } while(count);
}
