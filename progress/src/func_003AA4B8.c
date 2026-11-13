/* identical to func_003A3CC8 (matched), with its names changed by decompdecomp */
typedef struct{ s32 *begin,*end,*cap;} V;
s32* func_003A3A98(V*); s32* func_003A3268(s32); void func_003ABF08(s32); s32 func_003ABF68(s32*,s32);
void func_003A3BB8(s32*,s32); s32 func_003A3B80(V*); void func_00152720(V*,s32,s32);
s32 func_003A4070(register V*a){return a->cap-func_003A3A98(a);}
s32 func_003A3D18(register s32 a,register s32 b){func_003ABF08(a);return func_003ABF68(func_003A3268(a),b);}
s32 func_003AA4B8(register s32 a){return *func_003A3268(a);}
void func_003A3C30(register V*a,register s32 b){if(a->end!=a->cap){func_003A3BB8(a->end,b);a->end++;}else{func_00152720(a,func_003A3B80(a),b);}}
