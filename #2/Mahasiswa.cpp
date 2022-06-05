// file Mahasiswa.cpp 

#include <iostream>
 
using namespace std;

class Mahasiswa{ 
private :
	string nama;
	char jenisKelamin; 
	string alamat;
}; 

int main(){
	Mahasiswa mhs; 
	// input data
	mhs.nama = "Dennis Ritchie"; 
	mhs.jenisKelamin = 'L'; 
	mhs.alamat = "Sukoharjo";
	
	// tampil data
	cout << "nama mhs : " << mhs.nama << endl; 
	cout << "jenis kelamin mhs : " << mhs.jenisKelamin << endl; 
	cout << "alamat mhs : " << mhs.alamat << endl;
}
