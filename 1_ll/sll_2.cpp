#include <iostream>
#include <cstdlib> // For exit()

struct paket {
    std::string nama;
    std::string tujuan;
    int berat;
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
    pNew->next = nullptr;

    if (head == nullptr) {
        head = tail = pNew;
    } else {
        tail->next = pNew;
        tail = pNew;
    }
}

void insert(std::string nama, std::string tujuan, int berat, int urutan) {
    paket* pNew = new paket;
    pNew->nama = nama;
    pNew->tujuan = tujuan;
    pNew->berat = berat;

    if (urutan == 1) {
        pNew->next = head;
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
    paket* pHapus;
    if (urutan == 1) {
        pHapus = head;
        head = head->next;
        delete pHapus;
        return;
    }
    paket* pBaca = head;
    for (int i = 1; i < urutan - 1 && pBaca != nullptr; i++) {
        pBaca = pBaca->next;
    }
    if (pBaca == nullptr || pBaca->next == nullptr) {
        std::cout << "Urutan tidak valid" << std::endl;
        return;
    }
    pHapus = pBaca->next;
    pBaca->next = pHapus->next;
    delete pHapus;
}

void display() {
    if (head == nullptr) {
        std::cout << "Tidak ada data" << std::endl;
    } else {
        paket* pBaca = head;
        bool has_data = false;
        while (pBaca != nullptr) {
            std::cout << "Nama : " << pBaca->nama << std::endl;
            std::cout << "Tujuan : " << pBaca->tujuan << std::endl;
            std::cout << "Berat : " << pBaca->berat << " kg" << std::endl;
            has_data = true;
            pBaca = pBaca->next;
        }
        if (!has_data) {
            std::cout << "Tidak ada data" << std::endl;
        }
    }
}

int main() {
    int pilihan, urutan, berat;
    std::string nama, tujuan;
    do {
        std::cout << "1. Tambah Paket" << std::endl;
        std::cout << "2. Tambah Paket di Urutan Tertentu" << std::endl;
        std::cout << "3. Edit Paket" << std::endl;
        std::cout << "4. Hapus Paket" << std::endl;
        std::cout << "5. Tampilkan Paket" << std::endl;
        std::cout << "6. Keluar" << std::endl;
        std::cout << "Pilihan : ";
        std::cin >> pilihan;
        switch (pilihan) {
        case 1:
            std::cout << "Nama : ";
            std::cin >> nama;
            std::cout << "Tujuan : ";
            std::cin >> tujuan;
            std::cout << "Berat : ";
            std::cin >> berat;
            add(nama, tujuan, berat);
            break;
        case 2:
            std::cout << "Nama : ";
            std::cin >> nama;
            std::cout << "Tujuan : ";
            std::cin >> tujuan;
            std::cout << "Berat : ";
            std::cin >> berat;
            std::cout << "Urutan : ";
            std::cin >> urutan;
            insert(nama, tujuan, berat, urutan);
            break;
        case 3:
            std::cout << "Nama : ";
            std::cin >> nama;
            std::cout << "Tujuan : ";
            std::cin >> tujuan;
            std::cout << "Berat : ";
            std::cin >> berat;
            std::cout << "Urutan : ";
            std::cin >> urutan;
            edit(nama, tujuan, berat, urutan);
            break;
        case 4:
            std::cout << "Urutan : ";
            std::cin >> urutan;
            remove(urutan);
            break;
        case 5:
            display();
            break;
        case 6:
            return 0;
        default:
            std::cout << "Pilihan tidak tersedia" << std::endl;
            break;
        }
    } while (true);
    return 0;
}
