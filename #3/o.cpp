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
    int d,e,l,b;
    float r,t;
    int ch;
    Shape obj;
    choice:
    cout<<"Overloading method for solving area of shape";
    cout<<"\n\n1. Area of circle";
    cout<<"\n2. Area of rectangle";
    cout<<"\n3. Area of triangle";
    cout<<"\n4. Exit";
    cout<<"\n\nEnter your choice: ";
    cin>>ch;
    switch(ch) {
        case 1:
            cout<<"Enter the value of radius of the circle: ";
            cin>>r;
            obj.area(r);
            break;
        case 2:
            cout<<"Enter the sides of rectangle: ";
            cin>>l>>b;
            obj.area(l,b);
            break;
        case 3:
            cout<<"Enter the sides of triangle: ";
            cin>>d>>e;
            obj.area(0.5,d,e);
            break;
        case 4:
			return 0;  	
        default:
            cout<<"\nThe choice entered is a wrong choice"; 
    }
    
    goto choice;
    
    return 0;
}
