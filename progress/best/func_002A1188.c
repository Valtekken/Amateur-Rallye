void func_002A1188(void) {
    void **r;
    void *o;
    s16 off;
    void (*fn)(void *);

    r = func_0015E848();
    o = *r;
    off = *(s16 *)((char *)o + 0x40);
    fn = *(void (**)(void *))((char *)o + 0x44);
    fn((char *)r + off);

    func_001FC740(func_001FC760());
    func_001E39E8(func_001E4280());
    func_001E3D40(func_001E4280());
    func_00200200(func_002003C0());
    func_001D5890(func_001D5900());
    func_002A1EA8(func_002A2458());
    func_00222B10(func_00222CF8());
    func_00285B10(func_002869E0());

    r = func_0015E848();
    o = *r;
    off = *(s16 *)((char *)o + 0x30);
    fn = *(void (**)(void *))((char *)o + 0x34);
    fn((char *)r + off);

    func_001E6D18(func_001E6D58());
    func_002A2668(func_002A28A8());

    r = func_0015E848();
    o = *r;
    off = *(s16 *)((char *)o + 0x38);
    fn = *(void (**)(void *))((char *)o + 0x3C);
    fn((char *)r + off);
}
