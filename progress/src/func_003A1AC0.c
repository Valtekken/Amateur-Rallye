typedef struct {u32 words[6];} Element24;
extern void func_003A5DC8(Element24*,Element24*);
Element24 *func_003A1AC0(register Element24 *first,register Element24 *last,register Element24 *out,register s32 tag1,register s32 tag2){
s32 n;
for(n=last-first;n>0;n--){--out;--last;func_003A5DC8(out,last);}return out;
}
