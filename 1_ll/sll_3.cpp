#include <iostream>
#include <cstdlib> // For exit()

struct paket {
    std::string nama;
    std::string tujuan;
    int berat;
    paket* prev;
    paket* next;
};

typedef struct paket paket;
paket* head = nullptr;
paket* tail = nullptr;

void add(std::string nama, std::string tujuan, int berat) {
    paket* pNew = new paket;
    pNew->nama = nama;
    pNew->tujuan = tujuan;
    pNew->berat = berat;
    pNew->prev = nullptr;
    pNew->next = nullptr;

    if (head == nullptr) {
        head = tail = pNew;
    } else {
        tail->next = pNew;
        pNew->prev = tail;
        tail = pNew;
    }
}

void insert(std::string nama, std::string tujuan, int berat, int urutan) {
    paket* pNew = new paket;
    pNew->nama = nama;
    pNew->tujuan = tujuan;
    pNew->berat = berat;
    pNew->prev = nullptr;
    pNew->next = nullptr;

    if (urutan == 1) {
        pNew->next = head;
        head->prev = pNew;
        head = pNew;
    } else {
        paket* pBaca = head;
        for (int i = 1; i < urutan - 1 && pBaca != nullptr; i++) {
            pBaca = pBaca->next;
        }
        if (pBaca == nullptr) {
            std::cout << "Urutan tidak valid" << std::endl;
            delete pNew;
            return;
        }
        pNew->next = pBaca->next;
        pNew->prev = pBaca;
        if (pBaca->next != nullptr) {
            pBaca->next->prev = pNew;
        }
        pBaca->next = pNew;
    }
}

void edit(std::string nama, std::string tujuan, int berat, int urutan) {
    paket* pBaca = head;
    for (int i = 1; i < urutan && pBaca != nullptr; i++) {
        pBaca = pBaca->next;
    }
    if (pBaca == nullptr) {
        std::cout << "Urutan tidak valid" << std::endl;
        return;
    }
    pBaca->nama = nama;
    pBaca->tujuan = tujuan;
    pBaca->berat = berat;
}

void remove(int urutan) {
    if (head == nullptr) {
        std::cout << "List kosong" << std::endl;
        return;
    }
    paket* pDel;
    if (urutan == 1) {
        pDel = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        if (pDel == tail) {
            tail = nullptr;
        }
    } else {
        paket* pBaca = head;
        for (int i = 1; i < urutan - 1 && pBaca != nullptr; i++) {
            pBaca = pBaca->next;
        }
        if (pBaca == nullptr || pBaca->next == nullptr) {
            std::cout << "Urutan tidak valid" << std::endl;
            return;
        }
        pDel = pBaca->next;
        pBaca->next = pDel->next;
        if (pDel == tail) {
            tail = pBaca;
        } else {
            pDel->next->prev = pBaca;
        }
    }
    delete pDel;
}

void display() {
    if (head == nullptr) {
        std::cout << "List kosong" << std::endl;
        return;
    }
    paket* pBaca = head;
    while (pBaca != nullptr) {
        std::cout << pBaca->nama << " " << pBaca->tujuan << " " << pBaca->berat << std::endl;
        pBaca = pBaca->next;
    }
}

int main() {
    add("A", "Jakarta", 1);
    add("B", "Bandung", 2);
    add("C", "Surabaya", 3);
    add("D", "Semarang", 4);
    display();
    std::cout << std::endl;
    insert("E", "Yogyakarta", 5, 1);
    insert("F", "Malang", 6, 3);
    insert("G", "Bali", 7, 6);
    display();
    std::cout << std::endl;
    edit("H", "Lombok", 8, 3);
    display();
    std::cout << std::endl;
    remove(1);
    remove(3);
    remove(5);
    display();
    return EXIT_SUCCESS;
}

