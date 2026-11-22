typedef s32 U;
extern U D_004815E8;
U func_003F94D0(void*,U,U);
void *func_002C2740(void *arg0){
 s32 *v=(s32*)((char*)arg0+0x1C);
 *(s32**)arg0=(s32*)&D_004815E8;
 *(s32*)((char*)arg0+0x1C)=0;
 *(v+10)=*(v+9)=*(v+8)=*(v+7)=*(v+6)=*(v+5)=*(v+4)=*(v+3)=*(v+2)=*(v+1)=0;
 *(s32*)((char*)arg0+4)=0;
 *(s32*)((char*)arg0+8)=0;
 *(s32*)((char*)arg0+0xC)=0;
 *(s32*)((char*)arg0+0x14)=0;
 *(s32*)((char*)arg0+0x60)=0;
 *(s32*)((char*)arg0+0x64)=0;
 *(s32*)((char*)arg0+0x68)=0;
 *(s32*)((char*)arg0+0x6C)=0;
 *(s32*)((char*)arg0+0x70)=0;
 func_003F94D0((char*)arg0+0x78,0,0x48);
 *(s32*)((char*)arg0+0x18)=0;
 *(s32*)((char*)arg0+0x10)=0;
 return arg0;
}
