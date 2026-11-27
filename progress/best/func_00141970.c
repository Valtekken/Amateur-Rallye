extern void func_001D4040(void *, const char *);
extern const char D_0044BCD8[];
extern const char D_0044CD00[];

typedef struct {
    float x;
    float y;
    float z;
    int w;
} Vec4i;

typedef struct {
    float x;
    int y;
    int z;
} Vec3fi;

typedef struct {
    int unk_00;             /* 0x00 */
    int unk_04;             /* 0x04 */
    const char *unk_08;     /* 0x08 */
    int unk_0C;             /* 0x0C */
    int unk_10;             /* 0x10 */
    int unk_14;             /* 0x14 */
    Vec4i v18;              /* 0x18 */
    Vec4i v28;              /* 0x28 */
    Vec4i v38;              /* 0x38 */
    Vec4i v48;              /* 0x48 */
    Vec4i v58;              /* 0x58 */
    Vec3fi v68;             /* 0x68 */
    Vec3fi v74;             /* 0x74 */
    Vec3fi v80;             /* 0x80 */
    Vec3fi v8C;             /* 0x8C */
    Vec3fi v98;             /* 0x98 */
    Vec3fi vA4;             /* 0xA4 */
    int unk_B0;             /* 0xB0 */
    int unk_B4;             /* 0xB4 */
    int unk_B8;             /* 0xB8 */
    float unk_BC;           /* 0xBC */
    int unk_C0;             /* 0xC0 */
    int unk_C4;             /* 0xC4 */
} Struct_00141970;

static inline void InitVec4(Vec4i *v) {
    v->x = 1.0f;
    v->y = 1.0f;
    v->z = 1.0f;
    v->w = 0;
}

static inline void InitVec3Zero(Vec3fi *v) {
    v->x = 0.0f;
    v->y = 0;
    v->z = 0;
}

static inline void InitVec3One(Vec3fi *v) {
    v->x = 1.0f;
    v->y = 0;
    v->z = 0;
}

Struct_00141970 *func_00141970(Struct_00141970 *arg0) {
    int sp[4];

    func_001D4040(sp, D_0044BCD8);
    arg0->unk_04 = sp[0];
    arg0->unk_00 = -1;
    arg0->unk_08 = D_0044CD00;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;

    InitVec4(&arg0->v18);
    InitVec4(&arg0->v28);
    InitVec4(&arg0->v38);
    InitVec4(&arg0->v48);
    InitVec4(&arg0->v58);

    InitVec3Zero(&arg0->v68);
    InitVec3Zero(&arg0->v74);
    InitVec3Zero(&arg0->v80);
    InitVec3One(&arg0->v8C);
    InitVec3One(&arg0->v98);
    InitVec3Zero(&arg0->vA4);

    arg0->unk_B0 = 0x1E;
    arg0->unk_B4 = 0;
    arg0->unk_B8 = 0;
    arg0->unk_BC = 1.0f;
    arg0->unk_C0 = 0x1E;
    arg0->unk_C4 = 0;

    func_001D4040(&arg0->unk_10, 0);
    return arg0;
}
