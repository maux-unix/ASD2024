// Membuat program contoh menggunakan realloc()

#include <iostream>
#include <cstdlib>

int main(void) {
    int *a;
    a = (int*) calloc(7, sizeof(int));
    for (int i = 0; i < 7; i++) {
        a[i] = i;
        std::cout << "a[" << i << "]: " << a[i] << std::endl;
    }
    a = (int*) realloc(a, 14 * sizeof(int));
    for (int i = 7; i < 14; i++) {
        a[i] = i;
        std::cout << "a[" << i << "]: " << a[i] << std::endl;
    }
    free(a);

    char b[256];

    std::cin.getline(b, 256);
    return 0;
}
