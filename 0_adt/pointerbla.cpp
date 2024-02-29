#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void) {
    int x = 10;
    string nama = "Maulana";
    string barang[5] = {"Sepeda", "Kertas", "Pulpen", "Laptop", "HP"}; 

    cout << "Nilai x:" << x << endl;
    cout << "Ukuran size x:" << sizeof(x) << endl;
    cout << "Nilai nama:" << nama << endl;
    cout << "Ukuran size nama:" << sizeof(nama) << endl;

    cout << sizeof(barang) << endl;
    cout << sizeof(*barang) << endl;

    for (int i=0; i < std::size(barang); i++){

    }
    return 0;
}
