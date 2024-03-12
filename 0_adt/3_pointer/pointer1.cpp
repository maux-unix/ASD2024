#include <iostream>

int main(void) {
    int x = 1000;
    int* px = &x;
    std::cout << "x: " << x << std::endl;
    std::cout << "px: " << px << std::endl;

    int* y;
    //y = (int*) calloc(7, sizeof(int)); // 7 * 4 bytes = 28 bytes + 8 = 36 bytes
    y = new int[7];

    *y = 1;  // y[0]
    *(y+1) = 2; // y[1]
    *(y+2) = 3; // y[2]
    *(y+3) = 4; // y[3]
    *(y+4) = 5;
    *(y+5) = 6;
    *(y+6) = 7;
    *(y+7) = 8;
    *(y+8) = 9;


    if (y == NULL) {
        std::cout << "Memory allocation failed" << std::endl;
        return 1;
    } else {
        std::cout << "Memory allocation successful" << std::endl;
    }


    std::cout << "y[0]: " << y[0] << std::endl; // *y (8 bytes) -> 
    std::cout << "y[1]: " << y[1] << std::endl; // *(y+1) (8 bytes) ->
    std::cout << "y[2]: " << y[2] << std::endl; // *(y+2) (8 bytes) ->
    std::cout << "y[3]: " << y[3] << std::endl;
    std::cout << "y[4]: " << y[4] << std::endl;
    std::cout << "y[5]: " << y[5] << std::endl;
    std::cout << "y[6]: " << y[6] << std::endl;
    std::cout << "y[7]: " << y[7] << std::endl;
    std::cout << "y[8]: " << y[8] << std::endl;

    std::cout << "size y: " << sizeof(y) << std::endl;
    std::cout << "size int: " << sizeof(*y) << std::endl;

    delete[] y;
    return 0;
}
