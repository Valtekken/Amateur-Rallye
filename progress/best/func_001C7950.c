typedef struct { u8 data[48]; } Item;
typedef struct { Item *begin,*end,*cap; } Vec;
extern void func_00175AD0(void*,s32);
extern Item *func_001C77C8(Item*,Item*,Item*);
extern void func_001C7850(Item*,Item*,Item*);
extern Item *func_001C78D0(Item*,s32,Item*,s32);
void func_001C7950(register Vec *v,register Item *pos,register s32 count,register Item *item) {
 register Item *end,*cap,*old_end,*dst,*src; register s32 available,tail,n; Item tmp;
 if(count==0) goto cleanup;
 end=v->end; cap=v->cap; available=cap-end;
 if((u32)available<(u32)count) goto cleanup;
 tmp=*item; tail=end-pos;
 if((u32)count<(u32)tail) {
 old_end=end; func_001C77C8(old_end-count,old_end,old_end); v->end=old_end+count;
 dst=v->end; src=old_end; n=tail-count;
 if(n>0) do {--dst;--src;*dst=*src;} while(--n>0);
 func_001C7850(pos,pos+count,&tmp);
 } else {old_end=end;func_001C78D0(end,count-tail,&tmp,0);v->end=old_end+(count-tail);func_001C77C8(pos,old_end,v->end);v->end=old_end+count;func_001C7850(pos,old_end,&tmp);}
 func_00175AD0(&tmp,2);
 cleanup: return;
}
