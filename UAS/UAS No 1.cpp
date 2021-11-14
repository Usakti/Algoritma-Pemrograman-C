#include <iostream>
#include <conio.h>
using namespace std;

int i, cari, hasil;

int CekIndex(int nilai[], int panjang, int x){
	for (i = 0; i < panjang; i++) {
  		if (nilai[i] == x) {
  			return i;
   			break;
 		}
	}
	return -1;
}

int main() {
	int t = 4;
    int nilai[t];
	
	cout<<"Input Array dari 1 hingga 4:"<<endl;
	for (i=0; i<t; i++){
        cin>>nilai[i];
    }
    cout<<endl;
    
    cout<<"\nMasukkan Nilai Indeks Yang Ingin Dicari: ";cin>>cari;
    cout<<endl;
    
	hasil = CekIndex(nilai, t, cari);
	
	if (hasil == -1){
		cout<<"Nilai "<<cari<<" tidak terdapat pada Indeks"<<endl;
	} else {
		cout<<"Nilai "<<cari<<" terdapat pada indeks ke "<<hasil<<endl;
	}
}
