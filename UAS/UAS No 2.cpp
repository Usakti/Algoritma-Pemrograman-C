#include <iostream>
using namespace std;
int main()
{
    int i,j,n,t;
    n = 4;
    int nilai[n];
	for(i=1; i<=n; i++) {
       cout<<"\nInput data ke-"<<i<<": ";cin>>nilai[i];
	}
	for(i=1; i<=n; i++){
        for(j=i; j<=n; j++){
            if(nilai[i] < nilai[j]){
                t = nilai[j];
            	nilai[j] = nilai[i];
                nilai[i] = t;
            }
		}
	}
	cout<<"Element: ";
	for(i=1;i<=n;i++){
       cout<<" "<<nilai[i];
	}
}
