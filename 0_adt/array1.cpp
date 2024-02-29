#include <iostream>
#include <cstdint>

int main(void)
{
    int angka[] = {0, 0, 1};
    int64_t test = 10;

    for (size_t i = 0; i < std::size(angka); i++) {
        printf("%d\t", angka[i]);
    } 

    printf("\n%d\t%zu", test, sizeof(test));

    return 0;
}
