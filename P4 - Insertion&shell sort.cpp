#include <iostream>
using namespace std;

int arr[20];													//membuat array dengan panjang data 20
int n;															//membuat variabel inputan n

void input() {													//prosedur input
	while (true)				
	{
		cout << "Masukkan Jumlah Data pada Array : ";			//membuat inputan jumlah elemen array
		cin >> n;												//memanggil variabel inputan n

		if (n <= 20) {											//membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "m\Array yang anda maskkan maksimak 20 elemen.\n"; //menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;												//membuat jarak perbaris program
	cout << "=====================" << endl;					//membuat tampilan susunan data elemen array
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)									//menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";					//memasukkan atau mengimputkan nilai data n
		cin >> arr[i];											//menyimpan nilai data n kedalam arr
	}
}

void insertionsort() {											//prosedur insertionsort

}