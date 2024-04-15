#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Mahasiswa 
{
    private:
        string nim;
        string nama;
    public:
        // Constructor
        Mahasiswa(string _nim, string _nama) : nim(_nim), nama(_nama) {}
        
        // Getter methods
        string getNIM() const { return nim; }
        string getNama() const { return nama; }
        
        // Setter methods
        void setNIM(string _nim) { nim = _nim; }
        void setNama(const string& _nama) { nama = _nama; }
};

class DataMahasiswa
{
    private:
        vector<Mahasiswa> listMahasiswa;
    public:
        // Konstruktor
        DataMahasiswa(const vector<Mahasiswa>& _listMahasiswa) : listMahasiswa(_listMahasiswa) {}
        
        // Bubble sort
        void BubbleSort()
        {
            for (size_t i = 0; i < listMahasiswa.size() - 1; i++) {
                for (size_t j = 0; j < listMahasiswa.size() - i - 1; j++) {
                    if (listMahasiswa[j].getNIM() > listMahasiswa[j + 1].getNIM()) {
                        swap(listMahasiswa[j], listMahasiswa[j + 1]);
                    }
                }
            }
        }
        
        // Output List nya
        void displayListMahasiswa() {
            for (const Mahasiswa& m : listMahasiswa) {
                cout << m.getNIM() << ", "<< m.getNama() << endl;
            }
        }
};

int main() {
    Mahasiswa m1("225150307111004", "Maulana");
    Mahasiswa m2("225150301111003", "Ali");
    vector<Mahasiswa> mahasiswaList = {m1, m2};
    DataMahasiswa data(mahasiswaList); 

    cout << "Data sebelum diurutkan:" << endl;
    data.displayListMahasiswa(); 
    
    data.BubbleSort(); 
    
    cout << "\nData setelah diurutkan berdasarkan NIM:" << endl;
    data.displayListMahasiswa(); 

    return 0;
}
