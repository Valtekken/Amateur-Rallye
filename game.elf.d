build/game.elf.elf: \
    build/src/cod.o \
    build/asm/data/cod/30DA80.data.o \
    build/asm/data/cod/342170.o \
    build/asm/data/cod/344800.rodata.o \
    build/asm/data/cod/38D100.gcc_except_table.o \
    build/asm/data/cod/0048D500.sbss.o \
    build/asm/data/cod/0048D580.bss.o
build/src/cod.o:
build/asm/data/cod/30DA80.data.o:
build/asm/data/cod/342170.o:
build/asm/data/cod/344800.rodata.o:
build/asm/data/cod/38D100.gcc_except_table.o:
build/asm/data/cod/0048D500.sbss.o:
build/asm/data/cod/0048D580.bss.o:
-include build/src/cod.d build/asm/data/cod/30DA80.data.d build/asm/data/cod/342170.d build/asm/data/cod/344800.rodata.d build/asm/data/cod/38D100.gcc_except_table.d build/asm/data/cod/0048D500.sbss.d build/asm/data/cod/0048D580.bss.d
