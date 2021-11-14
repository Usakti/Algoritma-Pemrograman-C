#include <iostream> 
#include <fstream> //ofstream, ifstream, fstream
#include <iomanip>

using namespace std;

struct Mahasiswa {
	string nama, NIM;
	float IPK;
	int jml;
}MHS;

void operation(); //Opsi Switch Case
void input(); //Input data into data.txt
void show(); //Output data from data.txt

int main() {
	operation();
	return 0;
}

void operation() {
	int pilihan;
	cout<<" "<<endl;
	cout<<"-------------------- PROGRAM FILE HANDLING PADA C++ --------------------"<<endl;
	cout<<" "<<endl;
	cout<<"1. Input Mahasiswa"<<endl;
	cout<<"2. Show Mahasiswa"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Pilih Opsi: "; cin>>pilihan;
	switch(pilihan) {
		case 1:
			input();
			break;
		case 2:
			show();
			break;
		case 3:
			cout<<"Keluar dari program";
			break;
		default:
			break;
			operation();
	}
}

void input() {
	struct Mahasiswa data;
	ofstream dataMHS;
	// ios::out = default, operasi output;
	// ios::app = menuliskan pada akhir baris;
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus;
	dataMHS.open("data.txt", ios::app);
	cout<<"Input Mahasiswa"<<endl;
	cout<<"Nama Mahasiswa: ";
	cin.ignore(1);
	getline(cin, data.nama);
	cout<<"NIM Mahasiswa: ";
	cin>>data.NIM;
	cout<<"IPK Mahasiswa: ";
	cin>>data.IPK;
	dataMHS<<setiosflags(ios::left)<<setw(25)<<data.nama<<setw(25)<<data.NIM<<setw(5)<<data.IPK<<endl;
	dataMHS.close();
	cout<<"Ofstream selesai!"<<endl;
	operation();
}

void show() {
	struct Mahasiswa data2;
	data2.jml = 0;
	string buffer;
	ifstream MHSdata;
	// ios::in default
	// ios::ate mulai dari akhir file
	// ios::binary
	MHSdata.open("data.txt");
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<setiosflags(ios::left)<<setw(5)<<"No."<<setw(25)<<"Nama"<<setw(25)<<"NIM"<<setw(5)<<"IPK"<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;
	while(true) {
		getline(MHSdata, buffer);
		if(MHSdata.eof()) break;
		cout<<setiosflags(ios::left)<<setw(5)<<data2.jml+1<<setw(25)<<buffer<<endl;
		data2.jml++;
	}
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"\nJumlah Mahasiswa: "<<data2.jml<<endl;
	MHSdata.close();
	cout<<"Ifstream selesai"<<endl;
	operation();
}
