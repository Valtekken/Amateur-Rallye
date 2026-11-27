extern char D_00477548[];
extern void *func_001F0990(void *, s8);
extern void *func_001F09E0(void *, s8);
extern void *func_001F0AB8(void *, s8);
extern void *func_001F1B10(void *, s8);
extern s32 func_001D6278(void *, void *, s32);
extern void func_001D2CD8(void *, void *);
extern void func_001DF2B0(void *, void *, s32);
void *func_001F1948(void *arg0) {
 char info[0x10], name[0xC8];
 void *v, *p, *obj;
 s32 i;
 v=*(void**)arg0;
 p=*(void**)((char*)v+8);
 if (((void *(*)(void *, void *, s32, void *))*(void **)((char *)p+0x54))((char*)v+*(s16*)((char*)p+0x50), info, 4, v)==0) return NULL;
 obj=NULL;
 switch((s8)info[0]) {
 case 0: obj=func_001F0990(arg0,(s8)info[1]); break;
 case 1: obj=func_001F09E0(arg0,(s8)info[1]); break;
 case 2: obj=func_001F0AB8(arg0,(s8)info[1]); break;
 case 3: obj=func_001F1B10(arg0,(s8)info[1]); break;
 }
 if(!obj) return NULL;
 if(*(s32*)((char*)arg0+4)>=3) {
  if(!func_001D6278(*(void**)arg0,name,0xC8)) return NULL;
  func_001D2CD8((char*)obj+0x14,name);
 } else func_001D2CD8((char*)obj+0x14,&D_00477548);
 for(i=0;i<(s16)*(u16*)(info+2);i++) {
  void *child=func_001F1948(arg0);
  if(!child) {
   if(obj) {
    void *vt=*(void**)((char*)obj+0x10);
    ((void (*)(void *, s32))*(s32 *)((char *)vt+0xC))((char*)obj+*(s16*)((char*)vt+8),3);
   }
   return NULL;
  }
  func_001DF2B0(obj,child,0);
 }
 return obj;
}
