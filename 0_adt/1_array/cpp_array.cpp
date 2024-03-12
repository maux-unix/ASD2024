/*
    ARRAY DALAM C++
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
