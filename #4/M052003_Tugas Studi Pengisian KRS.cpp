#include <string.h>
#include <iostream>

using namespace std;

int Login();
int SignIn();
char j, User[50], Pass[50];

class Mahasiswa {
	public:
		char Nama[50]; 
		char NIM[50]; 
		char Prodi[50];
		char Kelas[3];
		int Semester;
		int Tahun;	
		char PA[50];
}data_mhs;

class Matkul {
	public:		
		char kode[11];
		char mt_kuliah[50]; 
		int sks; 
		char dosen[50];
}
krs[7]= {
 	{"0953122016","Matematika Diskrit II          ",2,"Heri Prasetyo            "},
 	{"0953123017","Pemrograman Berorientasi Objek ",3,"Ardhi Wijayanto          "},
 	{"0953124108","Basis Data                     ",4,"Dewi Wisnu Wardani       "},
 	{"0953123019","Sistem Operasi                 ",3,"Haryono Setiadi          "},
 	{"0953112003","Pendidikan Pancasila           ",2,"Muhammad Hendri Nurhadi  "},
 	{"0953123021","Metode Numerik                 ",3,"Umi Salamah              "},
 	{"0953123022","Desain & Analisi Algoritma     ",3,"Wiranto                  "},
};

int main() {
	cout<<"\t    \xB2 SIAKAD UNS \xB2"<<endl;
  	cout<<"--------------------------------------"<<endl;
  	cout<<"a.Login\nb.Sign In\n::"<<endl; cin>>j;
  	
  	if(j=='a'||j=='A')
  		Login();
   	else if(j=='b'||j=='B') {
   		SignIn();
   		cout<<"\n\nLogin Sekarang ? (Y / N) :"; cin>>j;
   		if(j=='Y'||j=='y')
   			Login();
   		else
   			cout<<"\n\nTerima kasih sudah menggunakan Siakad UNS"<<endl;
	} 
  	else {
  		system("cls");
  		main();
	}

return 0;
}
  
int SignIn() {
	do {      
  		system("cls");
  		cout<<"\t\xB2 Regristasi Akun Siakad UNS \xB2"<<endl;
  		cout<<"---------------------------------------------------"<<endl;
  		cout<<"Masukkan Data Anda Dengan Benar dan Lengkap"<<endl;
  		cout<<"Nama Lengkap          : "; cin.ignore(); cin.getline(data_mhs.Nama, 50); 
  		cout<<"NIM                   : "; cin>>data_mhs.NIM;
  		cout<<"Username              : "; cin>>User;
  		cout<<"Password              : "; cin>>Pass; 
  		cout<<"Program Studi         : "; cin.ignore(); cin.getline(data_mhs.Prodi, 50); 
  		cout<<"Kelas (A / B / C)     : "; cin>>data_mhs.Kelas;
  		cout<<"Semester              : "; cin>>data_mhs.Semester;
  		cout<<"Tahun Masuk           : "; cin>>data_mhs.Tahun; 
  		cout<<"Penasehat Akademis    : "; cin.ignore(); cin.getline(data_mhs.PA, 50);
  		cout<<"\nIngin Merubah Data Yang Telah Dimasukkan ? (Y / N) :"; cin>>j;
	}
	
	while(j=='y'||j=='Y');
		system("cls");
  		cout<<"Selamat regristrasi telah berhasil. Akun Anda telah aktif!!"<<endl;
}
  
int Login() {
  	system("cls");
  	cout<<"LOGIN SEKARANG!"<<endl;
  	
  	int i,y,totalsks;
  	totalsks = 0;
  	char loginuser[50], loginpass[50];
  	
  	cout<<"USER           : "; cin>>loginuser;
  	cout<<"PASSWORD       : "; cin>>loginpass;
  	
  	if(strcmp(loginuser,User)==0&&strcmp(loginpass,Pass)==0) {
  		cout<<"Selamat Anda berhasil Login"<<endl;
  		cout<<"Tekan (Y) untuk mencetak KRS !"<<endl;
  		cin>>y;
  		system("cls");
  		cout<<"\t\t\tKARTU RENCANA STUDI (KRS)\n"<<endl;
  		cout<<"Nama Mahasiswa   : "<<data_mhs.Nama<<endl;
  		cout<<"NIM              : "<<data_mhs.NIM<<endl;
  		cout<<"Program Studi    : "<<data_mhs.Prodi<<endl;
  		cout<<"Tahun Masuk      : "<<data_mhs.Tahun<<endl;
  		cout<<"Semester         : "<<data_mhs.Semester<<endl;
  		cout<<"------------------------------------------------------------------------------------"<<endl;
  		cout<<"|NO |  KODE   |\t\tMATAKULIAH\t       |SKS|\t      DOSEN\t      |"<<endl;
  		cout<<"------------------------------------------------------------------------------------"<<endl;
  		
  		for(i=0;i<7;i++) {
  			cout<<"\n| "<<i+1<<" | "<<krs[i].kode<<" |  "<<krs[i].mt_kuliah<<" | "<<krs[i].sks<<" | "<<krs[i].dosen<<"|";
  			cout<<"\n-------------------------------------------------------------------------------";
   			totalsks += krs[i].sks;
			}
			
  		cout<<"\n|        \tTotal SKS yang diambil\t       |"<<totalsks<<" |\t\t\t      |";
  		cout<<"\n-----------------------------------------------------------------------------------";
  		cout<<"\n\n\nDisetujui Oleh\n";
  		cout<<"Penasehat Akademis,\nMahasiswa Ybs,\n\n\n\n\n\n\n";
  		cout<<"( "<<data_mhs.PA<<" )\\n( "<<data_mhs.Nama<<" )"<<endl;
	}
  
  	else {
   		cout<<"Username / Password salah, atau Akun anda belum terdaftar."<<endl<<endl;
   		
   		main();
	}
} 
  
  



