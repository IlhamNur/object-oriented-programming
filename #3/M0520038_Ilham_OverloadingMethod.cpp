//Ilham Nur Romdoni M0520038

#include <iostream>

using namespace std;

class Shape {
    public:
        void area(float r);
        void area(int l,int b);
        void area(float t,int d,int e);
};

void Shape::area(float r) {
    cout<<"Area of the circle is "<<3.14*r*r<<endl;
}

void Shape::area(int l,int b) {
    cout<<"Area of the rectangle is "<<l*b<<endl;
}

void Shape::area(float t,int d,int e) {
	cout<<"Area of the triangle is "<<t*d*e<<endl;
}

int main() {
	Shape s1, s2, s3;
	s1.area(7);
	s2.area(0.5, 2,3);
	s3.area(6, 7);
}
