#include <iostream>
#include <string>

typedef struct node {
    int ipk;
    std::string nama;
} Node;

int main(void) {
    Node* Mahasiswa1 = new Node;
    Mahasiswa1->ipk = 4;
    Mahasiswa1->nama = "Maulana";
    std::cout << Mahasiswa1->ipk << " -- " << Mahasiswa1->nama;
    delete Mahasiswa1; // Don't forget to deallocate memory
    return 0;
}
