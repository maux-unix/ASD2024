#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int Data[MAX];

// Prosedur menukar data
void Tukar (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Prosedur pengurutan metode Shell
void ShellSort()
{
    int i, j, temp;
    int gap;
    int count = 0;
    
    // Define the gap sequence
    for (gap = MAX/2; gap > 0; gap /= 2) {
        for (i = gap; i < MAX; i++) {
            temp = Data[i];
            for (j = i; j >= gap && Data[j - gap] < temp; j -= gap) {
                Data[j] = Data[j - gap];
                count++;
            }
            Data[j] = temp;

            // Menampilkan setiap iterasi
            printf("\nSwap ke-%d :", count);
            for (int k = 0; k < MAX; k++) {
                printf(" %d ", Data[k]);
            }
        }
    }
}

int main()
{
    int i;
    srand(0);

    // Membangkitkan bilangan acak
    printf("DATA SEBELUM TERURUT");
    for(i=0; i<MAX; i++)
    {
        Data[i] = (int) rand()/1000+1;
        printf("\nData ke %d : %d ", i, Data[i]);
    }
    ShellSort();
    // Data setelah terurut
    printf("\nDATA SETELAH TERURUT");
    for(i=0; i<MAX; i++)
    {
        printf("\nData ke %d : %d ", i, Data[i]);
    }
}
