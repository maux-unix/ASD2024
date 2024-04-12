#include <cstdlib>  // object 
#include <iostream>
#include <conio.h>

#define WINDOW 100
#define MAX 100

constexpr int MAXA = 100;

int a = MAX;
int b = MAXA;

using namespace std;

struct node {
    //bagian data
    char data;
    string a;
    int ipk;
    //pointer ke node selanjutnya
    struct node *next;
    struct node *prev;
};
typedef struct node node;
node *head, *tail;

void AddLast(char data,string a, int ipk){ // Add Node After Tail
    struct node *pNew;
    pNew = (node *) malloc(sizeof(node));
    pNew->data = data;
    pNew->a = a;
    pNew->ipk = ipk;

    if (head == NULL){
        head= pNew;
    }
    else {
        tail->next = pNew;
        pNew->prev=tail;
    }
    tail=pNew;
}

void AddFirst(char item){ // AddNodeBeforeHead
    struct node *pNew;
    pNew = (node *) malloc(sizeof(node));
    pNew->data = item;
    if (head == NULL){
        tail= pNew;
    }
    else {
        pNew->next = head;
        head->prev=pNew;
    }
    head=pNew;
}

int main()
{
    head=tail=NULL;
    AddFirst('A');
    cout << "head : " << head->data <<endl;
    cout << "tail : " << tail->data <<endl;
    AddFirst('B');
    cout << "head : " << head->data <<endl;
    cout << "tail : " << tail->data <<endl;
    AddFirst ('C');
    cout << "head : " << head->data <<endl;
    cout << "tail : " << tail->data <<endl;
    AddFirst ('D');
    cout << "head : " << head->data <<endl;
    cout << "tail : " << tail->data <<endl;
    getch();
    return EXIT_SUCCESS;
}