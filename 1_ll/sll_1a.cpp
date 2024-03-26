#include <cstdlib> // buat exit()
#include <iostream>
using namespace std;
template<typename T> struct node {
    //bagian data
    T data;
    //pointer ke node selanjutnya
    struct node *next;
};
template<typename T> class sll {
    public:
        node<T> *head, *tail;
        sll() {
            head = tail = NULL;
        }
        void AddLast(T item) { // Add Node After Tail
            struct node<T> *pNew;
            pNew = new node<T>;
            pNew->data = item;
            if (head == NULL) {
                head = pNew;
            } else {
                tail->next = pNew;
            }
            tail = pNew;
        }
        void AddFirst(T item) { // AddNodeBeforeHead
            struct node<T> *pNew;
            pNew = new node<T>;
            pNew->data = item;
            if (head == NULL) {
                tail = pNew;
            } else {
                pNew->next = head;
            }
            head = pNew;
        }
};
int main() {
    sll<char> s;
    s.AddLast('C');
    cout << "head : " << s.head->data << endl;
    cout << "tail : " << s.tail->data << endl;
    s.AddLast('2');
    cout << "head : " << s.head->data << endl;
    cout << "tail : " << s.tail->data << endl;
    s.AddLast('3');
    cout << "head : " << s.head->data << endl;
    cout << "tail : " << s.tail->data << endl;
    s.AddLast('4');
    cout << "head : " << s.head->data << endl;
    cout << "tail : " << s.tail->data << endl;
    return EXIT_SUCCESS;
}