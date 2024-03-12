#include <iostream>
#include <vector>
#include <string>

typedef struct PolynomialTerm {
    int koefisien;
    int pangkat;
} Pol;

typedef std::vector<Pol> Polynomial;

Polynomial operasi_polinomial(const Polynomial& pol1, const Polynomial& pol2, std::string operasi) {
    Polynomial result;
    auto it1 = pol1.begin();
    auto it2 = pol2.begin();

    while (it1 != pol1.end() && it2 != pol2.end()) {
        if (it1->pangkat == it2->pangkat) {
            if (operasi == "tambah") {
                result.push_back({it1->koefisien + it2->koefisien, it1->pangkat});
            } else if (operasi == "kurang") {
                result.push_back({it1->koefisien - it2->koefisien, it1->pangkat});
            }
            ++it1;
            ++it2;
        } else if (it1->pangkat > it2->pangkat) {
            result.push_back(*it1);
            ++it1;
        } else {
            result.push_back(*it2);
            ++it2;
        }
    }

    while (it1 != pol1.end()) {
        result.push_back(*it1);
        ++it1;
    }

    while (it2 != pol2.end()) {
        result.push_back(*it2);
        ++it2;
    }

    return result;
}

Polynomial kali_polinomial(const Polynomial& pol1, const Polynomial& pol2) {
    Polynomial result;
    for (const auto& term1 : pol1) {
        for (const auto& term2 : pol2) {
            result.push_back({term1.koefisien * term2.koefisien, term1.pangkat + term2.pangkat});
        }
    }
    return result;
}

Polynomial turunan_polinomial(const Polynomial& pol1) {
    Polynomial result;
    for (const auto& term : pol1) {
        if (term.pangkat != 0) {
            result.push_back({term.koefisien * term.pangkat, term.pangkat - 1});
        }
    }
    return result;
}

void tampil_polinomial(const Polynomial& p, const std::string& nama_pol) {
    std::cout << nama_pol << " = ";
    auto it = p.begin();
    auto next_it = std::next(it);
    while (it != p.end()) {
        if (it->koefisien != 0) {
            std::cout << it->koefisien << "x^" << it->pangkat;
            if (next_it != p.end() && next_it->koefisien != 0) {
                std::cout << " + ";
            }
        }
        ++it;
        if (next_it != p.end()) {
            ++next_it;
        }
    }
    std::cout << std::endl;
}


int main(void) {
    Polynomial p1 {{6, 8}, {8, 7}, {5, 5}, {1, 3}, {15, 0}};
    Polynomial p2 {{3, 9}, {4, 7}, {3, 4}, {2, 3}, {2, 2}, {10, 0}};
    Polynomial p3 {{1, 2}, {5, 0}};
    Polynomial r  {};

    r = operasi_polinomial(p1, p2, "tambah");
    tampil_polinomial(r, "result");

    r = operasi_polinomial(p1, p2, "kurang");
    tampil_polinomial(r, "result");

    r = kali_polinomial(p1, p2);
    tampil_polinomial(r, "result");

    r = turunan_polinomial(p2);
    tampil_polinomial(r, "P2");

    return 0;
}
