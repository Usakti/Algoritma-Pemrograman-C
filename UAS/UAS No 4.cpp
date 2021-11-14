#include <iostream>
#include <conio.h>
using namespace std;

int pilihan, pil;

struct mahasiswa {
    string no, merk, tipe;
    double harga;
};

void banner() {
	cout<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| 1. Input                                      |"<<endl;
	cout<<"| 2. Show                                       |"<<endl;
	cout<<"| 3. Update Data                                |"<<endl;
	cout<<"| 4. Keluar                                     |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| Masukkan Pilihan : "<<ends; cin>>pilihan;
	cout<<"-------------------------------------------------"<<endl;
	cout<<endl;
}

void input(struct mahasiswa *mhs) {
	cout<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|             INPUT DATA                        |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| No Transaksi    : "<<ends; cin>>mhs->no;
	cout<<"-------------------------------------------------"<<endl;
    cout<<"| Harga           : "<<ends; cin>>mhs->harga;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"| Merk            : "<<ends; cin>>mhs->merk;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"| Type            : "<<ends; cin>>mhs->tipe;
    cout<<"-------------------------------------------------"<<endl;
}

void show(struct mahasiswa *mhs) {
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|                 DATA                          |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| Nama              : "<<mhs->no<<"\t\t\t|"<<endl;
    cout<<"| Harga             : "<<mhs->harga<<"\t\t|"<<endl;
    cout<<"| Merk              : "<<mhs->merk<<"\t\t\t|"<<endl;
    cout<<"| Type              : "<<mhs->merk<<"\t\t\t|"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<endl;
}

void update(struct mahasiswa *mhs) {
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|               EDIT DATA                       |"<<endl;
	show(mhs);
	cout<<"Menjadi..."<<endl;
	input(mhs);
    cout<<"Anda Berhasil Merubah Data"<<endl;
}

int main(){
	mahasiswa mhs;
    do {
    	banner();
    	cout<<endl;
    	switch (pilihan) {
			case (1):
				input(&mhs);
				break;
			case (2):
				show(&mhs);
				break;
			case (3):
				update(&mhs);
				break;
			case (4):
				cout<<"Terima Kasih telah menggunakan Program"<<endl;
				break;
			default:
				cout<<"Menu yang anda pilih salah, Silahkan ulangi pilih Menu!"<<endl;
		}
	} while (pilihan != 4);
}
