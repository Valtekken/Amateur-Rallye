extern void *D_002AD408(s32);
extern void func_001D4040(void *, const char *);
extern void func_001E2460(void *, void *, s32);
extern void func_001E2C08(void *, const char *, f32);
extern u32 D_0044DD18[];
extern const char D_0044EBE8[],D_0044EC28[],D_0044EC40[],D_0044EC58[];
struct Inner { s32 unk14, unk18, unk1C; };
struct S_temp { s32 unk0,unk4,unk8,unkC; void *unk10; struct Inner inner; s32 unk20; };
struct S_arg0 { s32 pad[5]; f32 unk14,unk18,unk1C; };
void *func_0015F6D8(void *arg0) {
 u8 buf[0x24]; struct S_temp *temp; s32 sp0;
 temp=D_002AD408(0x24); func_001D4040(buf,D_0044EBE8); sp0=*(s32*)buf; temp->unk20=sp0;
 temp->unk8=0; temp->unk10=D_0044DD18; temp->unkC=0; temp->unk4=0; temp->unk0=0;
 { struct Inner *p=&temp->inner; p->unk14=0; p->unk1C=0; p->unk18=0; }
 func_001E2460(buf+0x20,temp,sp0);
 func_001E2C08(buf+0x20,D_0044EC28,((struct S_arg0*)arg0)->unk18);
 func_001E2C08(buf+0x20,D_0044EC40,((struct S_arg0*)arg0)->unk14);
 func_001E2C08(buf+0x20,D_0044EC58,((struct S_arg0*)arg0)->unk1C); return temp;
}
