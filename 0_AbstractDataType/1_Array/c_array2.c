/*
    JUDUL   : DYNAMIC ARRAY DALAM C
    TANGGAL : 12/3/2024

    HAK CIPTA (C) 2024
    AUTHOR  : MAULANA ALI
    LICENSE : BSD-2 LICENSE
*/

#include "../../header.h"

int main(void) {
    int input;
    int* num = (int*) malloc(sizeof(int) * 3);

    for (size_t i = 0; i <= sizeof(num)/sizeof(int); ++i) {
        scanf("%d", &input);
        *(num+i) = input;
    }

    for (size_t i = 0; i <= sizeof(num)/sizeof(int); ++i) {
        printf("%d\t", *(num+i));
    }

    return 0;
}
