#include "../../header.hpp"

typedef struct Polinomial {
    int koefisien;
    int pangkat;
} pol;

pol tambah_polinomial(pol p1, pol p2){
    p1.koefisien += p2.koefisien;
    return p1;
}

pol kurang_polinomial(pol p1, pol p2){
    p1.koefisien -= p2.koefisien;
    return p1;
}

pol kali_polinomial(pol p1, pol p2) {
    
    return p1;
}

void tampil_polinomial(std::forward_list<pol> p, std::string nama_pol) {
    std::cout << nama_pol << " = ";
    for (const pol& term : p) {
        std::cout << term.koefisien << "x^" << term.pangkat << " + ";
    }
    std::cout << std::endl;
}

int main(void) {
    char x = 'x';
    std::forward_list<pol> pol1 = {{2,2}, {2,1}, {2, 0}};
    std::forward_list<pol> pol2 = {{2,2}, {2,1}, {2, 0}};

    tampil_polinomial(pol1, "P1");
    tampil_polinomial(pol2, "P2");

    std::cout << "P3 = ";
    auto it1 = pol1.begin();
    auto it2 = pol2.begin();
    while (it1 != pol1.end() && it2 != pol2.end()) {
        pol result = tambah_polinomial(*it1, *it2);
        std::cout << result.koefisien << "x^" << result.pangkat << " + ";
        ++it1;
        ++it2;
    }
    std::cout << std::endl;

    return 0;
}
