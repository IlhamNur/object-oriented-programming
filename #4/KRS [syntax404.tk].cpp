#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int Login();
int SignIn();

struct {
char Nama[50]; 
char NIM[50]; 
char Jurusan[3];
char Kelas[3];
int Semester;
int Tahun;
char PA[50];
}data_mhs;

struct {
char kode[8];
char mt_kuliah[50]; 
int sks; 
char dosen[50];

}
krs[9]={
 {"KK-1113","Dasar Pemrograman            ",3,"Bryan Nurjayanti, S.Kom  "},
 {"KK-1110","Logika Algoritma             ",3,"Susandri, M.Kom          "},
 {"KK-1124","B.Inggris 1                  ",2,"Dewi Sari Wahyuni, SS    "},
 {"PK-1101","Pendidikan Pancasila         ",2,"Herman, M.Si             "},
 {"KB-1101","Pengantar Teknologi Informasi",2,"Hamdani, M.Kom           "},
 {"KK-1111","Managemen Umum               ",2,"Drs.Fahmi Oemar, MM      "},
 {"PK-1102","Pendidikan Agama             ",2,"Maimun, LC,MA            "},
 {"KK-1101","Kalkulus 1                   ",2,"Rini Yanti, S.Si         "},
 {"KK-1108","Fisika Dasar 1               ",3,"Firman Edigan, S.Si, M.Pd"}
};

char j,User[50],Pass[50];

int main()
{
  printf("\t\t    \xB2 SYSTEM KRS OFFLINE STMIK-AMIK-RIAU \xB2\n");
  printf("\t\t    --------------------------------------\n");
  printf("a.Login\nb.Sign In\n::");scanf("%c",&j);
  if(j=='a'||j=='A')
  Login();
   
  else if(j=='b'||j=='B')
  {
   SignIn();
   printf("\n\nLogin Now ? (Y / N) :"); cin>>j;
   if(j=='Y'||j=='y')
   Login();
   else
   printf("\n\nThank's For Joining Us In System KRS Offline STMIK-AMIK-RIAU\n");
  } 
  
  
  else
  {
  system("cls");
  main();
  }
getche();
return 0;
}
  
int SignIn()
{
  do{      
  system("cls");
  printf("\t     \xB2 Create Your Account KRS Offline STMIK AMIK RIAU \xB2\n");
  printf("\t     ---------------------------------------------------\n\n");
  printf("Masukkan Data Anda Dengan Benar dan Lengkap\n");
  printf("\nNama Lengkap          :"); cin>>data_mhs.Nama;
  printf("\nNIM / NPM             :"); cin>>data_mhs.NIM;
  printf("\nUsername              :"); cin>>User;
  printf("\nPassword              :"); cin>>Pass; 
  printf("\nJurusan (TI / MI)     :"); cin>>data_mhs.Jurusan;
  printf("\nKelas (R / NR / SM)   :"); cin>>data_mhs.Kelas;
  printf("\nSemester              :"); cin>>data_mhs.Semester;
  printf("\nTahun Akademis        :"); cin>>data_mhs.Tahun;
  printf("\nPenasehat Akademis    :"); cin>>data_mhs.PA;
  printf("\n\nIngin Merubah Data Yang Telah Dimasukkan ? (Y / N) :");
  cin>>j;
  }
while(j=='y'||j=='Y');
  system("cls");
  printf("\n\nCongratulation You're Registration Success, You're Account Now Activated !!");
}



  
int Login() 
{
  system("cls");
  printf("\n\n\n\nLOGIN NOW!");
  int i,y,totalsks;
  totalsks=0;
  char loginuser[50],loginpass[50];
  printf("\n\nUSER           : "); cin>>loginuser;
  printf("\nPASSWORD       : "); cin>>loginpass;
  if(strcmp(loginuser,User)==0&&strcmp(loginpass,Pass)==0)
  {
  printf("\nCongratulatios You're Success Login\n");
  printf("Press (Y) to Print Your KRS !\n");
  scanf("%d",&y);
  system("cls");
  printf("\t\t\tKARTU RENCANA STUDI (KRS)\n\n");
  printf("\nNama Mahasiswa   : %s", data_mhs.Nama);
  printf("\nNIM / NPM        : %s", data_mhs.NIM);
  printf("\nJenis Pendidikan : S1 / SM");
  printf("\nTahun Akademis   : 2013/2014");
  printf("\nSemester         : Ganjil 2013/2014");
  printf("\nJurusan          : Teknik Informatika\n\n");
  printf("-------------------------------------------------------------------------------\n");
  printf("|NO |  KODE   |\t\tMATAKULIAH\t       |SKS|\t      DOSEN\t      |");
  cout<<"\n-------------------------------------------------------------------------------\n";
  for(i=0;i<9;i++)
  {
  cout<<"\n| "<<i+1<<" | "<<krs[i].kode<<" |  "<<krs[i].mt_kuliah<<" | "<<krs[i].sks<<" | "<<krs[i].dosen<<"|";
  cout<<"\n-------------------------------------------------------------------------------";
  
   totalsks+=krs[i].sks;
  }
  cout<<"\n|        \tTotal SKS yang diambil\t       |"<<totalsks<<" |\t\t\t      |";
  cout<<"\n-------------------------------------------------------------------------------";
  cout<<"\n\n\nDisetujui Oleh\n";
  cout<<"Penasehat Akademis,\t\t\t\t\tMahasiswa Ybs,\n\n\n\n\n\n\n";
  cout<<"( "<<data_mhs.PA<<" )\t\t\t\t( "<<data_mhs.Nama<<" )";
  }
  
  else
  {
   printf("\nUsername / Password is Incorrect, or You're Account in Not Activated.\n");
   printf("a.Login Again\nb.Registration Now\n ::");
   cin>>j;
   if(j=='a'||j=='A')
   Login();
   else if(j=='b'||j=='B')
   SignIn();
   else
   printf("Thank's For Use This Program");
  }
} 
  
  



