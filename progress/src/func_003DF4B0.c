void func_003DF4B0(void*a,s32 b){if(b){s32 f=*(s32*)a;if(f&2)*(s32*)a=f&~2;}else if(!(*(s32*)a&2)){char*v=*(char**)((char*)a+0x50);((s32(*)(void*,s32,s32))*(u32*)(v+0x54))((char*)a+*(s16*)(v+0x50),0,0);}}
void func_003DF830(void*a,s32 b){func_003DF4B0((char*)a+8,b);}
typedef struct Blend{u16*out;s32 offset,rows,extra,stride;u8*a,*b;}Blend;
void func_003E3300(Blend*p){u8*a=p->a,*b=p->b;u16*out=p->out;int pass,extra,row,i;for(pass=0;pass<2;pass++){for(extra=0;extra<1+!!p->extra;extra++){for(row=p->rows;row>0;row--){u8 v[16];for(i=0;i<16;i++)v[i]=i<8?a[i]:b[i-8];for(i=0;i<8;i++)out[i]=(v[(i+p->offset)&15]+v[(i+p->offset+1)&15]+1)>>1;a+=p->stride;b+=p->stride;out=(u16*)((char*)out+p->stride*2);}a+=320;b+=320;}a=p->a+64;b=p->b+64;out=p->out+64;}}
extern s32*func_003DB190(s32,s32);
s32*func_003DB558(s32 a,s32 b){s32*p=func_003DB190(a,1);p[5]=b;p[4]=1;return p;}
