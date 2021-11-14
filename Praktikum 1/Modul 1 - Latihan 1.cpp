#include <iostream>
#include <math.h>
using namespace std;
int main(void) {
	string namamakanan;
	int jumlahmakanan = 0;
	int hargamakanan = 0;
	int besardiskon = 0;
	const int ppn = 0.10;
	double harga = 0.0;
	cout<<"Masukkan Nama Makanan:"<<ends; getline(cin, namamakanan);
	cout<<"Masukkan Jumlah Makanan:"<<ends; cin>>jumlahmakanan;
	cout<<"Masukkan Harga Makanan:"<<ends; cin>>hargamakanan;
	cout<<"Masukkan Besar Diskon:"<<ends; cin>>besardiskon;
	cout<<endl;
	harga = jumlahmakanan*hargamakanan-(jumlahmakanan*hargamakanan*besardiskon*0.01);
	cout<<"Nama Makanan: "<<namamakanan<<endl;
	cout<<"Harga Total: "<<harga<<endl;
	cout<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"| No |  Judul    |    Jumlah    |"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"|  1 | Makanan   |"<<namamakanan<<"\t|"<<endl;
	cout<<"|  2 | Harga     |Rp."<<hargamakanan<<"\t|"<<endl;
	cout<<"|  3 | Diskon(%) |"<<besardiskon<<"%\t\t|"<<endl;
	cout<<"|  4 | Jumlah    |"<<jumlahmakanan<<" Porsi\t|"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"|       Total    |Rp."<<harga<<"\t|"<<endl;
	cout<<"---------------------------------"<<endl;
}
