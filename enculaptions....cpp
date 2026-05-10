#include <iostream>
using namespace std;

class Mahasiswa {

protected:
    string nama;
    string nim;
    string jurusan;
    int semester;

public:
    Mahasiswa(string n, string ni, string j, int s) {
        nama = n;
        nim = ni;
        jurusan = j;
        semester = s;
    }

    void tampilData() {
        cout << "Nama      : " << nama << endl;
        cout << "NIM       : " << nim << endl;
        cout << "Jurusan   : " << jurusan << endl;
        cout << "Semester  : " << semester << endl;
    }

    virtual void aktivitas() {
        cout << nama << " sedang belajar di kampus." << endl;
    }
};

class MahasiswaTI : public Mahasiswa {

private:
    string bahasaPemrograman;
    string matkulFavorit;
    float ipk;
    string organisasi;

public:
    MahasiswaTI(string n, string ni, string j, int s,
                string bp, string mf, float i, string o)
        : Mahasiswa(n, ni, j, s) {

        bahasaPemrograman = bp;
        matkulFavorit = mf;
        ipk = i;
        organisasi = o;
    }

    string getBahasa() {
        return bahasaPemrograman;
    }

    void setBahasa(string bp) {
        bahasaPemrograman = bp;
    }

    void tampilTambahan() {
        cout << "Bahasa Programming : " << bahasaPemrograman << endl;
        cout << "Matkul Favorit     : " << matkulFavorit << endl;
        cout << "IPK                : " << ipk << endl;
        cout << "Organisasi         : " << organisasi << endl;
    }

    void aktivitas() override {
        cout << nama << " sedang membuat program C++." << endl;
    }
};

int main() {
    MahasiswaTI mhs1(
        "Keano",
        "252310053",
        "Teknologi Informasi",
        2,
        "C++",
        "Pemrograman OOP",
        4.00,
        "HIMATI"
    );

    cout << "===== DATA MAHASISWA =====" << endl;
    mhs1.tampilData();

    cout << endl;

    cout << "===== DATA TAMBAHAN =====" << endl;
    mhs1.tampilTambahan();

    cout << endl;

    cout << "===== AKTIVITAS =====" << endl;
    mhs1.aktivitas();

    return 0;
}
