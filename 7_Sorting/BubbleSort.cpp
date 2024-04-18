#include <iostream>

using namespace std;

template<typename T>
void printArray(T array[], int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}

template<typename T>
void bubbleSort(T array[], int size) {
    int i, j;
    int countloop = 0;
    for (i = 0; i < size - 1; ++i) {
        for (j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                cout << "Iterasi ke-" << i << ":";
                swap(array[j], array[j + 1]);
                printArray(array, size);
            }       
        }    
    }
}



int main(void) {
    int array[] = {1,6,5,7,2};
    int size = sizeof(array)/sizeof(array[0]);
    cout << "Awal: ";
    printArray(array, size);
    bubbleSort(array, size);
    cout << "Akhir: ";
    printArray(array, size);
    return 0;
}
