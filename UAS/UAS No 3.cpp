#include <iostream> 
#include <fstream> //ofstream, ifstream, fstream
#include <iomanip>

using namespace std;

struct Nilai {
	int x, jml, i;
}N;

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
	cout<<"1. Proses Nilai"<<endl;
	cout<<"2. Exit"<<endl;
	cout<<"Pilih Opsi: "; cin>>pilihan;
	switch(pilihan) {
		case 1:
			show();
			break;
		case 2:
			cout<<"Keluar dari program";
			break;
		default:
			break;
			operation();
	}
}

void inputPrima(int i) {
	struct Nilai data;
	ofstream dataN;
	// ios::out = default, operasi output;
	// ios::app = menuliskan pada akhir baris;
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus;
	dataN.open("prima.txt", ios::app);
	data.x = i;
	dataN<<setiosflags(ios::left)<<setw(25)<<data.x<<endl;
	dataN.close();
	cout<<"Ofstream selesai!"<<endl;
	operation();
	return;
}

void inputKelTiga(int i) {
	struct Nilai data;
	ofstream dataN;
	// ios::out = default, operasi output;
	// ios::app = menuliskan pada akhir baris;
	// ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus;
	dataN.open("three.txt", ios::app);
	data.x = i;
	dataN<<setiosflags(ios::left)<<setw(25)<<data.x<<endl;
	dataN.close();
	cout<<"Ofstream selesai!"<<endl;
	operation();
	return;
}

void show() {
	struct Nilai data2;
	data2.jml = 0;
	string buffer;
	ifstream Ndata;
	// ios::in default
	// ios::ate mulai dari akhir file
	// ios::binary
	Ndata.open("data.txt");
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<setiosflags(ios::left)<<setw(5)<<"No."<<setw(25)<<"Nilai"<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;
	while(true) {
		getline(Ndata, buffer);
		if(Ndata.eof()) break;
		cout<<setiosflags(ios::left)<<setw(5)<<data2.jml+1<<setw(25)<<buffer<<endl;
		int i;
		Ndata>>i;
		if (i<=Ndata.eof()){
			int bil=0;
			for(int j=1;j<=i;j++){
				if(i%j==0){
					bil=bil+1;
				}
			}
			if (bil==2)
				inputPrima(i);
		}
		data2.jml++;
	}
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"\nJumlah Nilai: "<<data2.jml<<endl;
	Ndata.close();
	cout<<"Ifstream selesai"<<endl;
	operation();
}
