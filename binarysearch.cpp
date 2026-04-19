#include <iostream>
using namespace std;

int main() {
    string buku[] = {
        "Algoritma",
        "Basis Data",
        "Jaringan Komputer",
        "Pemrograman",
        "Struktur Data"
    };

    int n = sizeof(buku) / sizeof(buku[0]);
    string cari;

    int kiri = 0, kanan = n - 1;
    int tengah;
    bool ditemukan = false;

    cout << "Masukkan judul buku yang dicari: ";
    getline(cin, cari);

    while (kiri <= kanan) {
        tengah = (kiri + kanan) / 2;

        if (buku[tengah] == cari) {
            cout << "Buku ditemukan di rak ke-" << tengah << endl;
            ditemukan = true;
            break;
        }
        else if (buku[tengah] < cari) {
            kiri = tengah + 1;
        }
        else {
            kanan = tengah - 1;
        }
    }

    if (!ditemukan) {
        cout << "Buku tidak ditemukan" << endl;
    }

    return 0;
}
