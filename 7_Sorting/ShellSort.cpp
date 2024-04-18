// C++ implementation of Shell Sort
#include <iostream>

using namespace std;

template<typename T>
void printArray(T arr[], int n)
{
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

template<typename T>
void shellSort(T arr[], int n)
{
	int i, j, gap, temp;
	for (gap = n/2; gap > 0; gap /= 2) {
		for (i = gap; i < n; i++) {
			temp = arr[i];		 
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = temp;
			cout << endl;
			cout << "Gap = " << gap << ":\t";
			printArray(arr, n);
		}
	}
}


int main()
{
	int arr[] = {1,6,5,7,2}, i;
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Awal:\t\t";
	printArray(arr, n);

	shellSort(arr, n);

	cout << "\nAkhir:\t\t";
	printArray(arr, n);

	return 0;
}
