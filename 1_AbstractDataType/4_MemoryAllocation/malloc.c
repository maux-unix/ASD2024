#include "../../header.h"

int main(void) {

    /* Cara-cara menggunakan malloc() */
    int* p = (int*) malloc(1024);
    int* o = (int*) malloc(256 * sizeof(int));
    int* i = malloc(256 * sizeof(int));
    int* n = malloc(sizeof(int[256]));
    int* t = malloc(256 * sizeof(*t));

    /* Selalu free() memory pointer */
    free(p);
    free(o);
    free(i);
    free(n);
    free(t);

    return 0;
}
