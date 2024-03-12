#include "../../header.hpp"

typedef struct Polinomial {
    int koefisien;
    int pangkat;
} pol;

pol tambah_polinomial(pol p1, pol p2){
    if (p1.pangkat != p2.pangkat){
        return p1;
    }
    p1.koefisien += p2.koefisien;
    return p1;
}

pol kurang_polinomial(pol p1, pol p2){
    if (p1.pangkat != p2.pangkat){
        return p1;
    }
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
    std::forward_list<pol> pol1 = {{2,10}, {2,7}, {2, 3}};
    std::forward_list<pol> pol2 = {{2,9}, {2,7}, {2, 0}};

    tampil_polinomial(pol1, "P1");
    tampil_polinomial(pol2, "P2");

    std::cout << "P3 = ";
    auto it1 = pol1.begin();
    auto it2 = pol2.begin();
    while (it1 != pol1.end() && it2 != pol2.end()) {
        pol result = tambah_polinomial(*it1, *it2);
        if (it1->pangkat != it2->pangkat) {
            //concat the remaining polinomial here
            if (it1->pangkat > it2->pangkat) {
                std::cout << it1->koefisien << "x^" << it1->pangkat << " + ";
                std::cout << it2->koefisien << "x^" << it2->pangkat << " + ";
            }
        } else {
            std::cout << result.koefisien << "x^" << result.pangkat << " + ";
        }
        ++it1;
        ++it2;
    }
    std::cout << std::endl;

    return 0;
}
