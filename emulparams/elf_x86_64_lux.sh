source_sh ${srcdir}/emulparams/elf_x86_64.sh
TEXT_START_ADDR=0x40000000   # 1 GB
GENERATE_SHLIB_SCRIPT="no"  # TODO: these will be changed after implementing dynamic linking
GENERATE_PIE_SCRIPT="no"
MAXPAGESIZE=0x1000
COMMONPAGESIZE=0x1000
