#include  <iostream>
#include <string>
using namespace std;

char abjad, abjad2;
float a, b, c;
float nilai_akhir;
float *ipk;

float bobot, bobot2;
float total_nilai, total_nilai2;
float total_nilai_semua, total_sks;

char perhitungan1(int nilai1=50) {
	if (nilai1>80 && nilai1<=100) {
		abjad='A';
	} else if (nilai1>=70 && nilai1<=80) {
		abjad='B';
	} else {
		abjad='C';
	}
	cout<<"Nilai Pertama: "<<abjad<<endl;
}

char perhitungan2(int nilai2=50) {
	if (nilai2>80 && nilai2<=100) {
		abjad2='A';
	} else if (nilai2>=70 && nilai2<=80) {
		abjad2='B';
	} else {
		abjad2='C';
	}
	cout<<"Nilai Kedua: "<<abjad2<<endl<<endl;
}

char perhitungan_bobot(char nilai='z') {
	if (abjad=='A') {
		bobot=4;
	} else if (abjad=='B') {
		bobot=3;
	} else {
		bobot=2;
	}
}

float perhitungan_bobot2(char nilai2='z') {
	if (abjad2=='A') {
		bobot2=4;
	} else if (abjad2=='B') {
		bobot2=3;
	} else {
		bobot2=2;
	}
}

float perhitungan_ipk(float bobot=0, float bobot2=0, float sks1=4, float sks2=2) {
	total_nilai=bobot*sks1;
	total_nilai2=bobot2*sks2;
	total_nilai_semua=total_nilai+total_nilai2;
	cout<<"Total Nilaimu: "<<total_nilai_semua<<endl;
	total_sks=sks1+sks2;
	cout<<"Total SKSmu: "<<total_sks<<endl<<endl;
	nilai_akhir=total_nilai_semua/total_sks;
	ipk = &nilai_akhir;
}

int input(){
	cout<<"Azhar Rizky Zulma - 065001900001 Algoritma & Pemrograman"<<endl<<endl;
	cout<<"Masukkan Nilai Matkul 1: "<<ends; cin>>a;
	cout<<"Masukkan Nilai Matkul 2: "<<ends; cin>>b;
	cout<<endl;
}

int main(){
	input();
	perhitungan1();
	perhitungan2();
	perhitungan1(a);
	perhitungan2(b);
	perhitungan_bobot(abjad);
	perhitungan_bobot2(abjad2);
	perhitungan_ipk(bobot, bobot2);
	cout<<"IPK mu: "<<*ipk<<endl;
	cout<<"Alamat Memori IPK mu: "<<ipk;
	return 0;
}
