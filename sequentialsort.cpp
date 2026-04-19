#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 6, 12, 18, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cari;
    bool ditemukan = false;

    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    for (int i = 0; i < n; i++) {
        if (arr[i] == cari) {
            ditemukan = true;
            break;
        }
    }

    if (ditemukan) {
        cout << "Bilangan ditemukan" << endl;
    } else {
        cout << "Bilangan tidak ditemukan" << endl;
    }

    return 0;
}
