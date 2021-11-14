#include <iostream>
#include <math.h>
using namespace std;
int main() {
	short Pil, X=0;
	float Angka1, Angka2;
	double Hasil;
	
	do {
		cout<<"-----(PILIH OPERASI)-----"<<endl;
		cout<<"| 1. Tambah             |"<<endl;
		cout<<"| 2. Kurang             |"<<endl;
		cout<<"| 3. Kali               |"<<endl;
		cout<<"| 4. Bagi               |"<<endl;
		cout<<"| 5. Pangkat            |"<<endl;
		cout<<"| 6. Akar               |"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
		cout<<"Masukkan Angka Pertama ="<<ends; cin>>Angka1;
		cout<<"Masukkan Angka Kedua ="<<ends; cin>>Angka2;
		cout<<"Masukkan Pilihan Menu (1-6) ="<<ends; cin>>Pil;
		switch (Pil) {
			case (1):
				Hasil = Angka1+Angka2;
				break;
			case (2):
				Hasil = Angka1-Angka2;
				break;
			case (3):
				Hasil = Angka1*Angka2;
				break;
			case (4):
				Hasil = Angka1/Angka2;
				break;
			case (5):
				Hasil = pow(Angka1, Angka2);
				break;
			case (6):
				Hasil = pow(Angka1,1/Angka2);
				break;
			default:
				cout<<"Menu yang anda pilih salah, Silahkan ulangi pilih Menu!"<<endl;
		}
		cout<<"Hasil = "<<Hasil<<endl;
		X++;
	}while (X<2);
}
