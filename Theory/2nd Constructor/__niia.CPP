#include<iostream>
#include<iomanip>

using namespace std;

class Time //define class called time
{
    private : //separate int data members for hours, minutes, and second
        int hour;
        int minute;
        int second;
    public :
        //constructor with default value 0
        Time(int h = 0, int m  = 0, int s = 0);
        //setter function
        void setTime(int h, int m, int s);
        //print description of object in hh:mm:ss
        void print();
        //compare two time object
        Time add(Time);
};

Time :: Time(int h, int m, int s) //integer hour, minutes, second 
{
    hour = h;
    minute = m;
    second = s;
}

void Time :: setTime(int h, int m, int s) //set time 
{
    while(s>=60)
    {
        s-=60;
        m++;
    }
    second = s;
    while(m>=60)
    {
        m-=60;
        h++;
    }
    minute = m;
	while(h>=24)
    {
        h-=24;
    }
    hour = h;
}

void Time :: print()
{
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second << "\n";
}

Time Time :: add(Time otherTime)
{
	Time temp;// Two hour, minute and second parts are added separately and stored in a temporary array which is returned and assigned to t3.
	temp.hour = hour + otherTime.hour;
	temp.minute = minute + otherTime.minute; 
	temp.second = second + otherTime.second;
	return temp; 
}

int main()
{
    Time t1(12, 28, 34);
    t1.print();  // 12:28:34
    Time t2;  //object created with default value
    t2.print();  // 00:00:00
    Time t3(15, 01, 01); // buat object satu lagi
    t3.print(); //print object t3
    Time t4 = t1.add(t3); // add object t1 and t3 yg hasilnya dimasukkan ke object t4
    t4.print(); //print hasil 
    
     
}
