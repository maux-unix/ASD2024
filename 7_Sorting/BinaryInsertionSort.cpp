#include <iostream>
#include <vector>

template<typename T>
void printarray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

template<typename T>
T binarysearch(T data[], T item, int low, int high) {
    if (high <= low)
        return (item > data[low]) ? (low + 1) : low;
 
    int mid = (low + high) / 2;
 
    if (item == data[mid])
        return mid + 1;
 
    if (item > data[mid])
        return binarysearch(data, item, mid + 1, high);

    return binarysearch(data, item, low, mid - 1);
}

template<typename T>
void insertionsort(T data[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        j = i-1;
        T tmp = data[i];
        std::cout << "Iterasi ke-" << j << ": ";
        printarray(data, n);
        int loc = binarysearch(data, tmp, 0, j);
        while (j >= loc) {
            data[j+1] = data[j];
            
            j--;
        }
        data[j+1] = tmp;
        std::cout << "-> ";
        printarray(data, n);
        std::cout << std::endl;
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


