#include <cstdlib>
#include <iostream>
using namespace std;
struct node {
    //bagian dataw
    char data;
    //pointer ke node selanjutnya
    struct node *next;
};
typedef struct node node;
node *head, *tail;
void AddLast(char item){ // Add Node After Tail
    struct node *pNew;
    pNew = (node *) malloc(sizeof(node));
    pNew->data = item;
    if (head == NULL){
        head= pNew;
    }
    else {
        tail->next = pNew;
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
    }
    head=pNew;
}
int main()
{
    head=tail=NULL;
    AddLast ('A');
    cout << "head : " << head->data <<endl;
    cout << "tail : " << tail->data <<endl;
    AddLast ('B');
    cout << "head : " << head->data <<endl;
    cout << "tail : " << tail->data <<endl;
    AddLast ('C');
    cout << "head : " << head->data <<endl;
    cout << "tail : " << tail->data <<endl;
    AddLast ('D');
    cout << "head : " << head->data <<endl;
    cout << "tail : " << tail->data <<endl;
    return EXIT_SUCCESS;
}