extern u32 D_0040E618[];
extern u32 D_004859E0[];
extern u32 D_00485A00[];
extern u32 D_00476448[];

extern void func_00345818(s32, s32);
extern void func_0034D758(s32, s32);
extern void D_002AD390(void *);
extern void func_002B2028(u32 *);
extern void func_001D2040(void *, s32);

struct S_func_0032EC60 {
	u32 *unk0;	/* +0x00 */
	u32 *unk4;	/* +0x04 */
	u32 *unk8;	/* +0x08 */
	u32 unk10;	/* +0x10 */
	u32 *unk14;	/* +0x14 */
	u32 unk1C;	/* +0x1C */
	u32 *unk20;	/* +0x20 */
	u32 unk28;	/* +0x28 */
	u8 pad2C[0x410 - 0x2C];
	u32 unk410;	/* +0x410 */
	u32 *unk414;	/* +0x414 */
	u32 unk41C;	/* +0x41C */
	u8 pad420[0x460 - 0x420];
	u32 unk460;	/* +0x460 */
	u32 unk464;	/* +0x464 */
};

void func_0032EC60(struct S_func_0032EC60 *arg0, s32 arg1) {
	arg0->unk4 = D_004859E0;
	if (arg0->unk464 != 0) {
		arg0->unk0 = D_00485A00;
		func_00345818(arg0->unk464, 3);
	}
	if (arg0->unk460 != 0) {
		func_0034D758(arg0->unk460, 3);
	}
	D_002AD390((void *)(u32)arg0->unk410);

	{
		u32 *start = arg0->unk414;
		s32 diff = (s32)((u32)arg0->unk41C - (u32)start) >> 2;
		if (diff != 0) {
			if ((diff * 4) != 0) {
				func_002B2028(start);
			} else {
				*start = D_0040E618[-1];
				D_0040E618[-1] = start;
			}
		}
	}
	{
		u32 *start = arg0->unk20;
		s32 diff = (s32)((u32)arg0->unk28 - (u32)start) >> 2;
		if (diff != 0) {
			if ((diff * 4) != 0) {
				func_002B2028(start);
			} else {
				*start = D_0040E618[-1];
				D_0040E618[-1] = start;
			}
		}
	}
	{
		u32 *start = arg0->unk14;
		s32 diff = (s32)((u32)arg0->unk1C - (u32)start) >> 2;
		if (diff != 0) {
			if ((diff * 4) != 0) {
				func_002B2028(start);
			} else {
				*start = D_0040E618[-1];
				D_0040E618[-1] = start;
			}
		}
	}
	{
		u32 *start = arg0->unk8;
		s32 diff = (s32)((u32)arg0->unk10 - (u32)start) >> 2;
		if (diff != 0) {
			if ((diff * 4) != 0) {
				func_002B2028(start);
			} else {
				*start = D_0040E618[-1];
				D_0040E618[-1] = start;
			}
		}
	}

	func_001D2040(&arg0->unk4, 0);

	if (arg1 & 1) {
		arg0->unk0 = D_00476448;
		D_002AD390(arg0);
	}
}
