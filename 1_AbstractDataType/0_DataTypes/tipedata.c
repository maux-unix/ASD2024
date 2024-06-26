/*
    JUDUL   : TIPE DATA DALAM C
    TANGGAL : 11/3/2024

    HAK CIPTA (C) 2024
    AUTHOR  : MAULANA ALI
    LICENSE : BSD-2 LICENSE
*/

#include <stdio.h>
#include <stdint.h>

#define __UCHAR_MAX_ 0xff /* 0 <= short int <= (2^8 -1) */
#define __USHRT_MAX_ 0xffff /* 0 <= short int <= (2^16 -1) */
#define __UINT_MAX_  0xffffffff/* 0 <= int <= (2^32 -1) */
#define __ULONG_MAX_ 0xffffffff /* Sama dengan int */
#define __ULONG_LONG_MAX 0xffffffffffffffff /* -(2^32) <= long int <= (2^64 -1) */

/* Fungsi Utama (tanpa argumen) */
int main(void) {

    /* Integer (dengan stdio.h) */
    char lowest = __SCHAR_MAX__; /* -(2^8) <= short int <= (2^8 -1) */
    short int low = __SHRT_MAX__; /* -(2^16) <= short int <= (2^16 -1) */
    int mid = __INT_MAX__; /* -(2^32) <= int <= (2^32 -1) */
    long int high = __LONG_MAX__; /* Sama dengan int */
    long long int highest = __LONG_LONG_MAX__; /* -(2^32) <= long int <= (2^64 -1) */

    unsigned char lowest_u = __UCHAR_MAX_; /* 0 <= short int <= (2^8 -1) */
    unsigned short int low_u = __USHRT_MAX_; /* 0 <= short int <= (2^16 -1) */
    int mid_u = __UINT_MAX_; /* 0 <= int <= (2^32 -1) */
    long int high_u = __ULONG_MAX_; /* Sama dengan int */
    long long int highest_u = __ULONG_LONG_MAX; /* -(2^32) <= long int <= (2^64 -1) */

    /* Integer (dengan stdint.h) */
    int8_t num8bytesmax = INT8_MAX;
    int8_t num8bytesmin = INT8_MIN;
    int16_t num16bytesmax = INT16_MAX;
    int16_t num16bytesmin = INT16_MIN;
    int32_t num32bytesmax = INT32_MAX;
    int32_t num32bytesmin = INT32_MIN;
    int64_t num64bytesmax = INT64_MAX;
    int64_t num64bytesmin = INT64_MIN;

    return 0;
}
