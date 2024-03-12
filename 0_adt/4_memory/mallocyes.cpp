#include <iostream> 

using namespace std;

int main(void) {
    int *x;
    // x = (int *) malloc(3 * sizeof(int)); // 4bytes // Malloc()
    x = (int*) calloc(3, sizeof(int));
    x[0] = 1;
    x[1] = 100;

    // pointer | x[1] | x[2] | 

    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
    free(x);
    return 0;
}
