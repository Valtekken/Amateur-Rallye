extern "C" {extern char D_00488D80[],D_0047D9A8[];char*func_003CD828(void*,char*);}
inline void*operator new(unsigned int,void*p){return p;}
struct Base{void*v;Base(){}~Base(){v=D_0047D9A8;}};
struct Obj:Base{char*s;__attribute__((always_inline)) Obj(char**b){v=D_00488D80;char*q=*b;char*p=q-16;char**dst=&s;if(*(s32*)(p+12))q=func_003CD828(p,q);else ++*(s32*)(p+8);*dst=q;}};
extern "C" void*func_003D1F08(void*a,char**b){return new(a)Obj(b);}

extern int *func_001C67D0(int);
extern void func_00277408(int, int, int, void *, int);
extern void func_003F9698(char *, int);
extern char D_0047A020[];

typedef struct {
    int pad0[2];
    int unk8;
    int unkC;
    int unk10;
    int *unk14;
    int unk18;
} S_00277780;

void func_00277780(S_00277780 *arg0, int arg1, int arg2) {
    int spval;
    if (*func_001C67D0(arg0->unk8) == 0) {
        int *base = &arg0->unk10;
        int *cur = (int *)base[1];
        if (base[0] != (int)cur) {
            int val;
            cur--;
            val = *cur;
            spval = val;
            base[1] = (int)cur;
            func_00277408(arg0->unk8, arg1, arg2, &spval, val);
        } else {
            func_003F9698(D_0047A020, arg1);
        }
    }
}

extern int D_002AD5A8(int);
extern void func_00277510(void *, int *, void *);

typedef struct {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int *unk14;
    int *unk18;
} S_002776D0;

void func_002776D0(S_002776D0 *arg0, int arg1) {
    int i;
    int spval;

    i = 0;
    arg0->unkC = D_002AD5A8(arg1 * arg0->unk4);
    if (arg1 > 0) {
        int *base = &arg0->unk10;
        do {
            int *cur = (int *)base[1];
            spval = arg0->unkC + i * arg0->unk4;
            if (cur != (int *)base[2]) {
                if (cur != 0) {
                    *cur = spval;
                }
                base[1] = (int)(cur + 1);
            } else {
                func_00277510(base, cur, &spval);
            }
            i++;
        } while (i < arg1);
    }
}

extern int D_002AD408(int);
extern int func_002773D0(int, int, int);

typedef struct {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int *unk14;
    int unk18;
} S_00277450;

void func_00277450(S_00277450 *arg0, int arg1, int arg2) {
    int i, j;
    i = 0;
    arg0->unk8 = func_002773D0(D_002AD408(16), arg1, arg2);
    if (arg1 > 0) {
        j = 0;
        do {
            if (arg2 > 0) {
                int k = 0;
                do {
                    int spval = 0;
                    func_00277408(arg0->unk8, i, k, &spval, 0);
                    k++;
                } while (k < arg2);
            }
            i++;
            j = 0;
        } while (i < arg1);
    }
}
