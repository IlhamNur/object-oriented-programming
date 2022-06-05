// Ilham Nur Romdoni + M0520038

// Pada tugas 1 saya mengirimkan 5 contoh class. Saya mengambil contoh 5 untuk digunakan pada tugas 2

#include<iostream>

using namespace std;

class Mahasiswa { // Mendeklarasikan class "Mahasiswa"
    public: // Akses specifier. public berarti, semua anggota dapat diakses bebas
    string Nama; // Atribut atau data member dengan tipe data string
    double IPK; // Atribut atau data member dengan tipe data double
    
    void printNama() { // Method/behaviour yang didefinisikan untuk mengakses nama
	cout << "Nama : " << Nama << endl;
    }

    void printIPK() { // Method/behaviour yang didefinisikan untuk mengakses IPK
	cout << "IPK : " << IPK << endl;
    }
}; // Akhir dari deklarasi class

int main (){ // Main method
    Mahasiswa data1; // Mendefinisikan object "data1"
    data1.Nama = "Ilham"; // Mengakses atribut "Nama" dan mendeklarasikan isi atribut "Nama" pada object "data1"
    data1.IPK = 3.99; // Mengakses atribut "IPK" dan mendeklarasikan isi atribut "IPK" pada object "data1"
    
    data1.printNama(); // Memanggil method "printNama" untuk object "data1"
    data1.printIPK(); // Memanggil method "printIPK" untuk object "data1"
    
    return 0;
}
