#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
	string noPlat, merk, warna,jenis, kondisi, bbm;
	int tahun, kilometer, harga, outHargaA, outHargaB, outHargaC;
	char pilihJenis;
	
	cout<<"SELAMAT DATANG DI FILKOM RENT CAR"<<endl;
	cout<<"Masukkan Data Mobil Yang Akan Ditambahkan"<<endl;
	cout<<"Masukkan Nomor Plat Kendaraan : ";
	getline(cin, noPlat);
	cout<<"Masukkan Merk Mobil Yang Ditambahkan : ";
	getline(cin, merk);
	cout<<"Masukkan Warna Mobil Sebagai Keterangan : ";
	getline(cin, warna);
	cout<<"Masukkan Tahun Rilis Kendaraan : ";
	cin>> tahun;
	cout<<"Kilometer Terakhir Kendaraan : ";
	cin>> kilometer;
	cout<<"Daftar Jenis Mobil Yang Tersedia : (a) Sedan / (b) SUV / (c) Minibus" <<endl;
	cout<<"Pilih Jenis Mobil Yang Akan Ditambahkan : ";
	cin>>pilihJenis;
	jenis = (pilihJenis == 'a') ? "Sedan" : (pilihJenis == 'b') ? "SUV" : (pilihJenis == 'c') ? "Minibus" : "Daftar Jenis Mobil Yang Anda Masukkan Salah";
	outHargaA = ( pilihJenis== 'a') ? 2500000 : 0;
	outHargaB = (pilihJenis == 'b') ? 3000000 : 0;
	outHargaC = (pilihJenis == 'c') ? 5000000 : 0;
	harga = (outHargaA == 2500000) ? outHargaA : (outHargaB == 3000000) ? outHargaB : (outHargaC == 5000000) ? outHargaC : 0;
	cout<<endl;
	cout<<"======================FILKOM RENT CAR======================"<<endl;
	cout<<"Nomor Plat Mobil           : "<<noPlat<<endl;
	cout<<"Merk Mobil                 : "<<merk<<endl;
	cout<<"Warna Mobil                : "<<warna<<endl;
	cout<<"Tahun Rilis Mobil          : "<<tahun<<endl;
	cout<<"Kilometer Terakhir         : "<<kilometer << " KM" <<endl;
	cout<<"Jenis Mobil                : "<<jenis<<endl;
	cout<<"Harga Sewa Mobil           : Rp."<<harga<<endl;
	cout<<" "<<endl;
	cout<<"       ___     ______"<<endl;
	cout<<"      ___  ___//_||_\\___"<<endl;
	cout<<"          |      |     ()|"<<endl;
	cout<<"----------  (o)------(o) ----------"<<endl;
	
	return 0;
	 
	
}
