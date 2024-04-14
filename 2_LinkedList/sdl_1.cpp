#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

struct node {
    //bagian data
    char data;
    //pointer ke node selanjutnya
    struct node *next;
    struct node *prev;
};
typedef struct node node;
node *head, *tail;

int main()
{






    getch();
    return EXIT_SUCCESS;
}