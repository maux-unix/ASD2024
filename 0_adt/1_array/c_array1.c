/*
    Judul : Static Array dalam C
    Author : MAULANA ALI
    Hak Cipta (c) 2024 MIT License
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
