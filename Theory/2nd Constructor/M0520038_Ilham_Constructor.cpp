// Ilham Nur Romdoni + M0520038

#include <iostream>

using namespace std;

class time { // Define class called time
	int hours, minutes, seconds; // Separate int data members for hours, minutes and seconds
	
	public:
	time() { // 1st constructor initialize data to 0
		hours = minutes = seconds = 0;
	}
	
	time(int x, int y, int z) { // 2nd constructor initialize data to fixed values
		hours = x;
		minutes = y;
		seconds = z;
	}
	
	friend void display(time); // Member function to display time in the format hours:minutes:seconds
	friend time add(time, time); // Member function add two objects of type time passed as arguments
};

void display(time A) { // Friend function display which takes an object of class time type as argument
	cout << A.hours << ":" << A.minutes << ":" << A.seconds << endl; 
}

time add(time A, time B) { // Friend function add which takes three arguments of two objects of class time type and return a value of class time type
	time temp; // Two hour, minute and second parts are added separately and stored in a temporary array which is returned and assigned to t3.
	temp.hours = A.hours + B.hours;
	temp.minutes = A.minutes + B.minutes; 
	temp.seconds = A.seconds + B.seconds;
	return temp; 
}

int main() {
	time t1 = time(12,28,34); // Call the three arguments constructor and set the hour, minute and second part for object t1
	time t2 = time(00,00,01); // Call the three arguments constructor and set the hour, minute and second part for object t2
	time t3 = add(t1, t2); // Call the function add and pass t1 and t2 as argument as t3 = add(t1, t2);
	
	display(t1); // displayed by a call to display
	display(t3); // displayed by a call to display
}

