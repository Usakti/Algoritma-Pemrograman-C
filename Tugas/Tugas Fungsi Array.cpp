#include <iostream>
using namespace std;

int nilai[9999];
int x, y, bil;
void banner() {
	cout<<"-----------------------------------------------"<<endl;
	cout<<"| Nama: Azhar Rizky Zulma   NIM: 065001900001 |"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout <<endl;
}

void cek(int y, int x) {
	cout<<"Hasil Cek Bilangan Array:"<<endl;
	for (x=0; x<y; x++){
        if(nilai[x]%2==0){
            cout<<"Genap"<<endl;
        } else {
        	cout<<"Ganjil"<<endl;
		}
	}
}

int main() {
	banner();
	
	cout<<"Input Panjang Array: "; cin>>y;
    cout<<endl;
	
	for (x=0; x<y; x++){
        cout<<"Input Nilai-Nilai Array: "; cin>>nilai[x];
    }
    cout<<endl;
    
    cek(y, x);
}
