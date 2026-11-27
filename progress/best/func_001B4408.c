extern void func_001B2900(void *,void *),func_001B45F0(void *,void *);
extern float func_001B2D60(void *),func_001B2DF0(void *),func_001B2E38(void *);
typedef struct {float x,y,z;} V3;
#define F(o) (*(float *)(a+(o)))
#define I(o) (*(int *)(a+(o)))
#define V(o) (*(V3 *)(a+(o)))
void func_001B4408(char *a){void *o=*(void **)(a+0xc8);float tmp[3];float *p=(float *)(a+0xa4);if(o){char *vt=*(char **)o;void (*fn)(void *,void *)=*(void (**)(void *,void *))(vt+20);fn((char *)o+*(short *)(vt+16),a);}
 F(0x48)=F(0x38);F(0x4c)=F(0x3c);F(0x50)=F(0x40);I(0x144)=0;F(0x6c)=F(0x60);F(0x70)=F(0x64);F(0x84)=F(0x7c);F(0x94)=F(0x8c);F(0xa0)=F(0x98);
 if(I(12)||I(0xcc)){F(0xa4)=F(0);F(0xa8)=F(4);F(0xac)=F(8);I(0x128)=0;I(0x130)=0;I(0x12c)=0;}else{func_001B45F0(tmp,a);F(0xa4)=tmp[0];F(0xa8)=tmp[1];F(0xac)=tmp[2];}
 if(I(0x1c)||I(0xcc)){F(0xb0)=F(0x10);F(0xb4)=F(0x14);F(0xb8)=F(0x18);}else{func_001B2900(tmp,a);F(0xb0)=tmp[0];F(0xb4)=tmp[1];F(0xb8)=tmp[2];}
 p[6]=(I(0x24)||I(0xcc))?F(0x20):func_001B2D60(a);
 p[7]=(I(0x2c)||I(0xcc))?F(0x28):func_001B2DF0(a);
 p[8]=(I(0x34)||I(0xcc))?F(0x30):func_001B2E38(a);
}
