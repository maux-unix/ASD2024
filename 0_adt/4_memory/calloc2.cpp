#include <iostream>

int main(void) {
    int *a;
    a = (int*) calloc(7, sizeof(int));
    for (int i = 0; i < 7; i++) {
        a[i] = i;
        std::cout << "a[" << i << "]: " << a[i] << std::endl;
    }
    
    return 0;
}
