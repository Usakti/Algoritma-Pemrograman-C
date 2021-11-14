#include <iostream>
#include <conio.h>
using namespace std;

int i, panjang, cari, hasil, tengah;

int BinarySearch(int nilai[], int kiri, int kanan, int x){ 
    while (kiri <= kanan) {
        tengah = kiri + (kanan - kiri)/2;
        if (nilai[tengah] == x) {
            return tengah;
        } else if (nilai[tengah] < x) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }
	return -1;
}

int main() {
	cout<<"Input Indeks Max Array: "; cin>>panjang;
    cout<<endl;
    
    int nilai[panjang];
	
	cout<<"Input Array dari 1 hingga "<<panjang<<":"<<endl;
	for (i=0; i<panjang; i++){
        cin>>nilai[i];
    }
    cout<<endl;
    
    cout<<"\nMasukkan Nilai Indeks Yang Ingin Dicari: ";cin>>cari;
    cout<<endl;
    
	hasil = BinarySearch(nilai, 0, panjang-1, cari);
	
	if (hasil == -1){
		cout<<"Nilai "<<cari<<" tidak terdapat pada Indeks"<<endl;
	} else {
		cout<<"Nilai "<<cari<<" terdapat pada indeks ke "<<hasil<<endl;
	}
}
