#include <iostream>
#include <string>

using namespace std;
 
class Nasabah {
    private:
    int saldoRekening;
    string namaNasabah;

    public:
    Nasabah(string n, int s) {
        namaNasabah = n;
        saldoRekening = s;
    }
 
    void ambilData() {
        cout << "Nama Nasabah   : " << n << endl;
        cout << "Saldo Rekening : " << saldoRekening << endl;
        cout << endl;
    }

    void deposit(int d) {
        saldoRekening = saldoRekening + d;
        ambilData();
    }

    void withdraw(int w) {
        saldoRekening = saldoRekening + w;
        ambilData();
    }

};
 
int main(){
Nasabah N1 = Nasabah("Ilham", 11000);
N1.ambilData();
N1.deposit(5000);
N1.deposit(2000);
return 0;
}