/*
    Judul : Array dalam C++
    Author : MAULANA ALI
    Hak Cipta (c) 2024 Lisensi MIT
*/

#include "../../header.hpp"

int main(void)
{
    std::array<int, 5> num = {1,7,8,9,0}; /* Membuat array int berukuran 5 */
    std::sort(num.begin(), num.end()); /* Sorting sederhana <algorithm> */

    /* Perulangan for <iterator> */
    for (const int& n : num) { 
        std::cout << n << std::endl;
    }

    return 0;
}
