/*
    JUDUL   : STANDARD LIBRARIES DALAM C23
    TANGGAL : 13/3/2024

    HAK CIPTA (C) 2024
    AUTHOR  : MAULANA ALI
    LICENSE : BSD-2 LICENSE
*/

#include <stdio.h>      /* Input/Output Streams */
#include <assert.h>     /* Diagnostics Tests */
#include <complex.h>    /* Complex Arithmetic */
#include <ctype.h>
#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <inttypes.h>
#include <iso646.h>     /* ISO646 naming conventions for logical expressions */
#include <limits.h>     /* Limits of*/
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdalign.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>
#include <tgmath.h>
#include <time.h>
#include <uchar.h>
#include <wchar.h>
#include <wctype.h>

/* MASIH BELUM SUPPORT DI C23 STANDARD GCC */
// #include <stdbit.h>
// #include <stdckdint.h>

/* UNKNOWN BEHAVIOUR DI KOMPUTERKU, SEPERTINYA ONLY IN UNIX-BASED OS*/
// #include <threads.h> 

#define __UCHAR_MAX_ 0xff /* 0 <= short int <= (2^8 -1) */
#define __USHRT_MAX_ 0xffff /* 0 <= short int <= (2^16 -1) */
#define __UINT_MAX_  0xffffffff/* 0 <= int <= (2^32 -1) */
#define __ULONG_MAX_ 0xffffffff /* Sama dengan int */
#define __ULONG_LONG_MAX 0xffffffffffffffff /* -(2^32) <= long int <= (2^64 -1) */
