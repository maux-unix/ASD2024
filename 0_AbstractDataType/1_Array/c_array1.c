/*
    JUDUL   : STATIC ARRAY DALAM C
    TANGGAL : 11/3/2024

    HAK CIPTA (C) 2024
    AUTHOR  : MAULANA ALI
    LICENSE : BSD-2 LICENSE
*/

#include "../../header.h"

int main(void) {
    int angka[] = {0, 0, 1};

    printf("[ARRAY]\t");
    for (size_t i = 0; i < sizeof(angka)/sizeof(*angka); i++) {
        printf("%d\t", angka[i]);
    }
    printf("\n");

    for (size_t i = 0; i < sizeof(angka)/sizeof(*angka); i++) {
        printf("[INFO]\tSize of angka[%d] : %zu\n", i, sizeof(angka[i]));
    }

    printf("[INFO]\tSize of angka: %zu\n", sizeof(angka));
    return 0;
}
