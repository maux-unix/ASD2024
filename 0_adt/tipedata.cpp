#include <iostream>

using namespace std;

struct Mahasiswa
{
    int umur; // 4 bytes
    float ipk; // 4 bytes
    string name; // 8 bytes
    string jurusan; // 8 bytes
    string alamat; // 8 bytes
    string nim; // 8 bytes
    // 4 + 4 + 32 + 32 + 32 = 104 bytes
};


int main(void)
{

    // Integer
    char b = 0;
    short int a = 0;
    int num1 = 0;
    long int nn = 0;
    long long int nnn = 0;

    // Float
    float num2 = 0.0;
    
    // Double
    double num3 = 0.1;
    
    // Boolean
    bool pilih = true;
    
    // Char
    string nama = "Maulana Muhammad Ali";
    char karakter = 'C';
    const char* name = "Maulana\0";

    // Sizeof
    printf("Integers\n");
    printf("--------\n");
    printf("Char: %zu bytes\n", sizeof(b));
    printf("Short Integer: %zu bytes\n", sizeof(a));
    printf("Integer: %zu bytes\n", sizeof(num1));
    printf("Long Integer: %zu bytes\n", sizeof(nn));
    printf("Long Long Integer: %zu bytes\n", sizeof(nnn));
    printf("\n");
    printf("Floats\n");
    printf("------\n");
    printf("Float: %zu bytes\n", sizeof(num2));
    printf("Double %zu bytes\n", sizeof(num3));
    printf("\n");
    printf("Boolean\n");
    printf("--------\n");
    printf("Boolean: %zu bytes\n", sizeof(pilih));
    printf("\n");
    printf("Char\n");
    printf("----\n");
    printf("String: %zu bytes\n", size(nama));
    printf("Char: %zu bytes\n", sizeof(karakter));
    printf("Char Array: %zu bytes\n", sizeof(name));

    
    printf("Size of Mahasiswa: %zu bytes\n", sizeof(Mahasiswa));

    
    return 0;
}
