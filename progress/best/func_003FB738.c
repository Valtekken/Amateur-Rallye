extern int func_00400A98(u64),func_003F6EC0(u64),func_002AC4B0(u64,u64);
extern char *func_003FCC50(s32,u64,s32,s32,char*,s32*,s32,s32*);
extern int func_003FCE00(char*,s32,s32);
extern char D_0048BE80[],D_0048BE88[],D_0048BEE8[],D_0048BEF0[];
typedef struct File {u32 a[3];u16 flags;s16 fd;void *buf;} File;
typedef struct Vec {char *base;s32 len;} Vec;
typedef struct Out {Vec *v;u32 count;u32 size;} Out;
extern s32 *func_003FF5F0(void);
extern s32 func_003FDBA8(File *);
extern s32 func_003FB608(File *,char *,char *);
extern s32 func_003FB5C0(File *,Out *);
extern s32 func_003FF9D8(s32,s32*,char*,s32,s32*);
extern s32 D_004404DC,D_00440938;
extern char D_0048BE60[],D_0048BE70[],D_0048BE90[],D_0048BEB0[],D_0048BEA8[];
extern s32 func_003FA9B8(char*);
extern char *func_003F91A8(char*,s32,s32);
extern u64 func_0040D508(u64,u64);
extern u64 func_0040CF38(u64,u64);
s32 func_003FB738(s32 ctx,File *fp,char *fmt,char *ap) {
 char expbuf[16]; Out out;Vec vec[8],*vp; char buf[348],prefix[2],sign; s32 state,wc,scan,ret,n,width,prec,flags,ch,len,size,pad,base,dprec; char *start,*p,*digits; u64 val,real;char negative;int decpt,ndig,expsize;
 s32 decimal=*func_003FF5F0();state=0;
 if (!(fp->flags&8)||!fp->buf) if(func_003FDBA8(fp)) return -1;
 if ((fp->flags&26)==10&&fp->fd>=0) return func_003FB608(fp,fmt,ap);
 vp=vec;out.v=vec;out.count=out.size=0;ret=0;
 #define PRINT(P,N) do {vp->len=(N);vp->base=(P);vp++;out.size+=(N);if(++out.count>=8){if(func_003FB5C0(fp,&out))goto done;vp=vec;}}while(0)
 #define PAD(N,P) do {pad=(N);while(pad>16){PRINT(P,16);pad-=16;}if(pad>0){PRINT(P,pad);}}while(0)
 for(;;){
 start=fmt;while((scan=func_003FF9D8(D_004404DC,&wc,fmt,D_00440938,&state))>0){fmt+=scan;if(wc==37){fmt--;break;}}
 n=fmt-start;if(n){PRINT(start,n);ret+=n;}if(scan<=0)break;
 fmt++;flags=0;width=0;prec=-1;sign=0;dprec=0;
 again:ch=(signed char)*fmt++;
 dispatch:
 switch(ch){
 case ' ':if(!sign)sign=' ';goto again;
 case '#':flags|=1;goto again;
 case '*':width=*(s32*)ap;ap+=8;if(width>=0)goto again;width=-width;
 case '-':flags|=4;goto again;
 case '+':sign='+';goto again;
 case '.':ch=(signed char)*fmt++;if(ch=='*'){prec=*(s32*)ap;ap+=8;if(prec < -1)prec=-1;goto again;}
 prec=0;while((u32)(ch-'0')<10){prec=prec*10+(ch-'0');ch=(signed char)*fmt++;}goto dispatch;
 case '0':flags|=128;goto again;
 case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
 width=0;do {width=width*10+(ch-'0');ch=(signed char)*fmt++;}while((u32)(ch-'0')<10);goto dispatch;
 case 'L':flags|=8;goto again;
 case 'h':flags|=64;goto again;
 case 'l':if(*fmt=='l'){fmt++;flags|=32;}else flags|=16;goto again;
 case 'q':flags|=32;goto again;

 case 'c':buf[0]=*ap;ap+=8;p=buf;len=1;sign=0;prec=0;goto output;
 case 'D':flags|=16;
 case 'd':case 'i':if(flags&16)val=*(s64*)ap;else if(flags&64)val=*(s16*)ap;else val=*(s32*)ap;ap+=8;if((s64)val<0){val=-val;sign='-';}base=1;goto number;
case 'e':case 'E':case 'f':case 'g':case 'G':
 if(prec==-1)prec=6;else if((ch=='g'||ch=='G')&&!prec)prec=1;
 real=*(u64*)ap;ap+=8;
 if(func_00400A98(real)){if(func_002AC4B0(real,0)<0)sign='-';p=D_0048BE80;len=3;goto output;}
 if(func_003F6EC0(real)){p=D_0048BE88;len=3;goto output;}
 flags|=256;p=func_003FCC50(ctx,real,prec,flags,&negative,&decpt,ch,&ndig);
 if(ch=='g'||ch=='G'){if(decpt < -3 || decpt > prec)ch=ch=='g'?'e':'E';else ch='g';}
 if(ch<'f'){--decpt;expsize=func_003FCE00(expbuf,decpt,ch);len=expsize+ndig;if(ndig>1||(flags&1))len++;}
 else if(ch=='f'){if(decpt>0){len=decpt;if(prec||(flags&1))len+=prec+1;}else len=prec+2;}
 else if(decpt>=ndig)len=decpt+(flags&1);else if(decpt>0)len=ndig+1;else len=ndig+2-decpt;
 if(negative)sign='-';goto output;
 case 'n':if(flags&16)**(s64**)ap=ret;else if(flags&64)**(s16**)ap=ret;else **(s32**)ap=ret;ap+=8;continue;
 case 'O':flags|=16;
 case 'o':base=0;goto unsign;
 case 'p':val=*(u32*)ap;ap+=8;digits=D_0048BE90;base=2;flags|=2;ch='x';goto unumber;
 case 's':p=*(char**)ap;ap+=8;if(!p)p=D_0048BEA8;if(prec>=0){char *end=func_003F91A8(p,0,prec);if(end){len=end-p;if(len>prec)len=prec;}else len=prec;}else len=func_003FA9B8(p);sign=0;prec=0;goto output;
 case 'U':flags|=16;
 case 'u':base=1;goto unsign;
 case 'X':digits=D_0048BEB0;base=2;goto unsign;
 case 'x':digits=D_0048BE90;base=2;
 unsign:if(flags&16)val=*(u64*)ap;else if(flags&64)val=*(u16*)ap;else val=*(u32*)ap;ap+=8;if(base==2&&(flags&1)&&val)flags|=2;
 unumber:sign=0;
 number:dprec=0;if(prec>=0){dprec=prec;flags&=~128;}p=buf+348;
 if(val||dprec){if(base==0){do{*--p=(val&7)+'0';val>>=3;}while(val);if((flags&1)&&*p!='0')*--p='0';}else if(base==1){while(val>=10){*--p=func_0040D508(val,10)+'0';val=func_0040CF38(val,10);}*--p=val+'0';}else {do{*--p=digits[val&15];val>>=4;}while(val);}}
 len=buf+348-p;goto output;
  default:if(!ch)goto finish;buf[0]=ch;p=buf;len=1;sign=0;prec=0;
 }
 output:size=len;if(size<dprec)size=dprec;if(sign)size++;else size+=flags&2;
 if(!(flags&132)){PAD(width-size,D_0048BE60);}
 if(sign){PRINT(&sign,1);}else if(flags&2){prefix[0]='0';prefix[1]=ch;PRINT(prefix,2);}
 if((flags&132)==128){PAD(width-size,D_0048BE70);}
 PAD(dprec-len,D_0048BE70);
 if(flags&256){if(ch>='f'){
  if(!func_002AC4B0(real,0)){PRINT(D_0048BEE8,1);if(decpt<ndig||(flags&1)){PRINT((char*)decimal,1);PAD(ndig-1,D_0048BE70);}}
  else if(decpt<=0){PRINT(D_0048BEE8,1);PRINT((char*)decimal,1);PAD(-decpt,D_0048BE70);PRINT(p,ndig);}
  else if(decpt>=ndig){PRINT(p,ndig);PAD(decpt-ndig,D_0048BE70);if(flags&1){PRINT(D_0048BEF0,1);}}
  else{PRINT(p,decpt);p+=decpt;PRINT(D_0048BEF0,1);PRINT(p,ndig-decpt);}
 }else{
  if(ndig>1||(flags&1)){prefix[0]=*p++;prefix[1]='.';PRINT(prefix,2);if(func_002AC4B0(real,0)){PRINT(p,ndig-1);}else{PAD(ndig-1,D_0048BE70);}}
  else{PRINT(p,1);}PRINT(expbuf,expsize);
 }}else{PRINT(p,len);}
 if(flags&4){PAD(width-size,D_0048BE60);}ret+=size>width?size:width;
 if(out.size&&func_003FB5C0(fp,&out))goto done;out.count=0;vp=vec;
 }
 finish:if(out.size)func_003FB5C0(fp,&out);out.count=0;
 done:return fp->flags&64?-1:ret;
}
