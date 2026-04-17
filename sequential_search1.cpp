#include <iostream>
using namespace std;
	
int main(){
	int nilai[20];
	int posisi[20];
	int i, n, Bil, jmlh = 0;
	bool ketemu = false;
	
	cout << "Masuka jumlah deret bilangan = ";
	cin >> n;
	cout << endl;
	
	for (int i = 0; i < n; i++) {
		cout << "Nilai bilangan ke-" << i << " = ";
		cin >> nilai[i];
	}
	
	cout << "\nDeret Bilangan = ";
	for (int i = 0; i < n; i++) {
		cout << nilai[i] << " ";
	}
	
	cout << "\n\Memasukan Bilangan yang akan dicari = ";
	cin >> Bil;
	
	for (int i = 0; i < n; i++) {
		if (nilai[i] == Bil) {
			ketemu = true;
			posisi[jmlh] = i;
			jmlh++;
		}
	}
	
	if (ketemu) {
		cout << "\nBilangan " << Bil << " ditemukan sebanyak " << jmlh << " kali ";
		cout << "\nPada posisi indeks ke = ";
		for (i = 0; i < jmlh; i++) {
			cout << posisi[i] << " ";
		}
	} else {
		cout << "\nMaaf, bilangan " << Bil << " Tidak ditemukan";
	}
}
