#include <iostream>

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
        cout << "Nama Nasabah   : " << namaNasabah << endl;
        cout << "Saldo Rekening : " << saldoRekening << endl;
        cout << endl;
    }

    void deposit(int d) {
        cout << "Deposit        : " << d << endl;
        saldoRekening = saldoRekening + d;
        cout << "Saldo Rekening : " << saldoRekening << endl;
        cout << endl;
    }

    void withdraw(int w) {
        cout << "Withdraw       : " << w << endl;
        saldoRekening = saldoRekening - w;
        cout << "Saldo Rekening : " << saldoRekening << endl;
        cout << endl;
    }

};
 
int main(){
Nasabah N1 = Nasabah("Ilham", 11000);
N1.ambilData();
N1.deposit(5000);
N1.withdraw(2000);
return 0;
}