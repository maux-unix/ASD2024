#include <iostream>

int main(void) {
    int *x;
    x = (int*) malloc(6 * sizeof(int));
    *x = 1;
    *(x+1) = 2;
    *(x+2) = 3;
    *(x+3) = 4;
    *(x+4) = 5;
    *(x+5) = 6;
    *(x+6) = 7;

    if (x == NULL) {
        std::cout << "Memory allocation failed" << std::endl;
        return 1;
    } else {
        std::cout << "Memory allocation successful" << std::endl;
        for (int i = 0; i < 7; i++) {
            std::cout << "x[" << i << "]: " << x[i] << std::endl;
        }
    }
    return 0;
}
