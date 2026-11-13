extern s32 func_00152D28(s32, s32, s32*, s32);
extern f32 *func_00156260(f32*, f32*, f32*);
extern s32* func_002B1FC0(s32, s32, s32);
extern s32 func_002B2028(s32);
extern f32 *func_002C5A08(f32*, f32*, f32*);
extern s32* func_003D2910(s32);
extern u32 D_0040E618[];

struct VecArray { s32 *begin; s32 *end; s32 *cap; };

void func_003BA248(struct VecArray *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 count, avail, space, needed, alloc, cap;
    s32 *newbuf, *oldend, *oldbegin, *p, *dst;
    s32 i, j, k, shift;

    if (arg2 != arg3) {
        count = (s32)((s64)(arg3 - arg2) >> 3);
        avail = (s32)((s64)(arg0->cap - arg0->end) >> 3);
        if ((u32)avail >= (u32)count) {
            space = (s32)((s64)(arg0->end - arg1) >> 3);
            if ((u32)count < (u32)space) {
                func_00156260((f32*)(arg0->end - count*4), (f32*)arg0->end, (f32*)arg0->end);
                for (i = 0; i < count; i++) {
                    ((f32*)arg0->end)[i*2] = ((f32*)arg0->end)[(count + i)*2];
                    ((f32*)arg0->end)[i*2+1] = ((f32*)arg0->end)[(count + i)*2+1];
                }
                arg0->end += count*4;
                for (j = 0; j < count; j++) {
                    ((f32*)arg1)[j*2] = ((f32*)arg2)[j*2];
                    ((f32*)arg1)[j*2+1] = ((f32*)arg2)[j*2+1];
                }
            } else {
                shift = space*4;
                dst = arg2 + shift;
                func_002C5A08((f32*)dst, (f32*)arg3, (f32*)arg0->end);
                arg0->end += (count - space)*4;
                func_00156260((f32*)arg1, (f32*)arg0->end, (f32*)arg0->end);
                for (k = 0; k < count - space; k++) {
                    ((f32*)arg1)[k*2] = ((f32*)dst)[k*2];
                    ((f32*)arg1)[k*2+1] = ((f32*)dst)[k*2+1];
                }
            }
        } else {
            needed = (s32)((s64)(arg0->end - arg0->begin) >> 3);
            alloc = needed + count;
            if (alloc != 0) {
                newbuf = func_002B1FC0(alloc*8, 0, count);
                if (!newbuf) newbuf = func_003D2910(alloc*8);
            } else if (D_0040E618[-1] != 0) {
                newbuf = D_0040E618[-1];
                D_0040E618[-1] = *(s32*)D_0040E618[-1];
            } else {
                newbuf = func_00152D28(0, 0, &D_0040E618[-1], count);
            }
            oldend = arg0->end;
            func_00156260((f32*)arg1, (f32*)oldend, func_002C5A08((f32*)arg2, (f32*)arg3, func_00156260((f32*)arg0->begin, (f32*)arg1, (f32*)newbuf)));
            p = arg0->begin;
            while (p < oldend) p++;
            oldbegin = arg0->begin;
            cap = (s32)((s64)(arg0->cap - oldbegin) >> 3);
            if (cap != 0) {
                if (cap*8 != 0) func_002B2028(oldbegin);
                else { *oldbegin = D_0040E618[-1]; D_0040E618[-1] = oldbegin; }
            }
            arg0->end = oldend;
            arg0->cap = newbuf + alloc*4;
            arg0->begin = newbuf;
        }
    }
}
