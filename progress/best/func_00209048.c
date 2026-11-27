extern float func_002073E0(void*),func_00207450(void*,void*);
extern void func_00156C38(void*,void*),func_00206E10(void*,void*,void*),func_00207328(void*,void*),func_00207498(void*,void*,float),func_00207540(void*,void*),func_00207598(void*,void*),func_00207650(void*,void*,void*);
typedef struct { int x; float threshold; int count; char rest[80]; } O;
typedef struct { char pad[16]; char *vt; } B;
int func_00209048(O *o,B *b,void *input,void *output) {
 char *p=(char*)o; char *vt; void (*fn)(void*,void*,void*); float norm,old,cur,scale,ratio; int i;
 norm=func_002073E0(input); if(norm==0.0f) norm=1.0f;
 vt=b->vt; (fn=*(void(**)(void*,void*,void*))(vt+28),fn)((char*)b+*(short*)(vt+24),output,p+64);
 func_00207650(input,p+64,p+64); ratio=func_002073E0(p+64)/norm; if(ratio<o->threshold) return 2;
 func_00207328(o,b);
 for(i=0;i<o->count;i++) {
 func_00206E10(p+24,p+64,p+76); cur=func_00207450(p+64,p+76);
 if(i==0) func_00156C38(p+40,p+76);
 else { func_00207498(p+40,p+40,cur/old); func_00207540(p+40,p+76); }
 vt=b->vt; (fn=*(void(**)(void*,void*,void*))(vt+28),fn)((char*)b+*(short*)(vt+24),p+40,p+52);
 scale=cur/func_00207450(p+40,p+52);func_00207498(p+40,p+12,scale);func_00207540(output,p+12);func_00207498(p+52,p+12,scale);func_00207598(p+64,p+12);
 ratio=func_002073E0(p+64)/norm; if(ratio<o->threshold) return 0;
 old=cur;
 } return 1;
}
