/*
    JUDUL   : DYNAMIC ARRAY DALAM C DENGAN 
    AUTHOR  : MAULANA ALI
    LISENSI : MIT LICENSE
    HAK CIPTA (C) 2024

    REFERENSI
    =========
    ALOKASI MEMORI DALAM C
    - malloc() -> c_malloc.c
    - calloc() -> c_calloc.c
    - realloc() -> c_realloc.c
    - free() -> c_free.c
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
