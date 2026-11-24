extern void *func_002AFEB8(s32,void*); typedef struct{u8 b[24];} B;
void *func_003A61F0(register void *a,register void *b){register B *p=func_002AFEB8(24,a);return p ? (*p=*(B*)b,p) : p;}
