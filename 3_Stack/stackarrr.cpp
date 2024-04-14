#include <iostream>
#include <stdlib.h>

#define MAX_SIZE 5

using namespace std;

int choice, i;
char item;
char arr_stack[MAX_SIZE];
int count = 0;
int keluar = 0;

void push(char item)
{
    if (count == MAX_SIZE)
    {
        cout << "\n# Stack Penuh";
    }
    else
    {
        arr_stack[count] = item;
        cout << "\n# PUSH No urut/index : " << count << ", Push :" << item;
        count++;
    }
}

void pop()
{
    if (count == 0)
        cout << "\n## Stack kosong";
    else
    {
        --count;
        cout << "\n##POP No urut/index : " << count << ", Value :" << arr_stack[count];
    }
}

void printAll()
{
    cout << "\n## Stack Size : " << count;
    for (i = (count - 1); i >= 0; i--)
        cout << "\n## No Urut/index : " << i << ", Value :" << arr_stack[i];
}

void menu()
{
    cout << "\nMasukkan operasi yang akan dilakukan (1:push, 2:pop, 3:print) : ";
    cin >> choice;
    switch (choice)
    {
        case 1:
        {
            cout << "\nMasukkan huruf yang akan dipush : ";
            cin >> item;
            push(item);
        }
        break;
        case 2:
            pop();
            break;
        case 3:
            printAll();
            break;
        default:
            cout << "\n1:push, 2:pop, 3:print\n";
            keluar = 1;
            break;
    }
}

int main()
{
do{
menu();
} while (keluar == 0);
}