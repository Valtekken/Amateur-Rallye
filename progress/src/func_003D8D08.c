typedef struct{u32 flags;u8*cur,*end,*base;u32 pad[5];u8*backup,*save,*limit;} Buf;
void *func_002B1FC0(s32);void func_002B2028(void*);void func_003D7E18(Buf*);void func_003F931C(void*,void*,s32);
s32 func_003D8D08(Buf*a,s32 c){u32 cur=(u32)a->cur;u8*p,*q;s32 n,size;if((u32)a->base>=cur){if(a->backup){if(!(a->flags&256))func_003D7E18(a);if(a->backup)goto grow;}
{u8*small=func_002B1FC0(128);if(!small)return -1;a->backup=small;a->limit=small+128;a->save=small+128;}func_003D7E18(a);cur=(u32)a->cur;goto done;
grow:cur=(u32)a->cur;if((u32)a->base>=cur){n=a->end-a->base;size=n*2;p=func_002B1FC0(size);if(!p)return -1;q=p+(size-n);func_003F931C(q,a->base,n);func_002B2028(a->base);a->base=p;a->end=p+size;a->cur=q;a->save=q;cur=(u32)a->cur;}}
done:a->cur=(u8*)(cur-1);if(c!=-1&&*(s8*)(cur-1)!=c)*(s8*)(cur-1)=c;return *a->cur;}
