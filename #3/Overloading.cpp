#include <iostream>

using namespace std;

class Bangun{
	private:
		int s, p, l, a, t;
		float r, setengah;
	public:
		void inputCircle() {
			cout<<"Masukkan jari-jari lingkaran: "<<endl;
			cin>>r;
		} 
		
		void inputRectangle() {
			cout<<"Masukkan panjang persegi: "<<endl;
			cin>>p;
			cout<<"Masukkan lebar persegi: "<<endl;
			cin>>l;
		}
		
		void inputTriangle() {
			cout<<"Masukkan angka 0.5: "<<endl;
			cin>>setengah;
			cout<<"Masukkan alas segitiga: "<<endl;
			cin>>a;
			cout<<"Masukkan tinggi segitiga: "<<endl;
			cin>>t;
		}
	Bangun area (float) {
		Bangun t;
		
		return (3.14*r*r);
	}
	
	Bangun area (int, int) {
		return (p*l);
	}
	
	Bangun area (float, int, int) {
		return (setengah*a*t);
	}
	
	void showCirle() {
		cout<<"Hasil penghitungan area adalah: "<<area(r)<<endl;
	}
	
	void showTriangle() {
		cout<<"Hasil penghitungan area adalah: "<<area(setengah, a, t)<<endl;
	}
	
	void showRectangle() {
		cout<<"Hasil penghitungan area adalah: "<<area(p, l)<<endl;
	}	
};

void main() {
	Bangun lingkaran, persegiPanjang, segitiga;
	lingkaran.inputCircle();
	lingkaran.showCirle();
	persegiPanjang.inputRectangle();
	persegiPanjang.showRectangle();
	segitiga.inputTriangle();
	segitiga.showTriangle();
}

