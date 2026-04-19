#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;
    cin.ignore();

    string buku[n];

    for (int i = 0; i < n; i++) {
        cout << "Judul buku ke-" << i+1 << ": ";
        getline(cin, buku[i]);
    }

    cout << "\nSebelum sorting:\n";
    for (int i = 0; i < n; i++) {
        cout << buku[i] << endl;
    }

    for (int i = 1; i < n; i++) {
        string key = buku[i];
        int j = i - 1;

        while (j >= 0 && buku[j] > key) {
            buku[j + 1] = buku[j];
            j--;
        }
        buku[j + 1] = key;
    }

    cout << "\nSetelah sorting (Ascending):\n";
    for (int i = 0; i < n; i++) {
        cout << buku[i] << endl;
    }

    return 0;
}
