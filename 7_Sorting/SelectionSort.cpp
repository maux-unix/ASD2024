#include <iostream>
#include <vector>

template<typename T>
void printarray(T data[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << data[i] << " ";
    }
}

template<typename T>
void selectionsort(T data[], int n) {
    for (int i = 0,j,least; i < n-1; i++) {
        std::cout << "Iterasi ke-" << i << " = ";
        printarray(data, n);
        for (j = i+1, least = i; j < n; j++)
            if (data[j] < data[least])
                least = j;
                std::cout << "\nLEAST ditandai pada indeks: " << least << std::endl;
        std::swap(data[least],data[i]);
        std::cout << "Iterasi ke-" << i << " = ";
        printarray(data, n);
        std::cout << "\n\n";
    }
}



int main(int argc, char const *argv[]) {
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

    selectionsort(angka.data(), angka.size());

    std::cout << "Akhir: ";
    for (int i = 0; i < angka.size(); i++) {
        std::cout << angka[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
