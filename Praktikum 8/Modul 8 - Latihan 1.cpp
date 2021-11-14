#include <iostream>
#include <conio.h>
using namespace std;
int x, y, z;
void banner() {
	cout<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"| Program Fungsi Rekursif |"<<endl;
	cout<<"| Nama: Azhar Rizky Zulma |"<<endl;
	cout<<"| NIM: NIM: 065001900001  |"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
}

bakteri(int x, int y) {
	if (y == 0) {
		return x;
	} else {
		return 2*bakteri(x, (y-1));
	}
}

int main() {
	banner();
	cout<<"Masukkan Bakteri : "; cin>>x;
	cout<<"Masukkan Jam     : "; cin>>y;
	z =	bakteri(x, y);
	cout<<"Jumlah total bakteri selama "<<y<<" jam adalah "<<z<<endl;
}
