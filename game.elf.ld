SECTIONS
{
    HIDDEN(__romPos = 0);
    cod_ROM_START = __romPos;
    cod_VRAM = ADDR(.cod);
    .cod 0x100000 : AT(cod_ROM_START)
    {
        FILL(0x00000000);
        cod_TEXT_START = .;
        build/src/cod.o(.text*);
        . = ALIGN(., 16);
        cod_TEXT_END = .;
        cod_TEXT_SIZE = ABSOLUTE(cod_TEXT_END - cod_TEXT_START);
        cod_DATA_START = .;
        build/src/cod.o(.data*);
        build/asm/data/cod/30DA80.data.o(.data*);
        build/asm/data/cod/342170.o(.data*);
        . = ALIGN(., 16);
        cod_DATA_END = .;
        cod_DATA_SIZE = ABSOLUTE(cod_DATA_END - cod_DATA_START);
        cod_RODATA_START = .;
        build/src/cod.o(.rodata*);
        build/asm/data/cod/344800.rodata.o(.rodata*);
        . = ALIGN(., 16);
        cod_RODATA_END = .;
        cod_RODATA_SIZE = ABSOLUTE(cod_RODATA_END - cod_RODATA_START);
        cod_GCC_EXCEPT_TABLE_START = .;
        build/src/cod.o(.gcc_except_table*);
        build/asm/data/cod/38D100.gcc_except_table.o(.gcc_except_table*);
        . = ALIGN(., 16);
        cod_GCC_EXCEPT_TABLE_END = .;
        cod_GCC_EXCEPT_TABLE_SIZE = ABSOLUTE(cod_GCC_EXCEPT_TABLE_END - cod_GCC_EXCEPT_TABLE_START);
    }
    cod_bss_VRAM = ADDR(.cod_bss);
    .cod_bss (NOLOAD) :
    {
        FILL(0x00000000);
        cod_SBSS_START = .;
        build/src/cod.o(.sbss COMMON .scommon);
        build/asm/data/cod/0048D500.sbss.o(.sbss COMMON .scommon);
        . = ALIGN(., 16);
        cod_SBSS_END = .;
        cod_SBSS_SIZE = ABSOLUTE(cod_SBSS_END - cod_SBSS_START);
        cod_BSS_START = .;
        build/src/cod.o(.bss COMMON .scommon);
        build/asm/data/cod/0048D580.bss.o(.bss COMMON .scommon);
        . = ALIGN(., 16);
        cod_BSS_END = .;
        cod_BSS_SIZE = ABSOLUTE(cod_BSS_END - cod_BSS_START);
    }
    __romPos += SIZEOF(.cod);
    __romPos = ALIGN(__romPos, 16);
    . = ALIGN(., 16);
    cod_ROM_END = __romPos;
    cod_VRAM_END = .;

    /DISCARD/ :
    {
        *(*);
    }
}
