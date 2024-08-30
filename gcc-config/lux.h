/*
 * lux - a lightweight unix-like operating system
 * Omar Elghoul, 2024
 * 
 * GCC configuration for lux targets
 */

#define TARGET_LUX          1

#ifdef LIB_SPEC
#undef LIB_SPEC
#endif

#define LIB_SPEC                    "-lc"

#ifdef STARTFILE_SPEC
#undef STARTFILE_SPEC
#endif

#define STARTFILE_SPEC              "crt0.o%s crti.o%s crtbegin.o%s"

#ifdef ENDFILE_SPEC
#undef ENDFILE_SPEC
#endif

#define ENDFILE_SPEC                "crtend.o%s crtn.o%s"
#define PREFERRED_DEBUGGING_TYPE    DWARF2_DEBUG

#ifdef LINK_SPEC
#undef LINK_SPEC
#endif

#define LINK_SPEC                   "-z max-page-size=4096"
