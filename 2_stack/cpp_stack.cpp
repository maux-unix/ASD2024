/*
    JUDUL   : STACK DALAM C++
    TANGGAL : 13/3/2024

    HAK CIPTA (C) 2024
    AUTHOR  : MAULANA ALI
    LICENSE : BSD-2 LICENSE
*/

#include "../header.hpp"

using namespace std;

typedef struct Mahasiswa {
    array<char, 15> nim; 
    string nama;
    array<int, 3> nilai;
} m;

int main(void) {
    stack<Mahasiswa> kelas_a {};
    Mahasiswa maulana = {
        .nama = "225150301111004",
        .nim
    }
    kelas_a.push({'225150301111004'}, {"Maulana"}, {90, 98, 100}});

    return 0;
}
