#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string nama;
    string nim;
    string jurusan;
    int umur;

public:
    void setNama(string n) {
        nama = n;
    }
    void setNim(string n) {
        nim = n;
    }
    void setJurusan(string j) {
        jurusan = j;
    }
    void setUmur(int u) {
        umur = u;
    }

    string getNama() {
        return nama;
    }
    string getNim() {
        return nim;
    }
    string getJurusan() {
        return jurusan;
    }
    int getUmur() {
        return umur;
    }
};

int main() {
    Mahasiswa mhs;
    string nama, nim, jurusan;
    int umur;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan Jurusan: ";
    getline(cin, jurusan);
    cout << "Masukkan Umur: ";
    cin >> umur;

    mhs.setNama(nama);
    mhs.setNim(nim);
    mhs.setJurusan(jurusan);
    mhs.setUmur(umur);

    cout << "\nData Mahasiswa:\n";
    cout << "Nama: " << mhs.getNama() << endl;
    cout << "NIM: " << mhs.getNim() << endl;
    cout << "Jurusan: " << mhs.getJurusan() << endl;
    cout << "Umur: " << mhs.getUmur() << endl;

    return 0;
}
