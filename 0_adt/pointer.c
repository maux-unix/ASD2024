#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *x;
    x = (int*) malloc(sizeof(int));
    *x = 10;
    printf("%d\n", *x);
    free(x);
    return 0;
}
