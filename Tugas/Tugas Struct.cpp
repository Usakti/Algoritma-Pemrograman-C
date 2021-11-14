#include <iostream>
#include <conio.h>
using namespace std;

int pilihan, pilih;
string tampil;

struct data_dosen {
    string nama;
    string nidn;
    string jabatan;
    int gaji;
};

void banner() {
	cout<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"| Program Data Mahasiswa Menggunakan Struct |"<<endl;
	cout<<"| Nama: Azhar Rizky Zulma NIM: 065001900001 |"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"| 1. Show Dosen                             |"<<endl;
	cout<<"| 2. Update Gaji                            |"<<endl;
	cout<<"| 3. Keluar                                 |"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"| Masukkan Pilihan : "<<ends; cin>>pilihan;
	cout<<"---------------------------------------------"<<endl;
	cout<<endl;
}

void input(struct data_dosen *data1, struct data_dosen *data2, struct data_dosen *data3) {
	(*data1).nama = "Anung Barlianto Ariwibowo";
	(*data1).nidn = "0309067301";
	(*data1).jabatan = "Asiten Ahli";
	(*data1).gaji = 10000000;
	
	(*data2).nama = "Syaifudin";
	(*data2).nidn = "0317086401";
	(*data2).jabatan = "Lektor";
	(*data2).gaji = 10000000;
	
	(*data3).nama = "Agus Salim";
	(*data3).nidn = "0331088304";
	(*data3).jabatan = "Asiten Ahli";
	(*data3).gaji = 10000000;
}

void tampilkan(struct data_dosen *data1, struct data_dosen *data2, struct data_dosen *data3) {
	cout<<"DATA DOSEN"<<endl;
	cout<<endl;
	cout<<"Nama    : "<<(*data1).nama<<endl;
	cout<<"NIDN    : "<<(*data1).nidn<<endl;
	cout<<"Jabatan : "<<(*data1).jabatan<<endl;
	cout<<"Gaji    : "<<(*data1).gaji<<endl;
	cout<<endl;
	cout<<"Nama    : "<<(*data2).nama<<endl;
	cout<<"NIDN    : "<<(*data2).nidn<<endl;
	cout<<"Jabatan : "<<(*data2).jabatan<<endl;
	cout<<"Gaji    : "<<(*data2).gaji<<endl;
	cout<<endl;
	cout<<"Nama    : "<<(*data3).nama<<endl;
	cout<<"NIDN    : "<<(*data3).nidn<<endl;
	cout<<"Jabatan : "<<(*data3).jabatan<<endl;
	cout<<"Gaji    : "<<(*data3).gaji<<endl;
	cout<<endl;
}

void gaji(struct data_dosen *data) {
	cout<<"Nama           : "<<(*data).nama<<endl;
	cout<<"NIDN           : "<<(*data).nidn<<endl;
	cout<<"Jabatan        : "<<(*data).jabatan<<endl;
	cout<<"Gaji sebelumnya: "<<(*data).gaji<<endl;
	cout<<"diubah menjadi..."<<endl;
	cout<<"Masukkan nominal gaji: "<<ends; cin>>(*data).gaji;
}

int main(){
	data_dosen data1, data2, data3;
	input(&data1, &data2, &data3);
	
	do {
    	banner();
    	cout<<endl;
    	switch (pilihan) {
			case (1):
				tampilkan(&data1, &data2, &data3);
				break;
			case (2):
				while (true) {
					cout<<"Ubah Data Gaji (y/n)?: "; cin>>tampil;
					if (tampil == "y") {
						cout<<"1. "<<data1.nama<<endl;
						cout<<"2. "<<data2.nama<<endl;
						cout<<"3. "<<data3.nama<<endl;
 						cout<<"Data Gaji keberapa yang mau diubah (1/2/3)?: "; cin>>pilih;
						if (pilih == 1){
							gaji(&data1);
						} else if (pilih == 2) {
							gaji(&data2);
						} else if (pilih == 3) {
							gaji(&data3);
						} else {
							cout<<"data yang diinputkan tidak valid"<<endl;
						}
					} else {
						break;
					}
				}
				break;
			case (3):
				cout<<"Terima kasih telah menggunakan program saya"<<endl;
				break;
			default:
				cout<<"Menu yang anda pilih salah, Silahkan ulangi pilih Menu!"<<endl;
		}
	} while (pilihan != 3);
}
