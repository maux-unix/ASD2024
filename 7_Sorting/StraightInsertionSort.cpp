#include <iostream>
#include <vector>

template<class T>
void insertionsort(T data[], int n) {
    for (int i = 1,j; i < n; i++) {
        T tmp = data[i];
        for (j = i-1; j > 0 && tmp < data[j]; j--)
            data[j+1] = data[j];
        data[j+1] = tmp;
    }
}

int main(int argc, char const *argv[])
{
    if (argc <= 1) {
        std::cout << "Usage: " << argv[0] << " <space separated integers>" << std::endl;
        return 1;
    }

    std::vector<int> angka;
    std::cout << "Awal: ";
    for (int i = 1; i < argc; ++i) {
        angka.push_back(std::atoi(argv[i]));
        std::cout << argv[i] << " ";
    }
    std::cout << std::endl;

    insertionsort(angka.data(), angka.size());

    std::cout << "Akhir: ";
    for (int i = 0; i < angka.size(); i++) {
        std::cout << angka[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
