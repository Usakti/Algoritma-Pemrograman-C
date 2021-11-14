#include <iostream>
#include <conio.h>
using namespace std;

int nilai[1000];
int index[1000];
int i, a, bil, total=0;
bool cari;
void banner() {
	cout<<"-----------------------------------------------"<<endl;
	cout<<"|         Program Searching Sequential        |"<<endl;
	cout<<"| Nama: Azhar Rizky Zulma   NIM: 065001900001 |"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout <<endl;
}
void input() {
	cout << "Masukkan panjang array: ";cin >> a;
    cout <<endl;
	
	for (i=0;i<a;i++){
        cout << "Masukkan Nilai-nilai Array: ";cin >> nilai[i];
    }
    
    cout <<"\nMasukkan angka yang dicari: ";cin >> bil;
}
void mencari() {
	for (i=0;i<a;i++){
        if(nilai[i]==bil){
            cari=true;
            index[total]=i;
            total++;
        }
    }
	if (cari){
        for(i=0;i<total;i++) {
            cout <<"\nTerdapat pada index: "<<index[i]<<" ";
        }
    } else {
        cout << "Bilangan "<<bil<<" tidak ditemukan";
    }
    getch();
}
int main() {
	banner();
    input();
    mencari();
}
