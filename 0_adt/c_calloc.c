/*
    JUDUL   : MEMORY ALLOCATION DALAM C MENGGUNAKAN malloc()
    AUTHOR  : MAULANA ALI
    LISENSI : BSD-2 LICENSE
    HAK CIPTA (C) 2024
*/

#include "header.h"

int main(void) {
    int *x, *y;
    x = (int*) calloc(7, sizeof(int));
    y = (int*) malloc(7 * sizeof(int));
    for (int i = 0; i < 7; i++) {
        //std::cout << "x[" << i << "]: " << x[i] << std::endl;
    }
    for (int i = 0; i < 7; i++) {
        //std::cout << "y[" << i << "]: " << y[i] << std::endl;
    }
    return 0;
}
