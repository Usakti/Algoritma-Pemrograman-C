#include <iostream>
#include <conio.h>
using namespace std;

int pilihan, pil;

struct mahasiswa {
    string nama;
    string nim;
    double ipk;
};

void banner() {
	cout<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|   Program Data Mahasiswa Menggunakan Struct   |"<<endl;
	cout<<"| Nama: Nadya Amanda Rizkania NIM: 065001900001 |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| 1. Input Mahasiswa                            |"<<endl;
	cout<<"| 2. Show Mahasiswa                             |"<<endl;
	cout<<"| 3. Update Data Mahasiswa                      |"<<endl;
	cout<<"| 4. Keluar                                     |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| Masukkan Pilihan : "<<ends; cin>>pilihan;
	cout<<"-------------------------------------------------"<<endl;
	cout<<endl;
}

void banner2() {
	cout<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| 1. Dosen                                      |"<<endl;
	cout<<"| 2. Mahasiswa                                  |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| Masukkan Pilihan : "<<ends; cin>>pil;
	cout<<"-------------------------------------------------"<<endl;
	cout<<endl;
}

void input(struct mahasiswa *mhs) {
	cout<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|             INPUT DATA MAHASISWA              |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| Masukkan Nama    : "<<ends; cin>>mhs->nama;
	cout<<"-------------------------------------------------"<<endl;
    cout<<"| Masukkan NIM     : "<<ends; cin>>mhs->nim;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"| Masukkan IPK     : "<<ends; cin>>mhs->ipk;
    cout<<"-------------------------------------------------"<<endl;
}

void show(struct mahasiswa *mhs) {
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|                 DATA MAHASISWA                |"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<"| Nama             : "<<mhs->nama<<"\t\t\t|"<<endl;
    cout<<"| NIM              : "<<mhs->nim<<"\t\t|"<<endl;
    cout<<"| IPK              : "<<mhs->ipk<<"\t\t\t|"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<endl;
}

void update(struct mahasiswa *mhs) {
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|               EDIT DATA MAHASISWA             |"<<endl;
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
				banner2();
				switch (pil) {
					case (1):
						update(&mhs);
						break;
					case (2):
						cout<<"Maaf Anda Tidak Dapat Mengubah Data"<<endl; cout<<endl;
						show(&mhs);
						break;
					default:
						cout<<"Menu yang anda pilih salah, Silahkan ulangi pilih Menu!"<<endl;
				}
				break;
			case (4):
				cout<<"Terima Kasih telah menggunakan Program Nadya Amanda"<<endl;
				break;
			default:
				cout<<"Menu yang anda pilih salah, Silahkan ulangi pilih Menu!"<<endl;
		}
	} while (pilihan != 4);
}
