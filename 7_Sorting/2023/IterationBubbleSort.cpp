#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int Data[MAX];

// Prosedur menukar data
void Tukar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Prosedur pengurutan metode gelembung
void BubbleSort(void) {
    int i, j;
    int count = 1;
    for (i=1; i<MAX; i++) {
        for (j=MAX-1; j>=i; j--) {
            // Untuk Descendiing diganti disini
            if (Data[j-1] < Data[j]) { // Diganti jadi tanda <
                Tukar(&Data[j-1], &Data[j]);
                
                // Menampilkan setiap iterasi
                printf("\nIterasi ke-%d :", count);
                for (int k=0; k<MAX; k++) {
                    printf(" %d ", Data[k]);
                }   
            } 
        }
        count++;
    }
}

int main() {
    // Inisialisasi Variable dan Random Generator
    int i;
    srand(0);

    // Membangkitkan bilangan acak
    printf("DATA SEBELUM TERURUT");
    for (i=0; i<MAX; i++) {
        Data[i] = (int) rand()/1000+1;
        printf("\nData ke %d : %d ", i, Data[i]);
    }

    // Melakukan Bubble Sorting
    BubbleSort();

    // Data Setelah Terurut
    printf("\nDATA SETELAH TERURUT");
    for (i=0; i<MAX; i++) {
        printf("\nData ke %d : %d ", i, Data[i]);
    }
}
