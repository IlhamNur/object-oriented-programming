#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

using namespace std;

class mahasiswa {
protected:
            char dumb[100],less[100], nama[50], nim[50], alamat[100], fakultas[20], prodi[20], semester[20], dosen[50],no_sandi[20];
            int i, tahun,jen;
            struct mhs
            {
                        char more[100], ex[100],komat[50], namat[100], kel[8], nm_dos[50];
            float ip;
    		int nilsks,kredit, nip, kredit_in, kredit_out, kredit_up;
            }
            data[10];

            typedef mhs mhsArr[50];
            mhsArr x;
public:
            void gotoxy(int x, int y)
            {
                        HANDLE hConsoleOutput;
                        COORD dwCursorPosition;

                        cout.flush();
                        dwCursorPosition.X = x;
                        dwCursorPosition.Y = y;
                        hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
                        SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
            }

            void menu_utama()
            {
                        system("cls");
                        gotoxy(27,0);cout<<"=========================="<<endl;
                        gotoxy(27,1);cout<<"||      MENU UTAMA      ||"<<endl;
                        gotoxy(27,2);cout<<"=========================="<<endl;
                        gotoxy(27,3);cout<<"||     1. INPUT KRS     ||"<<endl;
                        gotoxy(27,4);cout<<"||     2. PRINT KRS     ||"<<endl;
                        gotoxy(27,5);cout<<"||     3. KELUAR         ||"<<endl;
                        gotoxy(27,6);cout<<"=========================="<<endl;
            }

//			input data mahasiswa
            void data_mahasiswa()
            {
                        system("cls");
                        gotoxy(11,1);cout<<"D E P A R T E M E N   P E N I D I K A N   N A S I O N A L"<<endl;
                        gotoxy(16,2);cout<<"U N I V E R S I T A S   S E B E L A S   M A R E T"<<endl;
                        gotoxy(1,3);cout<<"=============================================================================="<<endl;
                        gotoxy(1,3);cout<<""<<endl;
                        gotoxy(27,4);cout<<"KARTU RENCANA STUDI (KRS)"<<endl;
                        cout<<endl;
                        gotoxy(1,6);cout<<"Nama     : "; cin.getline(nama,50); cin.getline(less,100);
                        gotoxy(1,8);cout<<"NIM      : "; cin.getline(nim,50);
                        gotoxy(1,9);cout<<"Alamat   : "; cin.getline(alamat,100);
                        gotoxy(1,10);cout<<"Fakultas : "; cin.getline(fakultas,20);
                        gotoxy(42,6);cout<<"Program Studi : "; cin.getline(prodi,20);
                        gotoxy(42,7);cout<<"Jenjang       : Sarjana-";cin>>jen;
                        try {
                        gotoxy(42,8);cout<<"Th. Akademik  : "; cin>>tahun;
                        }
                        catch(int tahun)
                        {
                                    cout<<"INPUT ANGKA!!!"<<endl;
                        }
                        gotoxy(63,8);cout<<"/ "<<(tahun+1);
                        gotoxy(42,9);cout<<"Semester      : "; cin.getline(semester,20);cin.getline(dumb,100);
                        gotoxy(42,10);cout<<"Dosen P.A.    : "; cin.getline(dosen,50);
                        gotoxy(42,11);cout<<"No.Sandi Dosen: "; cin.getline(no_sandi,20);
            }

//cetak data mahasiswa
            void cetak_data_mahasiswa()
            {
                        system("cls");
                        gotoxy(12,1);cout<<"D E P A R T E M E N   P E N I D I K A N   N A S I O N A L"<<endl;
                        gotoxy(18,2);cout<<"U N I V E R S I T A S   S E B E L A S   M A R E T"<<endl;
                        gotoxy(1,3);cout<<"================================================================================="<<endl;
                        gotoxy(30,4);cout<<"KARTU RENCANA STUDI"<<endl;
                        cout<<endl;
                        gotoxy(1,6) ;cout<<"Nama           : "<<(nama,less)<<endl;
                        gotoxy(1,8) ;cout<<"NIM            : "<<nim<<endl;
                        gotoxy(1,9) ;cout<<"Alamat         : "<<alamat<<endl;
                        gotoxy(1,10);cout<<"Fakultas       : "<<fakultas<<endl;
                        gotoxy(42,6);cout<<"Program Studi  : "<<prodi<<endl;
                        gotoxy(42,7);cout<<"Jenjang        : Sarjana"<<jen<<endl;
                        gotoxy(42,8);cout<<"Th. Akademik   : "<<tahun<<" / "<<(tahun+1)<<endl;
                        gotoxy(42,9);cout<<"Semester       : "<<(semester,dumb)<<endl;
                        gotoxy(42,10);cout<<"Dosen P.A.     : "<<dosen<<endl;
                        gotoxy(42,11);cout<<"No.Sandi Dosen : "<<no_sandi<<endl;
            }
};

class mata_kuliah : public mahasiswa {
protected:
            int jumat;
            char tbt[20],kosong[10];
            char kajur[50],nipkajur[50],dosenPA[50],nipPA[50],namaMHybs[50],nimMHybs[50];
public:
            void gotoxy(int x, int y)
            {
                        HANDLE hConsoleOutput;
                        COORD dwCursorPosition;
                                    cout.flush();
                        dwCursorPosition.X = x;
                        dwCursorPosition.Y = y;
                        hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
                        SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
            }

//input MK
            void matkul()
            {
                        gotoxy(1,14);cout<<"Jumlah Mata Kuliah Yang Diambil : "; cin>>jumat;
                        puts(" =================================================================================");
        puts(" |No.|  KODE  | MATA KULIAH | KUOTA |SKS|    NAMA DOSEN    |         NIP        |");
        puts(" =================================================================================");
         for (i=1;i<=jumat;i++)
           {
             cout<<" |";
             gotoxy(2,17+i);cout<<i;
             gotoxy(5,17+i);cout<<"|";
                                       gotoxy(6,17+i);cin.getline(x[i].komat,50);cin.getline(x[i].more,100);
             gotoxy(14,17+i);cout<<"|";
             gotoxy(16,17+i);cin.getline(x[i].namat,100);
             gotoxy(28,17+i);cout<<"|";
                                      gotoxy(30,17+i);cin.getline(x[i].kel,8);
             gotoxy(34,17+i);cout<<"|";
             gotoxy(37,17+i);cin>>x[i].kredit;
                                       gotoxy(41,17+i);cout<<"|";
             gotoxy(43,17+i);cin.getline(x[i].nm_dos,50);cin.getline(x[i].ex,100);
             gotoxy(60,17+i);cout<<"|";
                                       gotoxy(62,17+i);cin>>x[i].nip;
             gotoxy(81,17+i);cout<<"|"<<endl;
                        }
                        puts(" =================================================================================");
                        cout<<" |                     Jumlah SKS yang diprogramkan semester ini     : "; cin>>x[i].kredit_in;
                        cout<<" |                     Jumlah SKS yang dikumpulkan s/d semester lalu : "; cin>>x[i].kredit_out;
                        puts(" =================================================================================");
                        cout<<endl;
                        cout<<"  IP. Semester lalu            : "; cin>>x[i].ip;
                        cout<<"  Jumlah SKS yang diijinkan : "; cin>>x[i].kredit_up;
                        cout<<"";cin.getline(kosong,10);
                        cout<<"  Ketua Jurusan         : ";cin.getline(kajur,50);
                        cout<<"  NIP Ketua Jurusan     : ";cin.getline(nipkajur,50);
                        cout<<"  Dosen PA              : ";cin.getline(dosenPA,50);
                        cout<<"  NIP Dosen PA          : ";cin.getline(nipPA,50);
                        cout<<"  Nama Mahasiswa ybs    : ";cin.getline(namaMHybs,50);
                        cout<<"  NIM                   : ";cin.getline(nimMHybs,50);
                        cout<<"  Tanggal Pembuatan KRS : ";cin.getline(tbt,20);
                        cout<<endl;
   			}

//cetak MK
            void cetak_matkul()
            {
                        cout<<endl;
                        puts(" =================================================================================");
        puts(" |No.|  KODE  | MATA KULIAH | KEL |SKS|    NAMA DOSEN    |         NIP        |");
        puts(" =================================================================================");
         for (i=1;i<=jumat;i++)
           {
             cout<<" |";
             gotoxy(2,15+i);cout<<i;
             gotoxy(5,15+i);cout<<"|";
                                       gotoxy(6,15+i);cout<<(x[i].komat,x[i].more);
             gotoxy(14,15+i);cout<<"|";
             gotoxy(16,15+i);cout<<(x[i].namat);
             gotoxy(28,15+i);cout<<"|";
                                       gotoxy(30,15+i);cout<<x[i].kel;
             gotoxy(34,15+i);cout<<"|";
             gotoxy(37,15+i);cout<<x[i].kredit;
                                       gotoxy(41,15+i);cout<<"|";
             gotoxy(43,15+i);cout<<(x[i].nm_dos,x[i].ex);
             gotoxy(60,15+i);cout<<"|";
                                       gotoxy(621,15+i);cout<<x[i].nip;
             gotoxy(81,15+i);cout<<"|"<<endl;
                                    }
                        puts(" ======================================");
                        cout<<" |                        Jumlah SKS yang diprogramkan semester ini     : "<<x[i].kredit_in<<"   |"<<endl;                        
                        cout<<" |                        Jumlah SKS yang dikumpulkan s/d semester lalu : "<<x[i].kredit_out<<"   |"<<endl;
                        puts(" =================================================================================");
                        cout<<endl;
                        cout<<"  IP. Semester lalu            : "<<x[i].ip<<"\t\tPalangka Raya, "<<tbt;
                        cout<<"\n  Jumlah kredit yang diijinkan : "<<x[i].kredit_up<<"\t\tMahasiswa yang bersangkutan"<<endl;
                        cout<<endl;                                                                                                    
                        cout<<"  KRS dibuat 4 rangkap.\t\t\t\t\t"<<namaMHybs<<endl;
                        cout<<"  1. Putih         - Mahasiswa ybs\t\t\t\t--------------"<<endl;
                        cout<<"  2. Hijau        - Dosen PA\t\t\t\t"<<nimMHybs<<endl;
                        cout<<"  3. Merah       - Fakultas"<<endl;
                        cout<<"  4. Biru Tua   - BAAK"<<endl;
                        cout<<endl;
                        cout<<endl;
                        cout<<"\t\tMembenarkan :";                                                               cout<<"\t\t\t\tMengetahui :"<<endl;
                        cout<<"\tKetua Jurusan/Program Studi";                               cout<<"\t\tDosen Pembimbing Akademik"<<endl;
                        cout<<"";                                                                                                                     cout<<endl;    
                        cout<<"";                                                                                                                     cout<<endl;
                        cout<<"         "<<kajur;                                                                       cout<<"\t\t "<<dosenPA<<endl;
                        cout<<"        ---------------------------";   cout<<"\t\t-------------------------"<<endl;
                        cout<<"         NIP. "<<nipkajur;                                             cout<<"\t\t NIP. "<<nipPA<<endl;
            }

};
void gotoxy(int, int);

            int main()
            {
                        int pilihan;
                        mahasiswa saya;
                        mata_kuliah saya_juga;
						awal :
                        saya.menu_utama();
                        gotoxy(27,7);cout<<"Pilihan [1/2/3] : "; cin>>pilihan;
                        cout<<endl;
                        if (pilihan==3) {
                           char sambutan[];                 
           for(int x=0;sambutan[x]!=NULL;x++)          
             {
               gotoxy(x,9);cout<<sambutan[x];
               for (double y=0;y<=9999000;y++){}
                                       cout<<endl;
             }

                           Sleep(3600);
                        return 0;
            }
                        switch (pilihan) {
                        case 1: saya.data_mahasiswa();
                                                saya_juga.matkul();
                                                break;
                        case 2: saya.cetak_data_mahasiswa();
                                                saya_juga.cetak_matkul();
                                                break;
                        default: gotoxy(12,9);cout<<"Maaf Pilihan Yang Anda Masukkan Salah!!!";
                        }
                        cin.get(); cin.get();
                        goto awal;
     }

            void gotoxy(int x, int y)
{
            HANDLE hConsoleOutput;
            COORD dwCursorPosition;

            cout.flush();
            dwCursorPosition.X = x;
            dwCursorPosition.Y = y;
            hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}
