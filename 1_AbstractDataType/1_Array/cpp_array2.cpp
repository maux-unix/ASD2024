#include "../../header.hpp"

typedef std::array<int, 11> Koefisien, Pangkat, Polinom10; // Polinom sampai pangkat 10
typedef std::array<int, 21> Hasil; // Hasil Polinom sampai pangkat 20

Polinom10 operasi_polinom(Koefisien ka, Koefisien kb, std::string nama_op) {
    Polinom10 hasil;
    auto it_ka = ka.begin();
    auto it_kb = kb.begin();

    for (int i = 0; i < hasil.size() && it_ka != ka.end() && it_kb != kb.end(); ++i) {
        if (nama_op == "tambah") {
            hasil[i] = *it_ka + *it_kb;
        } else if (nama_op == "kurang") {
            hasil[i] = *it_ka - *it_kb;
        }
        ++it_ka; ++it_kb;
    }

    return hasil;
}

Hasil kali_polinom(Koefisien k1, Koefisien k2, Pangkat p) {
    Hasil hasil = {};

    for (int i = 0; i < k1.size(); ++i) {
        for (int j = 0; j < k2.size(); ++j) {
            int pangkat = p[i] + p[j];
            hasil[pangkat] += k1[i] * k2[j];
        }
    }

    return hasil;
}

Polinom10 turunan_polinom(Koefisien k, Pangkat& p) {
    Polinom10 hasil;

    for (int i = 0; i < k.size(); ++i) {
        if (p[i] != 0) { 
            hasil[i] = k[i] * p[i]; 
            --p[i]; 
        } else {
            hasil[i] = 0; 
        }
    }

    return hasil;
}

void tampil_polinom(const Koefisien& k, const Pangkat& p, std::string nama_pol) {
    auto it_k = k.begin();
    auto it_p = p.begin();

    std::cout << nama_pol;
    for (; it_k != k.end() && it_p != p.end(); ++it_k, ++it_p) {
        if (*it_k != 0) {
            std::cout << "(" << *it_k << "x^" << *it_p << ")" << " + ";
        }
    }
    std::cout << std::endl;
}

int main(void) {
    Pangkat p = {10, 9, 8, 6, 7, 5, 4, 3, 2, 1, 0};
    Koefisien k1 = {0, 0, 6, 8, 0, 5, 0, 1, 0, 0, 15};
    Koefisien k2 = {0, 3, 0, 4, 0, 0, 3, 2, 2, 0, 10};
    Koefisien k3 = {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 5};
    Polinom10 result;

    tampil_polinom(k1, p, "P1 = ");
    tampil_polinom(k2, p, "P2 = ");
    tampil_polinom(k3, p, "P3 = ");
    std::cout << std::endl;

    result = operasi_polinom(k1, k2, "tambah");
    tampil_polinom(result, p, "P1 + P2 = ");

    result = operasi_polinom(k1, k2, "kurang");
    tampil_polinom(result, p, "P1 - P2 = ");

    // result = kali_polinom(k1, k2, p);
    // tampil_polinom(result, p, "P1 * P3 = ");

    result = turunan_polinom(k2, p);
    tampil_polinom(result, p, "P2' = ");

    return 0;
}
