extern char D_00477030[],D_00477058[],D_00476F00[];
extern s32 D_004262B0[];
extern int func_003F9698(char *,...);
extern char *func_001D4010(void *);
extern void func_001DFF90(void *,void *);
typedef struct { char *begin,*end,*cap; } V;
void func_001E6AB0(V *v) {
 s32 *it; char *obj,*sub,*vt; char tmp[16];
 func_003F9698(D_00477030,(v->end-v->begin)>>2,(v->cap-v->begin)>>2);
 D_004262B0[3]++;
 for(it=(s32*)v->begin;(char*)it!=v->end;it++) {
 obj=(char*)*it;
 func_003F9698(D_00476F00,func_001D4010(obj));
 D_004262B0[3]++;
 { char *(*fn)(void*)=*(char*(**)(void*))(*(char**)(obj+4)+0x24); vt=*(char**)(obj+4); sub=fn(obj+*(s16*)(vt+0x20)); }
 if(sub) { func_001DFF90(tmp,sub); { void (*fn)(void*,int)=*(void(**)(void*,int))(*(char**)(sub+0x10)+0xc); vt=*(char**)(sub+0x10); fn(sub+*(s16*)(vt+8),3); } }
 }
 D_004262B0[3]--; func_003F9698(D_00477058);
}
