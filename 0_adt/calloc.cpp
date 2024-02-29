#include <iostream>

int main(void) {
    int *x, *y;
    x = (int*) calloc(7, sizeof(int));
    y = (int*) malloc(7 * sizeof(int));
    for (int i = 0; i < 7; i++) {
        std::cout << "x[" << i << "]: " << x[i] << std::endl;
    }
    for (int i = 0; i < 7; i++) {
        std::cout << "y[" << i << "]: " << y[i] << std::endl;
    }
    return 0;
}
