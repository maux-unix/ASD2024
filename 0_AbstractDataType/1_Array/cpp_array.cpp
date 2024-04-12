/*
    JUDUL   : STATIC & DYNAMIC ARRAY DALAM C++
    TANGGAL : 12/3/2024

    HAK CIPTA (C) 2024
    AUTHOR  : MAULANA ALI
    LICENSE : BSD-2 LICENSE
*/

#include "../../header.hpp"

int main(void) {
    std::array<std::string, 2> mahasiswa {"Maulana", "Ali"}; /* Static Array*/
    std::vector<std::string> mahasiswavec = {"Daffa", "Hansel"};

    mahasiswavec.push_back("Ali");
    
    for (std::string ma : mahasiswa){
        std::cout << ma << std::endl;
    }

    for (std::string m : mahasiswavec) {
        std::cout << m << std::endl;
    }

    return 0;
}
