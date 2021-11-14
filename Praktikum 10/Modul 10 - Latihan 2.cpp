#include<iostream>
using namespace std;

/*
Created on Mon Nov 30 2020

@author: Muhammad Azamy
@edited by: Azhar Rizky Zulma
*/

int i, j;
int setEl();
void input(int arr[], int size);					//Input Array Element
void showArray(int arr[], int size);				//Show Array Element
void BubbleSort(int arr[], int size);				//Bubble Sort Function

void banner() {
	cout<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"| Program Fungsi Sorting    |"<<endl;
	cout<<"| Nama : Azhar Rizky Zulma  |"<<endl;
	cout<<"| NIM  : 065001900001       |"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<endl;
}

int main() {
	banner();
	int el = setEl();
	int arr[el];
	input(arr, el);
	BubbleSort(arr, el);
	showArray(arr, el);
}

int setEl() {
	//number of element
	int size;
	cout<<"Set Element Length: ";cin>>size;
	return size;
}

void input(int arr[], int size) {
	//Array Input
	for(int i=0;i<size;i++) {
		cout<<"Elemen ke - "<<i<<": ";
		cin>>arr[i];
	}
	//Unsorted Element
	cout<<"\nArray Element: ";
	for(int i=0;i<size;i++) {
		cout<<arr[i]<< "  " ;
	} cout<<endl;
}

void BubbleSort(int arr[], int size) {
	int flag = 1;                            // set flag to 1 to start first pass
    int temp;                                // holding variable
	for(i = 0; (i <= size) && flag; i++) {
		flag = 0;
       	for(j = i; j <= (size -1); j++) {
            if(arr[i] < arr[j]) {
                temp = arr[j];               // swap elements
                arr[j] = arr[i];
            	arr[i] = temp;
            	flag = 1;                    // indicates that a swap occurred.
			}
		}
	} return;                                //nothing is returned
}

void showArray(int arr[], int size) {
	cout<<"\nElement: ";
	for(int i=0; i<size ;i++) {
		cout<<arr[i]<< "  " ;
	} cout<<endl;	
}
