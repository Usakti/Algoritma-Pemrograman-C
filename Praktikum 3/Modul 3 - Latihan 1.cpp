#include <iostream>
#include <math.h>
using namespace std;
int main(void) {
	int a, b, c;
	float x1, x2, D;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"| Program Mencari Akar Persamaan Kuadrat dan Determinan |"<<endl;
	cout<<"| Nama: Azhar Rizky Zulma             NIM: 065001900001 |"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"| Masukkan Nilai a = |"<<ends; cin>>a;
 	cout<<"| Masukkan Nilai b = |"<<ends; cin>>b;
 	cout<<"| Masukkan nilai c = |"<<ends; cin>>c;
 
 	D = pow (b,2)-(4*a*c);
 
 	if (a == 0) {
  		cout<<"| Bukan Merupakan Persamaan Kuadrat"<<endl;
 	} else if (D>0) {
  		x1=((-b)+(sqrt(D)))/(2*a);
  		x2=((-b)-sqrt(D))/(2*a);
  		cout<<"| persamaan kuadrat "<<a<<"x^2 + "<<b<<"x +"<<c<<endl;
  		cout<<endl;
  		cout<<"| Determinannya = "<<D<<endl;
  		cout<<"| Memiliki Akar Berbeda"<<endl;
  		cout<<"| Akar x1 = "<<x1<<endl;
  		cout<<"| Akar x2 = "<<x2<<endl;
 	} else if (D == 0){
  		x1=(-b)/(2*a);
  		x2=x1;
  		cout<<"| persamaan kuadrat "<<a<<"x^2 + ("<<b<<")x + "<<c<<endl;
  		cout<<endl;
  		cout<<"| Determinannya = "<<D<<endl;
  		cout<<"| Merupakan Akar Kembar"<<endl;
  		cout<<"| Akar = "<<x1<<endl;
  	} else {
  		cout<<"| persamaan kuadrat "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
  		cout<<endl;
  		cout<<"| Determinannya = "<<D<<endl;
	  	cout<<"| Merupakan Akar Imaginer"<<endl;
	  	cout<<"| Akar X1 = -"<<b<<"+ Akar "<<D<<"/ 2*"<<a<<endl;
  	  	cout<<"| Akar X2 = -"<<b<<"- Akar "<<D<<"/ 2*"<<a<<endl;
	  	}
 	return 0;
}
