#include<iostream>
using namespace std;

/*
Created on Mon Nov 30 2020

@author: Muhammad Azamy
@edited by: Azhar Rizky Zulma
*/

int i, j, Pil;
int setEl();
int partition(int arr[], int top, int bottom);		//Quick Sort Function
void input(int arr[], int size);					//Input Array Element
void showArray(int arr[], int size);				//Show Array Element
void InsertionSort(int arr[], int size);			//Insertion Sort Function
void SelectionSort(int arr[], int size);			//Selection Sort Function
void BubbleSort(int arr[], int size);				//Bubble Sort Function
void QuickSort(int arr[], int top, int bottom);		//Quick Sort Function
void merge(int arr[], int l, int m, int r);			//Merge Sort Function
void mergeSort(int arr[], int l, int r);			//Merge Sort Function

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
	cout<<"--(PILIH ALGORITMA SORTING)--"<<endl;
	cout<<"|   1. INSERTION SORT       |"<<endl;
	cout<<"|   2. SELECTION SORT       |"<<endl;
	cout<<"|   3. QUICK SORT           |"<<endl;
	cout<<"|   4. BUBBLE SORT          |"<<endl;
	cout<<"|   5. MERGE SORT           |"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"Masukan Pilihan (1-5): ";
	cin>> Pil; cout<<endl;	
	switch(Pil) {
		case 1 : InsertionSort(arr, el);	break;     //Success
		case 2 : SelectionSort(arr, el);	break;    //Success
		case 3 : QuickSort(arr, 0, el-1);	break;   //Success
		case 4 : BubbleSort(arr, el);		break;  //Success
		case 5 : mergeSort(arr, 0, el-1);	break; //Success
		default :cout<<"Salah Input. Input harus 1-5"<<endl;
	} showArray(arr, el);
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

void InsertionSort(int arr[], int size) {
	int key;
    for(j = 1; j < size; j++) {    // Start with 1 (not 0)
        key = arr[j];
        for(i = j - 1; (i >= 0) && (arr[i] > key); i--) {
        	arr[i+1] = arr[i];
        }
        arr[i+1] = key;    //Put key into its proper location
    } return;
}

void SelectionSort(int arr[], int size) {
      int first, temp;
      for (i= size - 1; i > 0; i--) {
           first = 0;				// initialize to subscript of first element
           for (j=1; j<=i; j++)	{	// locate smallest between positions 1 and i.
                 if (arr[j] > arr[first])
                 first = j;
          }
         temp = arr[first];			
         arr[first] = arr[i];
         arr[i] = temp;
     } return;
}

void BubbleSort(int arr[], int size) {
    int flag = 1;    // set flag to 1 to start first pass
    int temp;             // holding variable
    for(i = 1; (i <= size) && flag; i++) {
        flag = 0;
        for (j=0; j < (size -1); j++) {
            if (arr[j+1] < arr[j]) { 
                temp = arr[j];             // swap elements
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;               // indicates that a swap occurred.
            }
        }
    } return;   //nothing is returned
}

void QuickSort(int arr[], int top, int bottom) {
      // top = subscript of beginning of array
      // bottom = subscript of end of array
     
     int middle;
     if (top < bottom) {
          middle = partition(arr, top, bottom);
          QuickSort(arr, top, middle);   // sort first section
          QuickSort(arr, middle+1, bottom);    // sort second section
     } return;
}

int partition(int arr[], int top, int bottom) {
     int x = arr[top];
     int y = top - 1;
     int z = bottom + 1;
     int temp;
     do {
        do {
        	z--;
        } while (x < arr[z]);

        do {
        	y++;
        } while (x > arr[y]);

        if (y < z) { 
        	temp = arr[y];   
            arr[y] = arr[z];
            arr[z] = temp;
        }
     } while (y < z);    
     return z; // returns middle subscript 
}

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
 
    // Create temp arrays
    int L[n1], R[n2];
 
    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    // Merge the temp arrays back into arr[l..r]
 
    // Initial index of first subarray
    int i = 0;
 
    // Initial index of second subarray
    int j = 0;
 
    // Initial index of merged subarray
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        } k++;
    }
 
    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int arr[],int l,int r) {
    if(l>=r) {
        return;//returns recursively
    }
    int m = (l+r-1)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

void showArray(int arr[], int size) {
	cout<<"\nElement: ";
	for(int i=0;i<size;i++) {
		cout<<arr[i]<< "  " ;
	} cout<<endl;	
}
