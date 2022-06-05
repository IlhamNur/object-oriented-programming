#include <iostream>

using namespace std;

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

int main(){
	int i,totalsks;
		cout<<"------------------------------------------------------------------------------------"<<endl;
  		cout<<"|NO |  KODE   |\t\tMATAKULIAH\t       |SKS|\t      DOSEN\t      |"<<endl;
  		cout<<"------------------------------------------------------------------------------------"<<endl;
  		
  		for(i=0;i<7;i++) {
  			cout<<"\n| "<<i+1<<" | "<<krs[i].kode<<" |  "<<krs[i].mt_kuliah<<" | "<<krs[i].sks<<" | "<<krs[i].dosen<<"|";
  			cout<<"\n------------------------------------------------------------------------------------";
   			totalsks += krs[i].sks;
			}
			
  		cout<<"\n|        \tTotal SKS yang diambil\t       |"<<totalsks<<" |\t\t\t   |";
  		cout<<"\n------------------------------------------------------------------------------------";
}
