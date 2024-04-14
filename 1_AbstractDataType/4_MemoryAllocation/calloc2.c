#include "../../header.h"

int main(void) {
    // dalam compiler 
    int* p = (int*) malloc(4* sizeof(int)); // 8 + malloc 8 bytes = 16
    p[0] = 0; // p[0] = 0
    p[1] = 1; // p[1] = 1
    p[2] = 2;
    p[3] = 3;

    // for (size_t i = 0; i < sizeof(p) / sizeof(*p) ; ++i) {
    //     printf("%d", *(p+i));
    // }

    // printf("%d", sizeof(int));

    free(p);
    return 0;
}
