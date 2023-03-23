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
			cout << "n\Array yang anda maskkan maksimal 20 elemen.\n"; //menampilkan pesan jika data lebih dari 20
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

	int temp;													//membuat variabel data temporer atau penyimpanan sementara
	int j;														//membuat variabel j sebagai penanda

	for (int i = 1; i < n; i++) {								//looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];											//simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;												//setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp)							//looping while dimana nilai j lebih besar sama dengan 0 dan
			//arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];								//simpan arr[j] ke dalam variabel arr[j+1]
			j--;												//decrement nilai j by 1
		}

		arr[j + 1] = temp;										//simpan nilai temp ke dalam arr[j+1]

		cout << "\nStep " << i << ": ";							//output ke layar
		for (int k = 0; k < n; k++) {							//looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";								//output ke layar
		}
	}
}

void display() {												//prosedur display
	cout << endl;												//output baris kosong
	cout << "================================" << endl;			//output ke layar
	cout << "Elemen Array yang telah tersusun" << endl;
	cout << "================================" << endl;

	for (int j = 0; j < n; j++) {								//looping dari j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;									//output ke layar
	}
	cout << endl;												//output baris kosong
}

