#include <iostream>
#include <string>

using namespace std;

int main(){
    int idKaryawan,umur;
    int outKategori,outKategoriA,outKategoriB,outKategoriC;
    string nama,alamat,jenisKelamin,posisiKaryawan,tglLahir,pangkat;
    char nomorTelp[20];
    char posisi;
    
    cout<< "=========Selamat Datang di Filkom Tour & Travel==========\n";
    cout<< "Silahkan Masukkan Data Karyawan Baru FILKOM Tour & Travel\n";
    cout<< "Masukkan ID Karyawan             : "; cin>>idKaryawan;
    cout<< "Masukkan Nama Karyawan           : "; getline(cin>>ws,nama);
    cout<< "Masukkan Tanggal Lahir           : "; getline(cin>>ws,tglLahir);
    cout<< "Masukkan Umur Karyawan           : "; cin>>umur;
    cout<< "Masukkan Jenis Kelamin Karyawan  : "; getline(cin>>ws, jenisKelamin);
    cout<< "Masukkan Alamat Karyawan         : "; getline(cin>>ws, alamat);
    cout<< "Masukkan Nomor Telepon Karyawan  : "; cin>>nomorTelp;
    cout<< "Daftar Posisi Karyawan           : (a) admin / (b) supir travel / (c) supir rentcar \n";
    cout<< "Masukkan Posisi karyawan         : "; cin>>posisi;
    pangkat = (posisi == 'a') ? "admin" : (posisi == 'b') ? "Supir travel" : (posisi == 'c') ? "supir rentcar" : "Daftar Posisi Karyawan Yang Anda Masukkan Salah Silahkan Coba Lagi";
    outKategoriA = (posisi == 'a') ? 3000000 : 0;
    outKategoriB = (posisi == 'b') ? 2500000 : 0;
    outKategoriC = (posisi == 'c') ? 2000000 : 0;
    outKategori = (outKategoriA == 3000000) ? outKategoriA : (outKategoriB == 2500000) ? outKategoriB : (outKategoriC == 2000000) ? outKategoriC : 0;
    cout<<" "<<endl;
    cout<< "=========Selamat Datang di Filkom Tour & Travel==========\n";
    cout<< "Halo Terima kasih sudah datang ke kantor\n";
    cout<< "ID KARYAWAN\n";
    cout<< " "<<endl;
    cout<< "ID Karyawan                      : "<< idKaryawan<<endl;
    cout<< "Nama Karyawan                    : "<< nama<<endl;
    cout<< "Tanggal Lahir                    : "<< tglLahir<<endl;
    cout<< "Umur Karyawan                    : "<< umur<<endl;
    cout<< "Jenis Kelamin Karyawan           : "<< jenisKelamin<<endl;
    cout<< "Alamat Karyawan                  : "<< alamat<<endl;
    cout<< "Nomor telepon Karyawan           : "<< nomorTelp<<endl;
    cout<< "Posisi Karyawan                  : "<< pangkat<<endl;
    cout<< "Gaji Karyawan                    : "<<"Rp. "<<outKategori<<",-"<<endl;


return 0;
}