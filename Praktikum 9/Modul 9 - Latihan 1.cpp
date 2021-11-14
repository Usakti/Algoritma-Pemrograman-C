#include <bits/stdc++.h>
using namespace std;

int i, j, searchel;

int binarySearch(int arr[], int l, int r, int x) {
	if (r >= l) {
		int mid = l + (r - l)/2;
		if (arr[mid] == x) {
			return mid;
		}
		else if (arr[mid] > x) {
			return binarySearch(arr, l, mid - 1, x);
		}
		else {
			return binarySearch(arr, mid + 1, r, x);
		}
	}
	return -1;
}

void showArray(int arr[], int size) {
	int temp = 0;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"\nElement: ";
	for(int i=0; i<size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for (int j=0; j<size-1; j++) {
		if (arr[j] > arr[j + 1]) {
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			
			j = -1;
		}
	}
	
	cout<<"\nSorted element: ";
	for(int i=0; i<size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int setEl() {
	int size;
	cout<<"Set panjang element: ";cin>>size;
	return size;
}

void input(int arr[], int size) {
	cout<<"Input element: "<<endl;
	for(int i=0; i<size; i++) {
		cin>>arr[i];
	}
}

int output(int arr[], int size) {
	cout<<"\nInput element yang dicari: "; cin>>searchel;
	cout<<endl;
	
	int result = binarySearch(arr, 0, size-1, searchel);
	
	if (result == -1){
		cout<<"Nilai "<<searchel<<" tidak terdapat pada Index"<<endl;
	} else {
		cout<<"Nilai "<<searchel<<" terdapat pada index ke "<<result<<endl;
	}
}

int main() {
	int el = setEl();
	int arr[el];
	input(arr, el);
	showArray(arr, el);
	output(arr, el);
	return 0;
}
