extern void *func_00152D28(u32);
extern void *func_0026E440(void *, void *, void *);
extern void *func_0027B558(void *, void *);
extern void *func_0027B878(void *, void *);
extern void *func_002B1FC0(s32);
extern void func_002B2028(void *);
extern void *func_003D2910(s32);
extern void *D_0040E618[];

typedef struct Vec170 {
    u8 *begin;
    u8 *end;
    u8 *cap;
} Vec170;

void func_0026E4A0(Vec170 *arg0, u8 *arg1, u8 *arg2) {
    u8 *end;
    u8 tmp[0x170];

    end = arg0->end;
    if (end != arg0->cap) {
        u8 *newEnd;
        u8 *var17;
        s32 count;
        u8 *var18;

        if (end == 0) goto skip_ctor;
        func_0027B558(end, end - 0x170);
    skip_ctor:
        arg0->end = arg0->end + 0x170;
        func_0027B558(tmp, arg2);
        newEnd = arg0->end;
        var17 = newEnd - 0x2E0;
        count = (s32)((var17 - arg1) * (s32)0xE9BD37A7) >> 4;
        if (count > 0) {
            var18 = newEnd - 0x170;
            var18 -= 0x170;
            do {
                var17 -= 0x170;
                func_0027B878(var18, var17);
                count--;
                var18 -= 0x170;
            } while (count > 0);
        }
        func_0027B878(arg1, tmp);
        return;
    }

    {
        s32 curCount;
        s32 newCount;
        s32 byteSize;
        u8 *newBuf;
        u8 *inserted;
        u8 *newEnd2;
        u8 *oldBegin;
        u8 *oldEnd;
        s32 capCount;

        curCount = (s32)((end - arg0->begin) * (s32)0xE9BD37A7) >> 4;
        newCount = 1;
        if (curCount != 0) {
            newCount = curCount * 2;
        }

        if (newCount != 0) {
            byteSize = newCount * 0x170;
            if (byteSize != 0) {
                newBuf = (u8 *)func_002B1FC0(byteSize);
                if (newBuf == 0) {
                    newBuf = (u8 *)func_003D2910(byteSize);
                }
            } else {
                void *v = D_0040E618[-1];
                if (v == 0) {
                    newBuf = (u8 *)func_00152D28(0);
                } else {
                    newBuf = (u8 *)v;
                    D_0040E618[-1] = *(void **)v;
                }
            }
        } else {
            newBuf = 0;
        }

        oldBegin = arg0->begin;
        inserted = (u8 *)func_0026E440(oldBegin, arg1, newBuf);
        if (inserted != 0) {
            func_0027B558(inserted, arg2);
        }

        oldEnd = arg0->end;
        newEnd2 = (u8 *)func_0026E440(arg1, oldEnd, inserted + 0x170);
        {
            u8 *it = arg0->begin;
            if ((u32)it < (u32)oldEnd) {
                u8 *p = it + 0x170;
                while ((u32)p < (u32)oldEnd) {
                    p += 0x170;
                }
            }
        }

        oldBegin = arg0->begin;
        capCount = (s32)((arg0->cap - oldBegin) * (s32)0xE9BD37A7) >> 4;
        if (capCount != 0) {
            if ((capCount * 0x170) != 0) {
                func_002B2028(oldBegin);
            } else {
                *(void **)oldBegin = D_0040E618[-1];
                D_0040E618[-1] = oldBegin;
            }
        }

        arg0->end = newEnd2;
        arg0->begin = newBuf;
        arg0->cap = newBuf + newCount * 0x170;
    }
}
