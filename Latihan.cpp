#include <iostream>
#include <stdlib.h>

using namespace std;

struct Buku{
    string judul, pengarang;
    int tahun_terbit;
    
    struct Buku *next;
};

typedef struct Buku buku;

buku *head, *tail, *cur, *node_baru, *del;

void buatSingleLinkedList(string judul, string pengarang, int tahun_terbit){
        head = new buku();
        head->judul = judul;
        head->pengarang = pengarang;
        head->tahun_terbit = tahun_terbit;
        head->next = NULL;
        tail = head;
}

void tambahAwal(string judul, string pengarang, int tahun_terbit){
    node_baru = new buku();
    node_baru->judul = judul;
    node_baru->pengarang = pengarang;
    node_baru->tahun_terbit = tahun_terbit;
    node_baru->next = head;
    head = node_baru;
}

void tambahBelakang(string judul, string pengarang, int tahun_terbit){
    node_baru = new buku();
    node_baru->judul = judul;
    node_baru->pengarang = pengarang;
    node_baru->tahun_terbit = tahun_terbit;
    node_baru->next = NULL;
    tail->next = node_baru;
    tail = node_baru;
}

void hapusAwal(){
    del = head;
    head = head->next;
    delete del;
}

void hapusBelakang(){
    del = tail;
    cur = head;
    while(cur->next != tail){
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;
}

void cetakSingleLinkedList(){
    cur = head;
    while(cur != NULL){
        cout << "Judul Buku: " << cur->judul << endl;
        cout << "Pengarang: " << cur->pengarang << endl;
        cout << " Tahun Terbit: " << cur->tahun_terbit << endl;
        
        cur = cur->next;
    }
}

int main()
{
    buatSingleLinkedList("system Operation Concept", "Abraham Silberschatz", 2012);
    
    tambahAwal("Fisika", "Saya", 2015);
    
    tambahBelakang("Biologi", "Saya Lagi", 2019);
    
    hapusAwal();
    cetakSingleLinkedList();
    

    return 0;
}
